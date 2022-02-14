
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct cbb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int,struct resource*) ;
 int FUNC_2 (struct cbb_softc*,struct resource*) ;
 int FUNC_3 (int ) ;
 struct cbb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct resource *VAR_5)
{
 struct cbb_softc *VAR_6 = FUNC_4(VAR_1);
 int VAR_7;

 if (FUNC_5(VAR_5) & VAR_0) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_7 != 0)
   return (VAR_7);
 }
 FUNC_2(VAR_6, VAR_5);
 return (FUNC_0(FUNC_3(VAR_1), VAR_2,
     VAR_3, VAR_4, VAR_5));
}
