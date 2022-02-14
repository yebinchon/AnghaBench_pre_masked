
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dc_softc {int dummy; } ;


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
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dc_softc*) ;
 int FUNC_7 (struct dc_softc*) ;
 int FUNC_8 (struct dc_softc*,int) ;

__attribute__((used)) static void
FUNC_9(struct dc_softc *VAR_6, int VAR_7, uint16_t *VAR_8)
{
 int VAR_9;
 uint16_t VAR_10 = 0;


 FUNC_7(VAR_6);


 FUNC_1(VAR_6, VAR_0, VAR_1);
 FUNC_6(VAR_6);
 FUNC_3(VAR_6, VAR_0, VAR_5);
 FUNC_6(VAR_6);
 FUNC_2(VAR_6, VAR_0, VAR_2);
 FUNC_6(VAR_6);
 FUNC_3(VAR_6, VAR_0, VAR_3);
 FUNC_6(VAR_6);




 FUNC_8(VAR_6, VAR_7);




 for (VAR_9 = 0x8000; VAR_9; VAR_9 >>= 1) {
  FUNC_5(VAR_2);
  FUNC_6(VAR_6);
  if (FUNC_0(VAR_6, VAR_0) & VAR_4)
   VAR_10 |= VAR_9;
  FUNC_6(VAR_6);
  FUNC_4(VAR_2);
  FUNC_6(VAR_6);
 }


 FUNC_7(VAR_6);

 *VAR_8 = VAR_10;
}
