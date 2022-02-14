
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_data {TYPE_1__* cfg; int pending_action_state; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 struct wpabuf* FUNC_0 (int ) ;
 int FUNC_1 (struct p2p_data*,char*) ;
 scalar_t__ FUNC_2 (struct p2p_data*,int,int const*,int ,int const*,int ,int ,int) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_6(struct p2p_data *VAR_1, const u8 *VAR_2,
          u8 VAR_3, int VAR_4)
{
 struct wpabuf *VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == ((void*)0))
  return;

 VAR_1->pending_action_state = VAR_0;
 if (FUNC_2(VAR_1, VAR_4, VAR_2, VAR_1->cfg->dev_addr, VAR_2,
       FUNC_4(VAR_5), FUNC_5(VAR_5), 200) < 0)
  FUNC_1(VAR_1, "Failed to send Action frame");

 FUNC_3(VAR_5);
}
