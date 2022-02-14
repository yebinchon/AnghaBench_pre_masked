
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_admin_aenq_entry {int dummy; } ;
struct ena_adapter {int pdev; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0,
    struct ena_admin_aenq_entry *VAR_1)
{
 struct ena_adapter *VAR_2 = (struct ena_adapter *)VAR_0;

 FUNC_0(VAR_2->pdev,
     "Unknown event was received or event with unimplemented handler\n");
}
