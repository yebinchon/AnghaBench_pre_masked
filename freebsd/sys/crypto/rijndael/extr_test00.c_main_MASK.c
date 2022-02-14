
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int keyInstance ;
typedef int cipherInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int *,int *,int*,int,int*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int,int*) ;
 int VAR_3 ;

int
FUNC_6(int VAR_4, char **VAR_5)
{
 keyInstance VAR_6;
 cipherInstance VAR_7;
 uint8_t VAR_8[16];
 uint8_t VAR_9[VAR_1];
 uint8_t VAR_10[VAR_1];
 int VAR_11, VAR_12;

 FUNC_4(&VAR_7, VAR_2, ((void*)0));
 for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
  VAR_8[VAR_11] = VAR_11;
 FUNC_5(&VAR_6, VAR_0, 128, VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  VAR_9[VAR_11] = VAR_11;
 FUNC_3(&VAR_7, &VAR_6, VAR_9, VAR_1 * 8, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  FUNC_1("%02x", VAR_10[VAR_11]);
 FUNC_2('\n');
 FUNC_3(&VAR_7, &VAR_6, VAR_9, VAR_1 * 8, VAR_9);
 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_1("%02x", VAR_9[VAR_11]);
  if (VAR_9[VAR_11] != VAR_10[VAR_11])
   VAR_12++;
 }
 FUNC_2('\n');
 if (VAR_12 != 0) {
  FUNC_0(VAR_3,
      "Error: inplace decryption fails in %d places\n", VAR_12);
  return (1);
 } else {
  return (0);
 }
}
