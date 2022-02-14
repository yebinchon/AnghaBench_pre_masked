
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
struct work_list {TYPE_1__ list; } ;



__attribute__((used)) static inline int FUNC_0(struct work_list *VAR_0)
{
 return VAR_0->list.next == &VAR_0->list;
}
