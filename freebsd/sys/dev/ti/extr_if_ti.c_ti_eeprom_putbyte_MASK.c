
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_softc {int dummy; } ;


 int FUNC_0 (struct ti_softc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ti_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ti_softc*,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct ti_softc *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 0;




 FUNC_3(VAR_5, VAR_0, VAR_4);




 for (VAR_7 = 0x80; VAR_7; VAR_7 >>= 1) {
  if (VAR_6 & VAR_7) {
   FUNC_3(VAR_5, VAR_0, VAR_3);
  } else {
   FUNC_2(VAR_5, VAR_0, VAR_3);
  }
  FUNC_1(1);
  FUNC_3(VAR_5, VAR_0, VAR_1);
  FUNC_1(1);
  FUNC_2(VAR_5, VAR_0, VAR_1);
 }




 FUNC_2(VAR_5, VAR_0, VAR_4);




 FUNC_3(VAR_5, VAR_0, VAR_1);
 VAR_8 = FUNC_0(VAR_5, VAR_0) & VAR_2;
 FUNC_2(VAR_5, VAR_0, VAR_1);

 return (VAR_8);
}
