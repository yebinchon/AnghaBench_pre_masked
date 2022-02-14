
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct snprintf_arg {char* buf; char* str; int buf_total; int remain; int fd; int method; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct snprintf_arg*,int,int ) ;
 int FUNC_1 (struct snprintf_arg*) ;

int
FUNC_2(int VAR_1, const char *VAR_2, va_list VAR_3)
{
 char VAR_4[512];
 struct snprintf_arg VAR_5;
 int VAR_6;

 VAR_5.method = VAR_0;
 VAR_5.buf = VAR_5.str = VAR_4;
 VAR_5.buf_total = VAR_5.remain = sizeof(VAR_4);
 VAR_5.fd = VAR_1;
 VAR_6 = FUNC_0(VAR_2, &VAR_5, 10, VAR_3);
 FUNC_1(&VAR_5);
 return (VAR_6);
}
