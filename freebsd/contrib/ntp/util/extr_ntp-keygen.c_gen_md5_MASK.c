
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int temp ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_2 ;
 int FUNC_5 (char*,int) ;
 int VAR_3 ;

int
FUNC_6(
 const char *VAR_4
 )
{
 u_char VAR_5[VAR_1 + 1];
 FILE *VAR_6;
 int VAR_7, VAR_8;






 VAR_6 = FUNC_3("MD5key", VAR_4, VAR_2);
 for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   u_char VAR_9;

   while (1) {
    int VAR_10;

    VAR_10 = FUNC_5(
        &VAR_9, sizeof(VAR_9));
    if (-1 == VAR_10) {
     FUNC_4(&VAR_3, "ntp_crypto_random_buf() failed.\n");
     FUNC_1 (-1);
    }
    if (VAR_9 == '#')
     continue;

    if (VAR_9 > 0x20 && VAR_9 < 0x7f)
     break;
   }
   VAR_5[VAR_8] = VAR_9;
  }
  VAR_5[VAR_8] = '\0';
  FUNC_4(VAR_6, "%2d MD5 %s  # MD5 key\n", VAR_7,
      VAR_5);
 }
 FUNC_2(VAR_6);
 return (1);
}
