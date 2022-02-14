
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef char u_char ;
struct emac_softc {int dummy; } ;
typedef int rootkey ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct emac_softc*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,char*,size_t*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(struct emac_softc *VAR_4, uint8_t *VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 u_char VAR_9[16];
 size_t VAR_10;
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_7 = FUNC_0(VAR_4, VAR_2);
 if ((VAR_6 | VAR_7) != 0 && (VAR_6 | VAR_7) != 0xffffff) {
  VAR_5[0] = (VAR_7 >> 16) & 0xff;
  VAR_5[1] = (VAR_7 >> 8) & 0xff;
  VAR_5[2] = (VAR_7 >> 0) & 0xff;
  VAR_5[3] = (VAR_6 >> 16) & 0xff;
  VAR_5[4] = (VAR_6 >> 8) & 0xff;
  VAR_5[5] = (VAR_6 >> 0) & 0xff;
 } else {
  VAR_10 = sizeof(VAR_9);
  if (FUNC_2(VAR_0, VAR_9,
      &VAR_10) == 0) {
   VAR_5[0] = 0x2;
   VAR_5[1] = VAR_9[3];
   VAR_5[2] = VAR_9[12];
   VAR_5[3] = VAR_9[13];
   VAR_5[4] = VAR_9[14];
   VAR_5[5] = VAR_9[15];
  }
  else {
   VAR_8 = FUNC_1() & 0x00ffffff;
   VAR_5[0] = 'b';
   VAR_5[1] = 's';
   VAR_5[2] = 'd';
   VAR_5[3] = (VAR_8 >> 16) & 0xff;
   VAR_5[4] = (VAR_8 >> 8) & 0xff;
   VAR_5[5] = (VAR_8 >> 0) & 0xff;
  }
 }
 if (VAR_3)
  FUNC_4("MAC address: %s\n", FUNC_3(VAR_5));
}
