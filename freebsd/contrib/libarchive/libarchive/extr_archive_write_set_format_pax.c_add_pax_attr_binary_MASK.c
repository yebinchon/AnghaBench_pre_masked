
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct archive_string {int dummy; } ;


 int FUNC_0 (struct archive_string*,char const*,size_t) ;
 int FUNC_1 (struct archive_string*,char) ;
 int FUNC_2 (struct archive_string*,char const*) ;
 char const* FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(struct archive_string *VAR_0, const char *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 char VAR_8[1 + 3 * sizeof(int)];





 VAR_6 = 1 + (int)FUNC_4(VAR_1) + 1 + (int)VAR_3 + 1;







 VAR_7 = 1;
 VAR_4 = 0;
 VAR_5 = VAR_6;
 while (VAR_5 > 0) {
  VAR_5 = VAR_5 / 10;
  VAR_4++;
  VAR_7 = VAR_7 * 10;
 }






 if (VAR_6 + VAR_4 >= VAR_7)
  VAR_4++;


 VAR_8[sizeof(VAR_8) - 1] = 0;
 FUNC_2(VAR_0, FUNC_3(VAR_8 + sizeof(VAR_8) - 1, VAR_6 + VAR_4));
 FUNC_1(VAR_0, ' ');
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, '=');
 FUNC_0(VAR_0, VAR_2, VAR_3);
 FUNC_1(VAR_0, '\n');
}
