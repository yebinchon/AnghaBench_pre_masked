
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct observer_list {struct observer_list* next; TYPE_1__* observer; } ;
struct TYPE_2__ {int data; int (* notify ) (int ,void const*) ;} ;


 int FUNC_0 (int ,void const*) ;

__attribute__((used)) static void
FUNC_1 (struct observer_list *VAR_0, const void *VAR_1)
{
  struct observer_list *VAR_2 = VAR_0;

  while (VAR_2 != ((void*)0))
    {
      (*VAR_2->observer->notify) (VAR_2->observer->data, VAR_1);
      VAR_2 = VAR_2->next;
    }
}
