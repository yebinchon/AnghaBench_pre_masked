
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logpage_function {int dummy; } ;


 struct logpage_function* FUNC_0 (int *) ;
 int FUNC_1 (struct logpage_function*,struct logpage_function*,int ) ;
 int FUNC_2 (int *,struct logpage_function*,int ) ;
 struct logpage_function* FUNC_3 (struct logpage_function*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct logpage_function*,struct logpage_function*) ;
 int VAR_1 ;

void
FUNC_5(struct logpage_function *VAR_2)
{
 struct logpage_function *VAR_3, *VAR_4;

 VAR_4 = ((void*)0);
 VAR_3 = FUNC_0(&VAR_1);
 while (VAR_3 != ((void*)0)) {
  if (FUNC_4(VAR_3, VAR_2) > 0)
   break;
  VAR_4 = VAR_3;
  VAR_3 = FUNC_3(VAR_3, VAR_0);
 }
 if (VAR_4 == ((void*)0))
  FUNC_2(&VAR_1, VAR_2, VAR_0);
 else
  FUNC_1(VAR_4, VAR_2, VAR_0);
}
