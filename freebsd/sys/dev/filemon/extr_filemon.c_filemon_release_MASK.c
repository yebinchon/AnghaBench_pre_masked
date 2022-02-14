
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filemon {int lock; int * cred; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct filemon*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct filemon *VAR_2)
{

 if (FUNC_2(&VAR_2->refcnt) == 0)
  return;





 FUNC_3(&VAR_2->lock, VAR_1);

 if (VAR_2->cred != ((void*)0))
  FUNC_0(VAR_2->cred);
 FUNC_4(&VAR_2->lock);
 FUNC_1(VAR_2, VAR_0);
}
