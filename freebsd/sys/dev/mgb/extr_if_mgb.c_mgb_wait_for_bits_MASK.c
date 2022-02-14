
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dummy; } ;


 int FUNC_0 (struct mgb_softc*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct mgb_softc *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = 0;
 do {




  FUNC_1(100);
  VAR_8 = FUNC_0(VAR_3, VAR_4);
  if ((VAR_8 & VAR_5) == VAR_5 &&
      (VAR_8 & VAR_6) == 0)
   return VAR_0;
 } while (VAR_7++ < VAR_2);

 return VAR_1;
}
