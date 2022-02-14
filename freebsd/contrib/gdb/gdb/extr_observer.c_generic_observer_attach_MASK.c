
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct observer_list {struct observer* observer; struct observer_list* next; } ;
struct observer {void* data; int * notify; } ;
typedef int generic_observer_notification_ftype ;


 struct observer_list* FUNC_0 () ;

__attribute__((used)) static struct observer *
FUNC_1 (struct observer_list **VAR_0,
    generic_observer_notification_ftype * VAR_1,
    void *VAR_2)
{
  struct observer_list *VAR_3 = FUNC_0 ();

  VAR_3->next = *VAR_0;
  VAR_3->observer->notify = VAR_1;
  VAR_3->observer->data = VAR_2;
  *VAR_0 = VAR_3;

  return VAR_3->observer;
}
