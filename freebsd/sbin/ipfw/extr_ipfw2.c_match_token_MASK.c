
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct _s_x {char const* s; int x; } ;


 int FUNC_0 (char const*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

int
FUNC_2(struct _s_x *VAR_0, const char *VAR_1)
{
 struct _s_x *VAR_2;
 uint VAR_3 = FUNC_1(VAR_1);

 for (VAR_2 = VAR_0 ; VAR_3 && VAR_2->s != ((void*)0) ; VAR_2++)
  if (FUNC_1(VAR_2->s) == VAR_3 && !FUNC_0(VAR_1, VAR_2->s, VAR_3))
   return VAR_2->x;
 return (-1);
}
