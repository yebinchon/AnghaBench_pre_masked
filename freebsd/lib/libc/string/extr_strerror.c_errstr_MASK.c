
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, const char *VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5;
 unsigned int VAR_6;
 char VAR_7[VAR_0];

 VAR_5 = VAR_7 + sizeof(VAR_7);
 *--VAR_5 = '\0';
 VAR_6 = (VAR_1 >= 0) ? VAR_1 : -VAR_1;
 do {
  *--VAR_5 = "0123456789"[VAR_6 % 10];
 } while (VAR_6 /= 10);
 if (VAR_1 < 0)
  *--VAR_5 = '-';
 *--VAR_5 = ' ';
 *--VAR_5 = ':';
 FUNC_1(VAR_3, VAR_2, VAR_4);
 FUNC_0(VAR_3, VAR_5, VAR_4);
}
