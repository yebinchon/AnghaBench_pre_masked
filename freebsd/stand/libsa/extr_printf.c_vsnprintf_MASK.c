
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct print_buf {char* buf; size_t size; } ;


 int FUNC_0 (char const*,int *,struct print_buf*,int,int ) ;
 int VAR_0 ;

int
FUNC_1(char *VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 struct print_buf VAR_5;
 int VAR_6;

 VAR_5.buf = VAR_1;
 VAR_5.size = VAR_2;

 VAR_6 = FUNC_0(VAR_3, &VAR_0, &VAR_5, 10, VAR_4);

 if (VAR_5.size >= 1)
  *(VAR_5.buf)++ = 0;

 return (VAR_6);
}
