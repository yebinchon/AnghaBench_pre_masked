
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tzbuf ;
struct tm {int dummy; } ;
struct iso8601_fmt {char* format_string; } ;
typedef int fmtbuf ;
typedef int buf ;


 struct iso8601_fmt const* VAR_0 ;
 struct iso8601_fmt const* VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,struct tm*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct tm *VAR_2)
{
 const struct iso8601_fmt *VAR_3;
 char VAR_4[32], VAR_5[32], VAR_6[8];

 VAR_4[0] = 0;
 for (VAR_3 = VAR_0; VAR_3 <= VAR_1; VAR_3++)
  FUNC_3(VAR_4, VAR_3->format_string, sizeof(VAR_4));

 (void)FUNC_2(VAR_5, sizeof(VAR_5), VAR_4, VAR_2);

 if (VAR_1 > VAR_0) {
  (void)FUNC_2(VAR_6, sizeof(VAR_6), "%z", VAR_2);
  FUNC_0(&VAR_6[4], &VAR_6[3], 3);
  VAR_6[3] = ':';
  FUNC_3(VAR_5, VAR_6, sizeof(VAR_5));
 }

 FUNC_1(VAR_5);
}
