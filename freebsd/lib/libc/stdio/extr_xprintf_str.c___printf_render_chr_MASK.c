
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef int wchar_t ;
struct printf_info {char spec; scalar_t__ is_long; } ;
struct __printf_io {int dummy; } ;
typedef int mbstate_t ;


 int VAR_0 ;
 int FUNC_0 (struct __printf_io*) ;
 int FUNC_1 (struct __printf_io*,struct printf_info const*,...) ;
 size_t FUNC_2 (char*,int ,int *) ;

int
FUNC_3(struct __printf_io *VAR_1, const struct printf_info *VAR_2, const void *const *VAR_3)
{
 int VAR_4;
 wint_t VAR_5;
 unsigned char VAR_6;
 static const mbstate_t VAR_7;
 mbstate_t VAR_8;
 size_t VAR_9;
 char VAR_10[VAR_0];

 if (VAR_2->is_long || VAR_2->spec == 'C') {
  VAR_5 = *((wint_t *)VAR_3[0]);

  VAR_8 = VAR_7;
  VAR_9 = FUNC_2(VAR_10, (wchar_t)VAR_5, &VAR_8);
  if (VAR_9 == (size_t) -1)
   return (-1);
  return (FUNC_1(VAR_1, VAR_2, VAR_10, VAR_9));
 }
 VAR_4 = *((int *)VAR_3[0]);
 VAR_6 = VAR_4;
 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_6, 1);
 FUNC_0(VAR_1);
 return (VAR_4);
}
