
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct p2p_group_member {int * client_info; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct wpabuf*,int *) ;
 scalar_t__ FUNC_2 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_3(struct wpabuf *VAR_0, struct p2p_group_member *VAR_1)
{
 if (VAR_1->client_info == ((void*)0))
  return;
 if (FUNC_2(VAR_0) < FUNC_0(VAR_1->client_info) + 1)
  return;
 FUNC_1(VAR_0, VAR_1->client_info);
}
