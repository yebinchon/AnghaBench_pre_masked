
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kcore_list {unsigned long addr; unsigned long size; int list; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kcore_list*,struct list_head*) ;
 int FUNC_2 (struct kcore_list*) ;
 struct kcore_list* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(unsigned long VAR_6, unsigned long VAR_7, void *VAR_8)
{
 struct list_head *VAR_9 = (struct list_head *)VAR_8;
 struct kcore_list *VAR_10;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->addr = (unsigned long)FUNC_0((VAR_6 << VAR_3));
 VAR_10->size = VAR_7 << VAR_3;


 if (VAR_10->addr < (unsigned long) FUNC_0(0))
  goto free_out;


 if (VAR_4 - VAR_10->addr < VAR_10->size)
  VAR_10->size = VAR_4 - VAR_10->addr;


 if (VAR_5 > (unsigned long)FUNC_0(0)) {
  if (VAR_10->addr > VAR_5)
   goto free_out;
  if (VAR_5 - VAR_10->addr < VAR_10->size)
   VAR_10->size = VAR_5 - VAR_10->addr;
 }

 VAR_10->type = VAR_2;
 FUNC_4(&VAR_10->list, VAR_9);

 if (!FUNC_1(VAR_10, VAR_9)) {
  FUNC_5(&VAR_10->list);
  goto free_out;
 }

 return 0;
free_out:
 FUNC_2(VAR_10);
 return 1;
}
