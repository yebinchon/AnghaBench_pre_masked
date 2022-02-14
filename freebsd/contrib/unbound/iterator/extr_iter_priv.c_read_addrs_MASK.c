
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct iter_priv {int a; int region; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* private_address; } ;
struct addr_tree_node {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct addr_tree_node*,struct sockaddr_storage*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ,struct sockaddr_storage*,int *,int*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct iter_priv* VAR_2, struct config_file* VAR_3)
{

 struct config_strlist* VAR_4;
 struct addr_tree_node* VAR_5;
 struct sockaddr_storage VAR_6;
 int VAR_7;
 socklen_t VAR_8;

 for(VAR_4 = VAR_3->private_address; VAR_4; VAR_4 = VAR_4->next) {
  FUNC_1(VAR_4->str);
  if(!FUNC_3(VAR_4->str, VAR_0, &VAR_6,
   &VAR_8, &VAR_7)) {
   FUNC_2("cannot parse private-address: %s", VAR_4->str);
   return 0;
  }
  VAR_5 = (struct addr_tree_node*)FUNC_4(VAR_2->region,
   sizeof(*VAR_5));
  if(!VAR_5) {
   FUNC_2("out of memory");
   return 0;
  }
  if(!FUNC_0(&VAR_2->a, VAR_5, &VAR_6, VAR_8, VAR_7)) {
   FUNC_5(VAR_1, "ignoring duplicate "
    "private-address: %s", VAR_4->str);
  }
 }
 return 1;
}
