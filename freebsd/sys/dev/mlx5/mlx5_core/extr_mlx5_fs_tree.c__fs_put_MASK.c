
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_base {int lock; int refcount; int list; int users_refcount; struct fs_base* parent; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,void (*) (struct kref*)) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fs_base *VAR_0, void (*VAR_1)(struct kref *VAR_2),
      bool VAR_3)
{
 struct fs_base *VAR_4 = VAR_0->parent;

 if (VAR_4 && !VAR_3)
  FUNC_3(&VAR_4->lock);
 if (FUNC_0(&VAR_0->users_refcount)) {
  if (VAR_4) {

   FUNC_2(&VAR_0->list);
   FUNC_4(&VAR_4->lock);
  }
  FUNC_1(&VAR_0->refcount, VAR_1);
  if (VAR_4 && VAR_3)
   FUNC_3(&VAR_4->lock);
 } else if (VAR_4 && !VAR_3) {
  FUNC_4(&VAR_4->lock);
 }
}
