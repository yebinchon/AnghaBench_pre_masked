
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct state {size_t sz; unsigned char* str; unsigned char* s; unsigned char* theend; int reserve; int append_char; scalar_t__ max_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct state*,char const*,int ) ;

int
FUNC_1 (char *VAR_2, size_t VAR_3, const char *VAR_4, va_list VAR_5)
{
  struct state VAR_6;
  int VAR_7;
  unsigned char *VAR_8 = (unsigned char *)VAR_2;

  VAR_6.max_sz = 0;
  VAR_6.sz = VAR_3;
  VAR_6.str = VAR_8;
  VAR_6.s = VAR_8;
  VAR_6.theend = VAR_8 + VAR_3 - 1;
  VAR_6.append_char = VAR_0;
  VAR_6.reserve = VAR_1;

  VAR_7 = FUNC_0 (&VAR_6, VAR_4, VAR_5);
  *VAR_6.s = '\0';
  if (VAR_7)
    return VAR_3;
  else
    return VAR_6.s - VAR_6.str;
}
