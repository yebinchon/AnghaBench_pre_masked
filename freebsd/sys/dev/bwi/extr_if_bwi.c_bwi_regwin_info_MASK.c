
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bwi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct bwi_softc*,int ) ;
 int FUNC_3 (struct bwi_softc*,int ,char*,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bwi_softc *VAR_3, uint16_t *VAR_4, uint8_t *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_1);
 *VAR_4 = FUNC_1(VAR_6);
 *VAR_5 = FUNC_0(VAR_6);

 FUNC_3(VAR_3, VAR_0, "regwin: type 0x%03x, rev %d, "
  "vendor 0x%04x\n", *VAR_4, *VAR_5,
  FUNC_4(VAR_6, VAR_2));
}
