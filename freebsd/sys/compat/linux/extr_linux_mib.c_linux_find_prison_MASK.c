
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {int pr_mtx; struct prison* pr_parent; } ;
struct linux_prison {int dummy; } ;


 int VAR_0 ;
 struct linux_prison VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct linux_prison* FUNC_2 (struct prison*,int ) ;
 struct prison VAR_2 ;

__attribute__((used)) static struct linux_prison *
FUNC_3(struct prison *VAR_3, struct prison **VAR_4)
{
 struct prison *VAR_5;
 struct linux_prison *VAR_6;

 for (VAR_5 = VAR_3;; VAR_5 = VAR_5->pr_parent) {
  FUNC_0(&VAR_5->pr_mtx);
  VAR_6 = (VAR_5 == &VAR_2)
      ? &VAR_1
      : FUNC_2(VAR_5, VAR_0);
  if (VAR_6 != ((void*)0))
   break;
  FUNC_1(&VAR_5->pr_mtx);
 }
 *VAR_4 = VAR_5;

 return (VAR_6);
}
