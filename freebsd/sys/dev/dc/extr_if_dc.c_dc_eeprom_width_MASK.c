
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {int dc_romwidth; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int ) ;
 int FUNC_2 (struct dc_softc*,int ,int ) ;
 int FUNC_3 (struct dc_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct dc_softc*) ;
 int FUNC_5 (struct dc_softc*) ;

__attribute__((used)) static void
FUNC_6(struct dc_softc *VAR_7)
{
 int VAR_8;


 FUNC_5(VAR_7);


 FUNC_1(VAR_7, VAR_0, VAR_1);
 FUNC_4(VAR_7);
 FUNC_3(VAR_7, VAR_0, VAR_6);
 FUNC_4(VAR_7);
 FUNC_2(VAR_7, VAR_0, VAR_2);
 FUNC_4(VAR_7);
 FUNC_3(VAR_7, VAR_0, VAR_3);
 FUNC_4(VAR_7);

 for (VAR_8 = 3; VAR_8--;) {
  if (6 & (1 << VAR_8))
   FUNC_3(VAR_7, VAR_0, VAR_4);
  else
   FUNC_2(VAR_7, VAR_0, VAR_4);
  FUNC_4(VAR_7);
  FUNC_3(VAR_7, VAR_0, VAR_2);
  FUNC_4(VAR_7);
  FUNC_2(VAR_7, VAR_0, VAR_2);
  FUNC_4(VAR_7);
 }

 for (VAR_8 = 1; VAR_8 <= 12; VAR_8++) {
  FUNC_3(VAR_7, VAR_0, VAR_2);
  FUNC_4(VAR_7);
  if (!(FUNC_0(VAR_7, VAR_0) & VAR_5)) {
   FUNC_2(VAR_7, VAR_0, VAR_2);
   FUNC_4(VAR_7);
   break;
  }
  FUNC_2(VAR_7, VAR_0, VAR_2);
  FUNC_4(VAR_7);
 }


 FUNC_5(VAR_7);

 if (VAR_8 < 4 || VAR_8 > 12)
  VAR_7->dc_romwidth = 6;
 else
  VAR_7->dc_romwidth = VAR_8;


 FUNC_1(VAR_7, VAR_0, VAR_1);
 FUNC_4(VAR_7);
 FUNC_3(VAR_7, VAR_0, VAR_6);
 FUNC_4(VAR_7);
 FUNC_2(VAR_7, VAR_0, VAR_2);
 FUNC_4(VAR_7);
 FUNC_3(VAR_7, VAR_0, VAR_3);
 FUNC_4(VAR_7);


 FUNC_5(VAR_7);
}
