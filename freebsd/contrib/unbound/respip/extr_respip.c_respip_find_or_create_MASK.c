
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct respip_set {int ip_tree; int region; } ;
struct resp_addr {int node; int action; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (int *,struct sockaddr_storage*,int ,int) ;
 int FUNC_1 (int *,int *,struct sockaddr_storage*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,int ,struct sockaddr_storage*,int *,int*) ;
 struct resp_addr* FUNC_5 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static struct resp_addr*
FUNC_6(struct respip_set* VAR_1, const char* VAR_2, int VAR_3)
{
 struct resp_addr* VAR_4;
 struct sockaddr_storage VAR_5;
 int VAR_6;
 socklen_t VAR_7;

 if(!FUNC_4(VAR_2, 0, &VAR_5, &VAR_7, &VAR_6)) {
  FUNC_2("cannot parse netblock: '%s'", VAR_2);
  return ((void*)0);
 }
 VAR_4 = (struct resp_addr*)FUNC_0(&VAR_1->ip_tree, &VAR_5, VAR_7, VAR_6);
 if(!VAR_4 && VAR_3) {
  VAR_4 = FUNC_5(VAR_1->region, sizeof(*VAR_4));
  if(!VAR_4) {
   FUNC_2("out of memory");
   return ((void*)0);
  }
  VAR_4->action = VAR_0;
  if(!FUNC_1(&VAR_1->ip_tree, &VAR_4->node, &VAR_5,
   VAR_7, VAR_6)) {


   FUNC_3("unexpected: duplicate address: %s", VAR_2);
  }
 }
 return VAR_4;
}
