
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bwn_mac {int mac_sc; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct bwn_mac*,int*) ;
 int FUNC_3 (struct bwn_mac*,int ,int const) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static void FUNC_5(struct bwn_mac *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;
 uint8_t VAR_5;

 const int VAR_6[] = { 0, 4, 8, };
 const uint8_t VAR_7[][3] = {
  { 0x2, 0x12, 0x8 },
  { 0x2, 0x18, 0x2 },
 };

 if ((VAR_2 = FUNC_2(VAR_0, &VAR_5)))
  return;

 switch (VAR_5) {
 case 0:
  for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
   for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_7[0]); VAR_4++) {
    VAR_3 = VAR_1 ? 0x20 : 0x00;
    VAR_3 += VAR_6[VAR_4];
    FUNC_3(VAR_0, FUNC_1(9, VAR_3),
            VAR_7[VAR_1][VAR_4]);
   }
  }
  break;
 default:
  FUNC_0(VAR_0->mac_sc, "Unsupported antswlut: %d\n", VAR_5);
  break;
 }
}
