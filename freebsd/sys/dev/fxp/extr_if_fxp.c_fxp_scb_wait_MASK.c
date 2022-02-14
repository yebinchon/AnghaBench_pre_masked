
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct fxp_softc {int dev; } ;


 void* FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,void*,void*,void*,int ) ;

__attribute__((used)) static void
FUNC_3(struct fxp_softc *VAR_5)
{
 union {
  uint16_t w;
  uint8_t b[2];
 } VAR_6;
 int VAR_7 = 10000;

 while (FUNC_0(VAR_5, VAR_2) && --VAR_7)
  FUNC_1(2);
 if (VAR_7 == 0) {
  VAR_6.b[0] = FUNC_0(VAR_5, VAR_1);
  VAR_6.b[1] = FUNC_0(VAR_5, VAR_0);
  FUNC_2(VAR_5->dev, "SCB timeout: 0x%x 0x%x 0x%x 0x%x\n",
      FUNC_0(VAR_5, VAR_2),
      FUNC_0(VAR_5, VAR_4),
      FUNC_0(VAR_5, VAR_3), VAR_6.w);
 }
}
