
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {int n_alloc; struct resource* msix_res; int type; } ;
struct sfxge_softc {int evq_max; struct sfxge_intr intr; int dev; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sfxge_softc*,int) ;

__attribute__((used)) static int
FUNC_9(struct sfxge_softc *VAR_5)
{
 struct sfxge_intr *VAR_6;
 struct resource *VAR_7;
 device_t VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = VAR_5->dev;
 VAR_6 = &VAR_5->intr;


 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 == 0)
  return (VAR_1);


 FUNC_0(VAR_5->evq_max > 0, ("evq_max is zero"));
 VAR_9 = FUNC_1(VAR_9, VAR_5->evq_max);

 VAR_10 = FUNC_2(4);
 VAR_7 = FUNC_3(VAR_8, VAR_4, &VAR_10, VAR_3);
 if (VAR_7 == ((void*)0))
  return (VAR_2);

 if (FUNC_5(VAR_8, &VAR_9) != 0) {
  FUNC_4(VAR_8, VAR_4, VAR_10, VAR_7);
  return (VAR_2);
 }


 if (FUNC_8(VAR_5, VAR_9) != 0) {
  FUNC_4(VAR_8, VAR_4, VAR_10, VAR_7);
  FUNC_7(VAR_8);
  return (VAR_2);
 }

 VAR_6->type = VAR_0;
 VAR_6->n_alloc = VAR_9;
 VAR_6->msix_res = VAR_7;

 return (0);
}
