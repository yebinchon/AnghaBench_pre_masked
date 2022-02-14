
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_public_key {int rsa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,unsigned long) ;
 int FUNC_2 (int const*,size_t,int*,unsigned long*,int ,int *) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct crypto_public_key *VAR_4,
        const u8 *VAR_5, size_t VAR_6,
        u8 *VAR_7, size_t *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 u8 *VAR_11;

 VAR_10 = *VAR_8;
 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, &VAR_10, VAR_3,
     &VAR_4->rsa);
 if (VAR_9 != VAR_0) {
  FUNC_3(VAR_1, "LibTomCrypt: rsa_exptmod failed: %s",
      FUNC_0(VAR_9));
  return -1;
 }
 if (VAR_10 < 3 + 8 + 16 ||
     VAR_7[0] != 0x00 || VAR_7[1] != 0x01 || VAR_7[2] != 0xff) {
  FUNC_3(VAR_2, "LibTomCrypt: Invalid signature EB "
      "structure");
  return -1;
 }

 VAR_11 = VAR_7 + 3;
 while (VAR_11 < VAR_7 + VAR_10 && *VAR_11 == 0xff)
  VAR_11++;
 if (VAR_11 - VAR_7 - 2 < 8) {

  FUNC_3(VAR_2, "LibTomCrypt: Too short signature "
      "padding");
  return -1;
 }

 if (VAR_11 + 16 >= VAR_7 + VAR_10 || *VAR_11 != 0x00) {
  FUNC_3(VAR_2, "LibTomCrypt: Invalid signature EB "
      "structure (2)");
  return -1;
 }
 VAR_11++;
 VAR_10 -= VAR_11 - VAR_7;


 FUNC_1(VAR_7, VAR_11, VAR_10);
 *VAR_8 = VAR_10;

 return 0;
}
