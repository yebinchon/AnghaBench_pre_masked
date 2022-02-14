
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_intr {int n_alloc; int type; struct sfxge_intr_hdl* table; } ;
struct sfxge_softc {struct sfxge_intr intr; int dev; } ;
struct sfxge_intr_hdl {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sfxge_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct sfxge_softc *VAR_3)
{
 struct sfxge_intr_hdl *VAR_4;
 struct sfxge_intr *VAR_5;
 device_t VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->dev;
 VAR_5 = &VAR_3->intr;
 VAR_4 = VAR_5->table;






 VAR_7 = FUNC_1(VAR_6) ? 1 : 0;
 if (VAR_7 == 0)
  return (VAR_1);

 if ((VAR_8 = FUNC_0(VAR_6, &VAR_7)) != 0)
  return (VAR_2);


 if (FUNC_3(VAR_3, VAR_7) != 0) {
  FUNC_2(VAR_6);
  return (VAR_2);
 }

 VAR_5->type = VAR_0;
 VAR_5->n_alloc = VAR_7;

 return (0);
}
