
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_subscription {int callback_data; int id; int (* callback ) (int ,struct vmci_event_data*,int ) ;scalar_t__ event_payload; struct vmci_subscription* sub; } ;
struct vmci_event_data {int dummy; } ;
struct vmci_delayed_event_info {int callback_data; int id; int (* callback ) (int ,struct vmci_event_data*,int ) ;scalar_t__ event_payload; struct vmci_delayed_event_info* sub; } ;


 int FUNC_0 (struct vmci_subscription*) ;
 int FUNC_1 (int ,struct vmci_event_data*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct vmci_subscription*) ;
 int FUNC_3 (struct vmci_subscription*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct vmci_delayed_event_info *VAR_2;
 struct vmci_subscription *VAR_3;
 struct vmci_event_data *VAR_4;

 VAR_2 = (struct vmci_delayed_event_info *)VAR_1;

 FUNC_0(VAR_2);
 FUNC_0(VAR_2->sub);

 VAR_3 = VAR_2->sub;
 VAR_4 = (struct vmci_event_data *)VAR_2->event_payload;

 VAR_3->callback(VAR_3->id, VAR_4, VAR_3->callback_data);

 FUNC_4(&VAR_0);
 FUNC_2(VAR_3);
 FUNC_5(&VAR_0);

 FUNC_3(VAR_2, sizeof(*VAR_2));
}
