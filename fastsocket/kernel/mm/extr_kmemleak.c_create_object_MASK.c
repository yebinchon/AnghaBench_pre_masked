
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_tree_node {unsigned long start; unsigned long last; } ;
struct kmemleak_object {int flags; unsigned long pointer; size_t size; int min_count; int count; int object_list; int lock; struct prio_tree_node tree_node; int trace; int trace_len; int comm; scalar_t__ pid; int jiffies; int use_count; int area_list; int gray_list; } ;
typedef int gfp_t ;
struct TYPE_2__ {char* comm; scalar_t__ pid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct prio_tree_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (struct kmemleak_object*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_4 ;
 struct kmemleak_object* FUNC_8 (int ,int) ;
 int VAR_5 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *,int *) ;
 struct kmemleak_object* FUNC_11 (unsigned long,int) ;
 int FUNC_12 (int ,unsigned long) ;
 int VAR_6 ;
 int FUNC_13 (int ,unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct prio_tree_node* FUNC_14 (int *,struct prio_tree_node*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;

__attribute__((used)) static struct kmemleak_object *FUNC_21(unsigned long VAR_11, size_t VAR_12,
          int VAR_13, gfp_t VAR_14)
{
 unsigned long VAR_15;
 struct kmemleak_object *VAR_16;
 struct prio_tree_node *VAR_17;

 VAR_16 = FUNC_8(VAR_8, VAR_14 & VAR_0);
 if (!VAR_16) {
  FUNC_9("Cannot allocate a kmemleak_object structure\n");
  return ((void*)0);
 }

 FUNC_1(&VAR_16->object_list);
 FUNC_1(&VAR_16->gray_list);
 FUNC_0(&VAR_16->area_list);
 FUNC_16(&VAR_16->lock);
 FUNC_4(&VAR_16->use_count, 1);
 VAR_16->flags = VAR_1 | VAR_2;
 VAR_16->pointer = VAR_11;
 VAR_16->size = VAR_12;
 VAR_16->min_count = VAR_13;
 VAR_16->count = -1;
 VAR_16->jiffies = VAR_4;


 if (FUNC_6()) {
  VAR_16->pid = 0;
  FUNC_18(VAR_16->comm, "hardirq", sizeof(VAR_16->comm));
 } else if (FUNC_7()) {
  VAR_16->pid = 0;
  FUNC_18(VAR_16->comm, "softirq", sizeof(VAR_16->comm));
 } else {
  VAR_16->pid = VAR_3->pid;






  FUNC_18(VAR_16->comm, VAR_3->comm, sizeof(VAR_16->comm));
 }


 VAR_16->trace_len = FUNC_3(VAR_16->trace);

 FUNC_2(&VAR_16->tree_node);
 VAR_16->tree_node.start = VAR_11;
 VAR_16->tree_node.last = VAR_11 + VAR_12 - 1;

 FUNC_19(&VAR_5, VAR_15);

 VAR_7 = FUNC_13(VAR_7, VAR_11);
 VAR_6 = FUNC_12(VAR_6, VAR_11 + VAR_12);
 VAR_17 = FUNC_14(&VAR_10, &VAR_16->tree_node);






 if (VAR_17 != &VAR_16->tree_node) {
  FUNC_9("Cannot insert 0x%lx into the object search tree "
         "(already existing)\n", VAR_11);
  VAR_16 = FUNC_11(VAR_11, 1);
  FUNC_15(&VAR_16->lock);
  FUNC_5(VAR_16);
  FUNC_17(&VAR_16->lock);

  goto out;
 }
 FUNC_10(&VAR_16->object_list, &VAR_9);
out:
 FUNC_20(&VAR_5, VAR_15);
 return VAR_16;
}
