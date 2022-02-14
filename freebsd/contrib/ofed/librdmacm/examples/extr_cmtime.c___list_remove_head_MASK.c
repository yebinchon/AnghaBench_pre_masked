
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* next; } ;
struct work_list {TYPE_1__ list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;

__attribute__((used)) static inline struct list_head *FUNC_1(struct work_list *VAR_0)
{
 struct list_head *VAR_1;

 VAR_1 = VAR_0->list.next;
 FUNC_0(VAR_1);
 return VAR_1;
}
