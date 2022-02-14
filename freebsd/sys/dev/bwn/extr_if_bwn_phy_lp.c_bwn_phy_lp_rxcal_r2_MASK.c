
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct bwn_wpair {int member_1; int value; int const reg; int const member_0; } ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;





 int const VAR_3 ;


 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int const) ;
 int FUNC_2 (struct bwn_mac*,int const,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bwn_wpair const*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(struct bwn_mac *VAR_4)
{
 struct bwn_softc *VAR_5 = VAR_4->mac_sc;
 static const struct bwn_wpair VAR_6[] = {
  { 129, 0x0 },
  { 134, 0x7e },
  { 134, 0x7c },
  { 133, 0x15 },
  { 132, 0x70 },
  { 131, 0x52 },
  { 130, 0x1 },
  { 134, 0x7d }
 };
 static const struct bwn_wpair VAR_7[] = {
  { 128, 0x0 },
  { 134, 0x7e },
  { 134, 0x7c },
  { 133, 0x55 },
  { 132, 0x76 }
 };
 u_int VAR_8;
 int VAR_9, VAR_10;
 uint8_t VAR_11;

 VAR_9 = FUNC_5(VAR_5->sc_dev, VAR_0, &VAR_8);
 if (VAR_9) {
  FUNC_6(VAR_5->sc_dev, "failed to fetch clock frequency: %d",
      VAR_9);
  return (VAR_9);
 }

 VAR_11 = FUNC_1(VAR_4, 129) & 0xff;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
  FUNC_2(VAR_4, VAR_6[VAR_10].reg, VAR_6[VAR_10].value);
 FUNC_0(VAR_4, VAR_2, 0xf7);
 for (VAR_10 = 2; VAR_10 < FUNC_4(VAR_6); VAR_10++)
  FUNC_2(VAR_4, VAR_6[VAR_10].reg, VAR_6[VAR_10].value);
 for (VAR_10 = 0; VAR_10 < 10000; VAR_10++) {
  if (FUNC_1(VAR_4, VAR_3) & 0x2)
   break;
  FUNC_3(1000);
 }

 if (!(FUNC_1(VAR_4, VAR_3) & 0x2))
  FUNC_2(VAR_4, 129, VAR_11);

 VAR_11 = FUNC_1(VAR_4, 128) & 0xff;

 for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_7); VAR_10++)
  FUNC_2(VAR_4, VAR_7[VAR_10].reg, VAR_7[VAR_10].value);
 if (VAR_8 == 24000000) {
  FUNC_2(VAR_4, 131, 0xfc);
  FUNC_2(VAR_4, 130, 0x0);
 } else {
  FUNC_2(VAR_4, 131, 0x13);
  FUNC_2(VAR_4, 130, 0x1);
 }
 FUNC_2(VAR_4, VAR_1, 0x7d);
 for (VAR_10 = 0; VAR_10 < 10000; VAR_10++) {
  if (FUNC_1(VAR_4, VAR_3) & 0x2)
   break;
  FUNC_3(1000);
 }
 if (!(FUNC_1(VAR_4, VAR_3) & 0x2))
  FUNC_2(VAR_4, 128, VAR_11);
 FUNC_2(VAR_4, 134, 0x7e);

 return (0);
}
