
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct exca_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct exca_softc*,struct resource*) ;
 int FUNC_3 (struct exca_softc*,struct resource*) ;
 int FUNC_4 (struct resource*) ;

int
FUNC_5(struct exca_softc *VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, struct resource *VAR_6)
{
 if (FUNC_4(VAR_6) & VAR_1) {
  switch (VAR_4) {
  case 129:
   if (FUNC_2(VAR_2, VAR_6))
    return (VAR_0);
   break;
  case 128:
   if (FUNC_3(VAR_2, VAR_6))
    return (VAR_0);
   break;
  }
 }
 return (FUNC_0(FUNC_1(VAR_2->dev), VAR_3,
     VAR_4, VAR_5, VAR_6));
}
