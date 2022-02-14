
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unionfs_node_status {scalar_t__ uns_lower_opencnt; scalar_t__ uns_upper_opencnt; } ;
struct unionfs_node {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct unionfs_node_status*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct unionfs_node*) ;
 int FUNC_4 (struct unionfs_node_status*,int ) ;
 int VAR_1 ;

void
FUNC_5(struct unionfs_node *VAR_2,
      struct unionfs_node_status *VAR_3)
{
 FUNC_1(((void*)0) != VAR_3, ("null pointer"));
 FUNC_0(FUNC_3(VAR_2), "unionfs_get_node_status");

 if (0 < VAR_3->uns_lower_opencnt || 0 < VAR_3->uns_upper_opencnt)
  return;

 FUNC_2(VAR_3, VAR_1);
 FUNC_4(VAR_3, VAR_0);
}
