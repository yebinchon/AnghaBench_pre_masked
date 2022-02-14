
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct milenage_parameters {int* sqn; int res_len; int ki; int amf; int opc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct milenage_parameters*) ;
 struct milenage_parameters* FUNC_1 (char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,char,int) ;
 int FUNC_4 (int ,int ,int ,int*,int *,int *,int *,int *,int *,size_t*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (char*,int,char*,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,int,int *,size_t) ;

__attribute__((used)) static int FUNC_9(char *VAR_8, char *VAR_9, size_t VAR_10)
{

 char *VAR_11, *VAR_12;
 u8 VAR_13[VAR_3];
 u8 VAR_14[VAR_0];
 u8 VAR_15[VAR_2];
 u8 VAR_16[VAR_1];
 u8 VAR_17[VAR_4];
 size_t VAR_18;
 int VAR_19;
 struct milenage_parameters *VAR_20;
 int VAR_21 = 0;

 VAR_20 = FUNC_1(VAR_8);
 if (VAR_20) {
  if (FUNC_6(VAR_13, VAR_3) < 0)
   return -1;
  VAR_18 = VAR_4;
  FUNC_2(VAR_20->sqn);



  VAR_6 = 1;
  if (VAR_7) {
   FUNC_5("AKA: Milenage with SQN=%02x%02x%02x%02x%02x%02x\n",
          VAR_20->sqn[0], VAR_20->sqn[1], VAR_20->sqn[2],
          VAR_20->sqn[3], VAR_20->sqn[4], VAR_20->sqn[5]);
  }
  FUNC_4(VAR_20->opc, VAR_20->amf, VAR_20->ki, VAR_20->sqn, VAR_13,
      VAR_14, VAR_15, VAR_16, VAR_17, &VAR_18);
  if (VAR_20->res_len >= VAR_5 &&
      VAR_20->res_len <= VAR_4 &&
      VAR_20->res_len < VAR_18)
   VAR_18 = VAR_20->res_len;
 } else {
  FUNC_5("Unknown IMSI: %s\n", VAR_8);
  VAR_21 = 1;

 }

 VAR_11 = VAR_9;
 VAR_12 = VAR_9 + VAR_10;
 VAR_19 = FUNC_7(VAR_11, VAR_12 - VAR_11, "AKA-RESP-AUTH %s ", VAR_8);
 if (VAR_19 < 0 || VAR_19 >= VAR_12 - VAR_11)
  return -1;
 VAR_11 += VAR_19;
 if (VAR_21) {
  VAR_19 = FUNC_7(VAR_11, VAR_12 - VAR_11, "FAILURE");
  if (VAR_19 < 0 || VAR_19 >= VAR_12 - VAR_11)
   return -1;
  VAR_11 += VAR_19;
  return 0;
 }
 VAR_11 += FUNC_8(VAR_11, VAR_12 - VAR_11, VAR_13, VAR_3);
 *VAR_11++ = ' ';
 VAR_11 += FUNC_8(VAR_11, VAR_12 - VAR_11, VAR_14, VAR_0);
 *VAR_11++ = ' ';
 VAR_11 += FUNC_8(VAR_11, VAR_12 - VAR_11, VAR_15, VAR_2);
 *VAR_11++ = ' ';
 VAR_11 += FUNC_8(VAR_11, VAR_12 - VAR_11, VAR_16, VAR_1);
 *VAR_11++ = ' ';
 VAR_11 += FUNC_8(VAR_11, VAR_12 - VAR_11, VAR_17, VAR_18);

 return 0;
}
