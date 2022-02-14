
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmodule {int dummy; } ;
struct fdesc {struct lmodule* owner; } ;


 struct fdesc* FUNC_0 (int *) ;
 struct fdesc* FUNC_1 (struct fdesc*,int ) ;
 int FUNC_2 (struct fdesc*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct lmodule *VAR_2)
{
 struct fdesc *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(&VAR_0);
 while (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  if (VAR_3->owner == VAR_2)
   FUNC_2(VAR_3);
  VAR_3 = VAR_4;
 }
}
