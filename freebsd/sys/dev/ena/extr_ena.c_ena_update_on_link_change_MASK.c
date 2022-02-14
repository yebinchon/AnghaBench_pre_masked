
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_admin_aenq_link_change_desc {int flags; } ;
struct ena_admin_aenq_entry {int dummy; } ;
struct ena_adapter {int pdev; int ifp; } ;
typedef int if_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct ena_adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5,
    struct ena_admin_aenq_entry *VAR_6)
{
 struct ena_adapter *VAR_7 = (struct ena_adapter *)VAR_5;
 struct ena_admin_aenq_link_change_desc *VAR_8;
 int VAR_9;
 if_t VAR_10;

 VAR_8 = (struct ena_admin_aenq_link_change_desc *)VAR_6;
 VAR_10 = VAR_7->ifp;
 VAR_9 = VAR_8->flags &
     VAR_0;

 if (VAR_9 != 0) {
  FUNC_3(VAR_7->pdev, "link is UP\n");
  FUNC_2(VAR_1, VAR_7);
  if (!FUNC_1(VAR_2, VAR_7))
   FUNC_4(VAR_10, VAR_4);
 } else {
  FUNC_3(VAR_7->pdev, "link is DOWN\n");
  FUNC_4(VAR_10, VAR_3);
  FUNC_0(VAR_1, VAR_7);
 }
}
