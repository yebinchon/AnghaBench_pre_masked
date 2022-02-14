
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct iter_donotq {int tree; int region; } ;
struct addr_tree_node {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct addr_tree_node*,struct sockaddr_storage*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct iter_donotq* VAR_1, struct sockaddr_storage* VAR_2,
 socklen_t VAR_3, int VAR_4)
{
 struct addr_tree_node* VAR_5 = (struct addr_tree_node*)FUNC_1(
  VAR_1->region, sizeof(*VAR_5));
 if(!VAR_5)
  return 0;
 if(!FUNC_0(&VAR_1->tree, VAR_5, VAR_2, VAR_3, VAR_4)) {
  FUNC_2(VAR_0, "duplicate donotquery address ignored.");
 }
 return 1;
}
