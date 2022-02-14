
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scard_data {int dummy; } ;
typedef scalar_t__ sim_types ;
typedef int resp ;
typedef int get_resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 long FUNC_1 (struct scard_data*,unsigned char*,int,unsigned char*,size_t*) ;
 int FUNC_2 (int ,char*,unsigned char*,size_t) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct scard_data *VAR_7, unsigned short VAR_8,
         unsigned char *VAR_9, size_t *VAR_10,
         sim_types VAR_11, unsigned char *VAR_12,
         size_t VAR_13)
{
 long VAR_14;
 unsigned char VAR_15[3];
 unsigned char VAR_16[50] = { VAR_5 };
 int VAR_17;
 unsigned char VAR_18[5] = { VAR_4 };
 size_t VAR_19, VAR_20;

 if (VAR_11 == VAR_3) {
  VAR_16[0] = VAR_6;
  VAR_16[3] = 0x04;
  VAR_18[0] = VAR_6;
 }

 FUNC_3(VAR_0, "SCARD: select file %04x", VAR_8);
 if (VAR_12) {
  FUNC_2(VAR_0, "SCARD: select file by AID",
       VAR_12, VAR_13);
  if (5 + VAR_13 > sizeof(VAR_16))
   return -1;
  VAR_16[2] = 0x04;
  VAR_16[4] = VAR_13;
  FUNC_0(VAR_16 + 5, VAR_12, VAR_13);
  VAR_17 = 5 + VAR_13;
 } else {
  VAR_16[5] = VAR_8 >> 8;
  VAR_16[6] = VAR_8 & 0xff;
  VAR_17 = 7;
 }
 VAR_19 = sizeof(VAR_15);
 VAR_14 = FUNC_1(VAR_7, VAR_16, VAR_17, VAR_15, &VAR_19);
 if (VAR_14 != VAR_2) {
  FUNC_3(VAR_1, "SCARD: SCardTransmit failed "
      "(err=0x%lx)", VAR_14);
  return -1;
 }

 if (VAR_19 != 2) {
  FUNC_3(VAR_1, "SCARD: unexpected resp len "
      "%d (expected 2)", (int) VAR_19);
  return -1;
 }

 if (VAR_15[0] == 0x98 && VAR_15[1] == 0x04) {

  FUNC_3(VAR_1, "SCARD: Security status not satisfied "
      "(PIN_WLAN)");
  return -1;
 }

 if (VAR_15[0] == 0x6e) {
  FUNC_3(VAR_0, "SCARD: used CLA not supported");
  return -1;
 }

 if (VAR_15[0] != 0x6c && VAR_15[0] != 0x9f && VAR_15[0] != 0x61) {
  FUNC_3(VAR_1, "SCARD: unexpected response 0x%02x "
      "(expected 0x61, 0x6c, or 0x9f)", VAR_15[0]);
  return -1;
 }

 VAR_18[4] = VAR_15[1];
 FUNC_3(VAR_0, "SCARD: trying to get response (%d bytes)",
     VAR_15[1]);

 VAR_20 = *VAR_10;
 VAR_14 = FUNC_1(VAR_7, VAR_18, sizeof(VAR_18), VAR_9, &VAR_20);
 if (VAR_14 == VAR_2) {
  *VAR_10 = VAR_15[1] < VAR_20 ? VAR_15[1] : VAR_20;
  return 0;
 }

 FUNC_3(VAR_1, "SCARD: SCardTransmit err=0x%lx\n", VAR_14);
 return -1;
}
