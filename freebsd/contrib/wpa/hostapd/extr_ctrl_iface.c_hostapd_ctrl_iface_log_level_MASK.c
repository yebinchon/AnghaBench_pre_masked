
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct hostapd_data *VAR_2, char *VAR_3,
     char *VAR_4, size_t VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;


 if (*VAR_3 == '\0') {
  VAR_6 = VAR_4;
  VAR_7 = VAR_4 + VAR_5;
  VAR_9 = FUNC_3(VAR_6, VAR_7 - VAR_6, "Current level: %s\n"
      "Timestamp: %d\n",
      FUNC_1(VAR_0),
      VAR_1);
  if (FUNC_4(VAR_7 - VAR_6, VAR_9))
   VAR_9 = 0;

  return VAR_9;
 }

 while (*VAR_3 == ' ')
  VAR_3++;

 VAR_8 = FUNC_5(VAR_3, ' ');
 if (VAR_8) {
  *VAR_8++ = '\0';
  while (*VAR_8 == ' ') {
   VAR_8++;
  }
 }

 if (FUNC_6(VAR_3)) {
  int VAR_10 = FUNC_7(VAR_3);
  if (VAR_10 < 0)
   return -1;
  VAR_0 = VAR_10;
 }

 if (VAR_8 && FUNC_6(VAR_8))
  VAR_1 = FUNC_0(VAR_8);

 FUNC_2(VAR_4, "OK\n", 3);
 return 3;
}
