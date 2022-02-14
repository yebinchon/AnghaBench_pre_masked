
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_base {int lock; int list; int complete; int users_refcount; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fs_base *VAR_0,
    unsigned int VAR_1)
{
 FUNC_3(&VAR_0->refcount);
 FUNC_1(&VAR_0->users_refcount, VAR_1);
 FUNC_2(&VAR_0->complete);
 FUNC_0(&VAR_0->list);
 FUNC_4(&VAR_0->lock);
}
