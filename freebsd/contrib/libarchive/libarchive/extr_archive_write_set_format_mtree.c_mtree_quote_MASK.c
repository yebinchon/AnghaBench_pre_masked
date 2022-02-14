
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;


 int FUNC_0 (struct archive_string*,char const*,int) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct archive_string *VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 char VAR_4[4];
 unsigned char VAR_5;

 for (VAR_3 = VAR_2; *VAR_2 != '\0'; ++VAR_2) {
  if (VAR_0[*(const unsigned char *)VAR_2])
   continue;
  if (VAR_3 != VAR_2)
   FUNC_0(VAR_1, VAR_3, VAR_2 - VAR_3);
  VAR_5 = (unsigned char)*VAR_2;
  VAR_4[0] = '\\';
  VAR_4[1] = (VAR_5 / 64) + '0';
  VAR_4[2] = (VAR_5 / 8 % 8) + '0';
  VAR_4[3] = (VAR_5 % 8) + '0';
  FUNC_0(VAR_1, VAR_4, 4);
  VAR_3 = VAR_2 + 1;
 }

 if (VAR_3 != VAR_2)
  FUNC_0(VAR_1, VAR_3, VAR_2 - VAR_3);
}
