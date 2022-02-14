
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int br_hmac_drbg_context ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 int FUNC_1 (int *,int *,char*,int) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (int *,unsigned char*,size_t,int *) ;
 int FUNC_4 (unsigned char*,size_t,int *) ;
 int FUNC_5 (int *,unsigned char*,size_t,int *,int ,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 int FUNC_8 (int *,unsigned char*,size_t,int *) ;
 int FUNC_9 (unsigned char*,size_t,int *) ;
 int FUNC_10 (int *,unsigned char*,size_t,int *,int ,int *,int) ;
 int FUNC_11 (int ) ;
 int VAR_0 ;
 int FUNC_12 (char*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_15(void)
{
 br_hmac_drbg_context VAR_2;
 int VAR_3;

 FUNC_14("Test ModPow/i31: ");

 FUNC_1(&VAR_2, &VAR_0, "seed modpow", 11);
 for (VAR_3 = 10; VAR_3 <= 500; VAR_3 ++) {
  size_t VAR_4;
  unsigned char VAR_5[128], VAR_6[128], VAR_7[128], VAR_8[128];
  unsigned char VAR_9[128];
  unsigned VAR_10;
  uint32_t VAR_11[35], VAR_12[35];
  uint16_t VAR_13[70], VAR_14[70];
  uint32_t VAR_15[1000];
  uint16_t VAR_16[2000];

  VAR_4 = (VAR_3 + 7) >> 3;
  FUNC_0(&VAR_2, VAR_5, VAR_4);
  FUNC_0(&VAR_2, VAR_6, VAR_4);
  FUNC_0(&VAR_2, VAR_9, VAR_4);
  VAR_5[VAR_4 - 1] |= 0x01;
  VAR_10 = 0xFF >> ((int)(VAR_4 << 3) - VAR_3);
  VAR_5[0] &= VAR_10;
  VAR_5[0] |= (VAR_10 - (VAR_10 >> 1));
  VAR_6[0] &= (VAR_10 >> 1);

  FUNC_7(VAR_12, VAR_5, VAR_4);
  FUNC_8(VAR_11, VAR_6, VAR_4, VAR_12);
  FUNC_10(VAR_11, VAR_9, VAR_4, VAR_12, FUNC_11(VAR_12[1]),
   VAR_15, (sizeof VAR_15) / (sizeof VAR_15[0]));
  FUNC_9(VAR_7, VAR_4, VAR_11);

  FUNC_2(VAR_14, VAR_5, VAR_4);
  FUNC_3(VAR_13, VAR_6, VAR_4, VAR_14);
  FUNC_5(VAR_13, VAR_9, VAR_4, VAR_14, FUNC_6(VAR_14[1]),
   VAR_16, (sizeof VAR_16) / (sizeof VAR_16[0]));
  FUNC_4(VAR_8, VAR_4, VAR_13);

  FUNC_12("ModPow i31/i15", VAR_7, VAR_8, VAR_4);

  FUNC_14(".");
  FUNC_13(VAR_1);
 }

 FUNC_14(" done.\n");
 FUNC_13(VAR_1);
}
