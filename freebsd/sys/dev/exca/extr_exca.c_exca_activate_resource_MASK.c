
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct exca_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct exca_softc*,int ,struct resource*) ;
 int FUNC_4 (struct exca_softc*,int ,struct resource*) ;
 int FUNC_5 (struct resource*) ;

int
FUNC_6(struct exca_softc *VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, struct resource *VAR_6)
{
 int VAR_7;

 if (FUNC_5(VAR_6) & VAR_1)
  return (0);
 VAR_7 = FUNC_0(FUNC_2(VAR_2->dev), VAR_3,
     VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return (VAR_7);
 switch (VAR_4) {
 case 129:
  VAR_7 = FUNC_3(VAR_2, VAR_0, VAR_6);
  break;
 case 128:
  VAR_7 = FUNC_4(VAR_2, 0, VAR_6);
  break;
 }
 if (VAR_7)
  FUNC_1(FUNC_2(VAR_2->dev), VAR_3,
      VAR_4, VAR_5, VAR_6);
 return (VAR_7);
}
