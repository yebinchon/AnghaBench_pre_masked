
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {scalar_t__ bge_msi; int bge_asicrev; int bge_chiprev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bge_softc*) ;
 int FUNC_1 (struct bge_softc*) ;

__attribute__((used)) static int
FUNC_2(struct bge_softc *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->bge_msi == 0)
  return (0);





 switch (VAR_3->bge_asicrev) {
 case 130:
 case 131:




  if (FUNC_1(VAR_3))
   VAR_4 = 1;
  break;
 case 129:
  if (VAR_3->bge_chiprev != VAR_0 &&
      VAR_3->bge_chiprev != VAR_1)
   VAR_4 = 1;
  break;
 case 128:




  if (VAR_3->bge_chiprev == VAR_2)
   break;

 default:
  if (FUNC_0(VAR_3))
   VAR_4 = 1;
 }
 return (VAR_4);
}
