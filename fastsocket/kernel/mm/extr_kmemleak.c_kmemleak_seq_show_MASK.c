
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct kmemleak_object {int flags; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,struct kmemleak_object*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct kmemleak_object*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct kmemleak_object *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 if ((VAR_3->flags & VAR_0) && FUNC_3(VAR_3))
  FUNC_0(VAR_1, VAR_3);
 FUNC_2(&VAR_3->lock, VAR_4);
 return 0;
}
