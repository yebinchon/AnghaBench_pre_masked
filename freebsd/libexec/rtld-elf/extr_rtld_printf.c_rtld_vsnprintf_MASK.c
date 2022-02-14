
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct snprintf_arg {char* buf; char* str; size_t buf_total; size_t remain; int fd; int method; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct snprintf_arg*,int,int ) ;

int
FUNC_1(char *VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 struct snprintf_arg VAR_5;
 int VAR_6;

 VAR_5.method = VAR_0;
 VAR_5.buf = VAR_5.str = VAR_1;
 VAR_5.buf_total = VAR_5.remain = VAR_2;
 VAR_5.fd = -1;
 VAR_6 = FUNC_0(VAR_3, &VAR_5, 10, VAR_4);
 if (VAR_5.remain >= 1)
  *VAR_5.str++ = '\0';
 return (VAR_6);
}
