
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wchar_t ;
struct printf_info {char spec; int prec; scalar_t__ is_long; } ;
struct __printf_io {int dummy; } ;


 int FUNC_0 (struct __printf_io*,struct printf_info const*,char const*,int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(struct __printf_io *VAR_0, const struct printf_info *VAR_1, const void *const *VAR_2)
{
 const char *VAR_3;
 wchar_t *VAR_4;
 char *VAR_5;
 int VAR_6;

 if (VAR_1->is_long || VAR_1->spec == 'S') {
  VAR_4 = *((wint_t **)VAR_2[0]);
  if (VAR_4 == ((void*)0))
   return (FUNC_0(VAR_0, VAR_1, "(null)", 6));
  VAR_5 = FUNC_1(VAR_4, VAR_1->prec);
  if (VAR_5 == ((void*)0))
   return (-1);
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5, FUNC_3(VAR_5));
  FUNC_2(VAR_5);
  return (VAR_6);
 }
 VAR_3 = *((char **)VAR_2[0]);
 if (VAR_3 == ((void*)0))
  return (FUNC_0(VAR_0, VAR_1, "(null)", 6));
 VAR_6 = FUNC_3(VAR_3);
 if (VAR_1->prec >= 0 && VAR_1->prec < VAR_6)
  VAR_6 = VAR_1->prec;
 return (FUNC_0(VAR_0, VAR_1, VAR_3, VAR_6));
}
