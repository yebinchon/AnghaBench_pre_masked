
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_group_member {struct p2p_group_member* next; } ;
struct p2p_group {struct p2p_group_member* members; int p2p; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct wpabuf*,struct p2p_group_member*) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int ) ;

void FUNC_6(struct p2p_group *VAR_1, struct wpabuf *VAR_2,
       int VAR_3)
{
 u8 *VAR_4;
 int VAR_5 = 0;
 struct p2p_group_member *VAR_6;

 FUNC_2(VAR_1->p2p, "* P2P Group Info");
 VAR_4 = FUNC_3(VAR_2, 0);
 FUNC_5(VAR_2, VAR_0);
 FUNC_4(VAR_2, 0);
 for (VAR_6 = VAR_1->members; VAR_6; VAR_6 = VAR_6->next) {
  FUNC_1(VAR_2, VAR_6);
  VAR_5++;
  if (VAR_3 >= 0 && VAR_5 >= VAR_3)
   break;
 }
 FUNC_0(VAR_4 + 1,
       (u8 *) FUNC_3(VAR_2, 0) - VAR_4 - 3);
}
