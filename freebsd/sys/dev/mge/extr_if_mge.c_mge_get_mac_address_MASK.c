
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct mge_softc {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mge_softc*,int ) ;
 int FUNC_1 (int ,char*,void*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_3(struct mge_softc *VAR_2, uint8_t *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 uint8_t VAR_6[6];
 int VAR_7, VAR_8;




 VAR_7 = FUNC_1(VAR_2->node, "local-mac-address", (void *)VAR_6, 6);
 if (VAR_7 == 6) {
  VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
   if (VAR_6[VAR_7] != 0) {
    VAR_8 = 1;
    break;
   }

  if (VAR_8) {
   FUNC_2(VAR_6, VAR_3, 6);
   return;
  }
 }




 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_0);

 VAR_3[0] = (VAR_5 & 0xff000000) >> 24;
 VAR_3[1] = (VAR_5 & 0x00ff0000) >> 16;
 VAR_3[2] = (VAR_5 & 0x0000ff00) >> 8;
 VAR_3[3] = (VAR_5 & 0x000000ff);
 VAR_3[4] = (VAR_4 & 0x0000ff00) >> 8;
 VAR_3[5] = (VAR_4 & 0x000000ff);
}
