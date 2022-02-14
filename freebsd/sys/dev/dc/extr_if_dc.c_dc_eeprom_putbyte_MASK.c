
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {int dc_romwidth; } ;


 int FUNC_0 (struct dc_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dc_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dc_softc*) ;

__attribute__((used)) static void
FUNC_5(struct dc_softc *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = VAR_0 >> 6;
 for (VAR_7 = 3; VAR_7--; ) {
  if (VAR_6 & (1 << VAR_7))
   FUNC_1(VAR_4, VAR_1, VAR_3);
  else
   FUNC_0(VAR_4, VAR_1, VAR_3);
  FUNC_4(VAR_4);
  FUNC_1(VAR_4, VAR_1, VAR_2);
  FUNC_4(VAR_4);
  FUNC_0(VAR_4, VAR_1, VAR_2);
  FUNC_4(VAR_4);
 }




 for (VAR_7 = VAR_4->dc_romwidth; VAR_7--;) {
  if (VAR_5 & (1 << VAR_7)) {
   FUNC_3(VAR_3);
  } else {
   FUNC_2(VAR_3);
  }
  FUNC_4(VAR_4);
  FUNC_3(VAR_2);
  FUNC_4(VAR_4);
  FUNC_2(VAR_2);
  FUNC_4(VAR_4);
 }
}
