
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty*) ;
 scalar_t__ FUNC_1 (struct tty*,char const,int ) ;
 size_t FUNC_2 (struct tty*,void const*,size_t) ;

size_t
FUNC_3(struct tty *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const char *VAR_3;

 if (FUNC_0(VAR_0))
  return (FUNC_2(VAR_0, VAR_1, VAR_2));

 for (VAR_3 = VAR_1; VAR_2-- > 0; VAR_3++) {
  if (FUNC_1(VAR_0, *VAR_3, 0) != 0)
   break;
 }

 return (VAR_3 - (const char *)VAR_1);
}
