
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char* s; } ;
struct archive_cmdline {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_string*) ;
 int FUNC_1 (struct archive_string*) ;
 scalar_t__ FUNC_2 (struct archive_string*) ;
 int FUNC_3 (struct archive_cmdline*,char const*) ;
 int FUNC_4 (struct archive_cmdline*,char*) ;
 scalar_t__ FUNC_5 (struct archive_string*,char const*) ;
 char* FUNC_6 (char*,char) ;

int
FUNC_7(struct archive_cmdline *VAR_2, const char *VAR_3)
{
 struct archive_string VAR_4;
 const char *VAR_5;
 ssize_t VAR_6;
 int VAR_7;

 FUNC_1(&VAR_4);


 VAR_6 = FUNC_5(&VAR_4, VAR_3);
 if (VAR_6 < 0) {
  VAR_7 = VAR_0;
  goto exit_function;
 }
 if (FUNC_2(&VAR_4) == 0) {
  VAR_7 = VAR_0;
  goto exit_function;
 }
 VAR_7 = FUNC_4(VAR_2, VAR_4.s);
 if (VAR_7 != VAR_1)
  goto exit_function;
 VAR_5 = FUNC_6(VAR_4.s, '/');
 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_4.s;
 else
  VAR_5++;
 VAR_7 = FUNC_3(VAR_2, VAR_5);
 if (VAR_7 != VAR_1)
  goto exit_function;
 VAR_3 += VAR_6;

 for (;;) {
  VAR_6 = FUNC_5(&VAR_4, VAR_3);
  if (VAR_6 < 0) {
   VAR_7 = VAR_0;
   goto exit_function;
  }
  if (VAR_6 == 0)
   break;
  VAR_3 += VAR_6;
  if (FUNC_2(&VAR_4) == 0 && *VAR_3 == '\0')
   break;
  VAR_7 = FUNC_3(VAR_2, VAR_4.s);
  if (VAR_7 != VAR_1)
   goto exit_function;
 }
 VAR_7 = VAR_1;
exit_function:
 FUNC_0(&VAR_4);
 return (VAR_7);
}
