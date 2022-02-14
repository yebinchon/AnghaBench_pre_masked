
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct ffec_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ffec_softc*,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,char,char,char,char,char,char) ;

__attribute__((used)) static void
FUNC_3(struct ffec_softc *VAR_4, uint8_t *VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 VAR_6 = FUNC_0(VAR_4, VAR_0);
 VAR_7 = FUNC_0(VAR_4, VAR_2) & VAR_1;
 if ((VAR_6 | VAR_7) != 0) {
  VAR_5[0] = VAR_6 >> 24;
  VAR_5[1] = VAR_6 >> 16;
  VAR_5[2] = VAR_6 >> 8;
  VAR_5[3] = VAR_6 >> 0;
  VAR_5[4] = VAR_7 >> 24;
  VAR_5[5] = VAR_7 >> 16;
 } else {
  VAR_8 = FUNC_1() & 0x00ffffff;
  VAR_5[0] = 'b';
  VAR_5[1] = 's';
  VAR_5[2] = 'd';
  VAR_5[3] = VAR_8 >> 16;
  VAR_5[4] = VAR_8 >> 8;
  VAR_5[5] = VAR_8 >> 0;
 }

 if (VAR_3) {
  FUNC_2(VAR_4->dev,
      "MAC address %02x:%02x:%02x:%02x:%02x:%02x:\n",
      VAR_5[0], VAR_5[1], VAR_5[2],
      VAR_5[3], VAR_5[4], VAR_5[5]);
 }
}
