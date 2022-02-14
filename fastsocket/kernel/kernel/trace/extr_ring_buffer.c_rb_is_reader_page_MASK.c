
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int next; } ;
struct TYPE_2__ {struct list_head* prev; } ;
struct buffer_page {TYPE_1__ list; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct buffer_page *VAR_0)
{
 struct list_head *VAR_1 = VAR_0->list.prev;

 return FUNC_0(VAR_1->next) != &VAR_0->list;
}
