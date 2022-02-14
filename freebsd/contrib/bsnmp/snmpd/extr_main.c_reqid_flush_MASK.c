
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmodule {int dummy; } ;
struct idrange {struct lmodule* owner; } ;


 struct idrange* FUNC_0 (int *) ;
 struct idrange* FUNC_1 (struct idrange*,int ) ;
 int FUNC_2 (int *,struct idrange*,int ) ;
 int FUNC_3 (struct idrange*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct lmodule *VAR_2)
{
 struct idrange *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(&VAR_0);
 while (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  if (VAR_3->owner == VAR_2) {
   FUNC_2(&VAR_0, VAR_3, VAR_1);
   FUNC_3(VAR_3);
  }
  VAR_3 = VAR_4;
 }
}
