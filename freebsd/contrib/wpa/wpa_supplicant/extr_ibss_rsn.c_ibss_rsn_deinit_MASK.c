
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibss_rsn_peer {struct ibss_rsn_peer* next; } ;
struct ibss_rsn {scalar_t__ auth_group; struct ibss_rsn_peer* peers; } ;


 int FUNC_0 (struct ibss_rsn_peer*) ;
 int FUNC_1 (struct ibss_rsn*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct ibss_rsn *VAR_0)
{
 struct ibss_rsn_peer *VAR_1, *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = VAR_0->peers;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 if (VAR_0->auth_group)
  FUNC_2(VAR_0->auth_group);
 FUNC_1(VAR_0);

}
