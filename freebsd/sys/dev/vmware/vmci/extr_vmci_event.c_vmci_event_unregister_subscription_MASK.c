
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_id ;
struct vmci_subscription {int destroy_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct vmci_subscription* FUNC_1 (int ) ;
 int FUNC_2 (struct vmci_subscription*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vmci_subscription*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,struct vmci_subscription*) ;

__attribute__((used)) static struct vmci_subscription *
FUNC_7(vmci_id VAR_3)
{
 struct vmci_subscription *VAR_4;

 FUNC_3(&VAR_2);
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_4);
  FUNC_4(VAR_4, VAR_1);
 }
 FUNC_5(&VAR_2);

 if (VAR_4 != ((void*)0)) {
  FUNC_6(&VAR_4->destroy_event, VAR_0, VAR_4);
  FUNC_0(&VAR_4->destroy_event);
 }

 return (VAR_4);
}
