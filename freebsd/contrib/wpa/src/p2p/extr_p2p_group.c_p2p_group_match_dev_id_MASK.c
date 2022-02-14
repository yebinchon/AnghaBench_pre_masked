
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct p2p_message {int device_id; } ;
struct p2p_group_member {int dev_addr; struct p2p_group_member* next; } ;
struct p2p_group {struct p2p_group_member* members; TYPE_1__* p2p; } ;
typedef int msg ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {TYPE_2__* cfg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct p2p_message*,int ,int) ;
 scalar_t__ FUNC_2 (struct wpabuf*,struct p2p_message*) ;

int FUNC_3(struct p2p_group *VAR_1, struct wpabuf *VAR_2)
{
 struct p2p_group_member *VAR_3;
 struct p2p_message VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 if (FUNC_2(VAR_2, &VAR_4))
  return 1;

 if (!VAR_4.device_id)
  return 1;

 if (FUNC_0(VAR_4.device_id, VAR_1->p2p->cfg->dev_addr, VAR_0) == 0)
  return 1;

 for (VAR_3 = VAR_1->members; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(VAR_4.device_id, VAR_3->dev_addr, VAR_0) == 0)
   return 1;
 }


 return 0;
}
