
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpabuf*,int ,scalar_t__) ;
 int FUNC_1 (struct wpabuf*,scalar_t__) ;
 int FUNC_2 (struct wpabuf*,int) ;

void FUNC_3(struct wpabuf *VAR_2, struct p2p_data *VAR_3)
{

 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0 + 1 + VAR_0);

 FUNC_0(VAR_2, VAR_3->cfg->dev_addr, VAR_0);





 FUNC_2(VAR_2, 1);
 FUNC_0(VAR_2, VAR_3->cfg->dev_addr, VAR_0);
}
