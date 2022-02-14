
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct acl_list {int tree; int region; } ;
struct acl_addr {int control; int node; } ;
typedef int socklen_t ;
typedef enum acl_access { ____Placeholder_acl_access } acl_access ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct sockaddr_storage*,int ,int) ;
 struct acl_addr* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct acl_addr*
FUNC_3(struct acl_list* VAR_1, struct sockaddr_storage* VAR_2,
 socklen_t VAR_3, int VAR_4, enum acl_access VAR_5,
 int VAR_6)
{
 struct acl_addr* VAR_7 = FUNC_1(VAR_1->region,
  sizeof(struct acl_addr));
 if(!VAR_7)
  return ((void*)0);
 VAR_7->control = VAR_5;
 if(!FUNC_0(&VAR_1->tree, &VAR_7->node, VAR_2, VAR_3, VAR_4)) {
  if(VAR_6)
   FUNC_2(VAR_0, "duplicate acl address ignored.");
 }
 return VAR_7;
}
