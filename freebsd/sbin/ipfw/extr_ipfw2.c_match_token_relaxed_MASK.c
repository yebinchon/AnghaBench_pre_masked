
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _s_x {int x; int * s; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;

int
FUNC_2(struct _s_x *VAR_0, const char *VAR_1)
{
 struct _s_x *VAR_2, *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = 0;

 for (VAR_2 = VAR_0 ; VAR_4 != 0 && VAR_2->s != ((void*)0) ; VAR_2++) {
  if (FUNC_1(VAR_2->s, VAR_1, VAR_4) != 0)
   continue;
  VAR_3 = VAR_2;
  VAR_5++;
 }

 if (VAR_5 == 1)
  return (VAR_3->x);

 return (VAR_5 > 0 ? -2: -1);
}
