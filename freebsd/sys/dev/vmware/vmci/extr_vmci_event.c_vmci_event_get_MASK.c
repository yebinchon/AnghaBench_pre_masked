
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_subscription {int ref_count; } ;


 int FUNC_0 (struct vmci_subscription*) ;

__attribute__((used)) static void
FUNC_1(struct vmci_subscription *VAR_0)
{

 FUNC_0(VAR_0);

 VAR_0->ref_count++;
}
