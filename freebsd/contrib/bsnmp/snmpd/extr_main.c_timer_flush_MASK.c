
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer {struct lmodule* owner; } ;
struct lmodule {int dummy; } ;


 struct timer* FUNC_0 (int *) ;
 struct timer* FUNC_1 (struct timer*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct timer*) ;

__attribute__((used)) static void
FUNC_3(struct lmodule *VAR_2)
{
 struct timer *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(&VAR_1);
 while (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (VAR_3->owner == VAR_2)
   FUNC_2(VAR_3);
  VAR_3 = VAR_4;
 }
}
