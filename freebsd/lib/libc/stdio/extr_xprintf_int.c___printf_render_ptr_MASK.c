
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct printf_info {char spec; int alt; int is_long_double; } ;
struct __printf_io {int dummy; } ;


 int FUNC_0 (struct __printf_io*,struct printf_info*,void const**) ;

int
FUNC_1(struct __printf_io *VAR_0, const struct printf_info *VAR_1, const void *const *VAR_2)
{
 struct printf_info VAR_3;
 uintmax_t VAR_4;
 const void *VAR_5;
 VAR_4 = (uintmax_t)(uintptr_t) *((void **)VAR_2[0]);
 VAR_3 = *VAR_1;

 VAR_3 = 'x';
 VAR_3 = 1;
 VAR_3 = 1;
 VAR_5 = &VAR_4;
 return (FUNC_0(VAR_0, &VAR_3, &VAR_5));
}
