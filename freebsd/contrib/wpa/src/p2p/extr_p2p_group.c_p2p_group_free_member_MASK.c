
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_group_member {int client_info; int p2p_ie; int wfd_ie; } ;


 int FUNC_0 (struct p2p_group_member*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct p2p_group_member *VAR_0)
{
 FUNC_1(VAR_0->wfd_ie);
 FUNC_1(VAR_0->p2p_ie);
 FUNC_1(VAR_0->client_info);
 FUNC_0(VAR_0);
}
