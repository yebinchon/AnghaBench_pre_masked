
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int an_ifp; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct an_softc*,int) ;
 int FUNC_1 (struct an_softc*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct an_softc *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;
 int VAR_14, VAR_15;

 switch (VAR_12) {
 case 129:
  VAR_14 = VAR_4;
  VAR_15 = VAR_0;
  break;
 case 128:
  VAR_14 = VAR_5;
  VAR_15 = VAR_1;
  break;
 default:
  FUNC_2(VAR_9->an_ifp, "invalid data path: %x\n", VAR_12);
  return(VAR_7);
 }

 FUNC_1(VAR_9, VAR_14, VAR_10);
 FUNC_1(VAR_9, VAR_15, VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  if (!(FUNC_0(VAR_9, VAR_15) & (VAR_2|VAR_3)))
   break;
 }

 if (VAR_13 == VAR_6)
  return(VAR_8);

 return(0);
}
