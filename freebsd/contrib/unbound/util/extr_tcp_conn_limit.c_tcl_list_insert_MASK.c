
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcl_list {int tree; int region; } ;
struct tcl_addr {int node; int limit; int lock; } ;
struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct sockaddr_storage*,int ,int) ;
 int FUNC_1 (int *) ;
 struct tcl_addr* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct tcl_addr*
FUNC_4(struct tcl_list* VAR_1, struct sockaddr_storage* VAR_2,
 socklen_t VAR_3, int VAR_4, uint32_t VAR_5,
 int VAR_6)
{
 struct tcl_addr* VAR_7 = FUNC_2(VAR_1->region,
  sizeof(struct tcl_addr));
 if(!VAR_7)
  return ((void*)0);
 FUNC_1(&VAR_7->lock);
 VAR_7->limit = VAR_5;
 if(!FUNC_0(&VAR_1->tree, &VAR_7->node, VAR_2, VAR_3, VAR_4)) {
  if(VAR_6)
   FUNC_3(VAR_0, "duplicate tcl address ignored.");
 }
 return VAR_7;
}
