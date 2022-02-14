
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int cb_ctx; scalar_t__ (* is_concurrent_session_active ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,int ) ;
 int FUNC_1 (struct p2p_data*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct p2p_data *VAR_1)
{
 FUNC_0(VAR_1, VAR_0);

 if (VAR_1->cfg->is_concurrent_session_active &&
     VAR_1->cfg->is_concurrent_session_active(VAR_1->cfg->cb_ctx))
  FUNC_1(VAR_1, 0, 500000);
 else
  FUNC_1(VAR_1, 0, 200000);
}
