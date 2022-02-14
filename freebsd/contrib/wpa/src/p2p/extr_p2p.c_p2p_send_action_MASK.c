
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_data {scalar_t__ drv_in_listen; scalar_t__ in_listen; TYPE_1__* cfg; } ;
struct TYPE_2__ {int (* send_action ) (int ,unsigned int,int const*,int const*,int const*,int const*,size_t,unsigned int,int*) ;int cb_ctx; } ;


 int FUNC_0 (struct p2p_data*,char*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct p2p_data*,unsigned int) ;
 int FUNC_2 (int ,unsigned int,int const*,int const*,int const*,int const*,size_t,unsigned int,int*) ;

int FUNC_3(struct p2p_data *VAR_0, unsigned int VAR_1, const u8 *VAR_2,
      const u8 *VAR_3, const u8 *VAR_4, const u8 *VAR_5,
      size_t VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = VAR_0->cfg->send_action(VAR_0->cfg->cb_ctx, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_7, &VAR_9);
 if (VAR_8 == 0 && VAR_9 && VAR_0->in_listen && VAR_1 > 0 &&
     (unsigned int) VAR_0->drv_in_listen != VAR_1) {
  FUNC_0(VAR_0,
   "Stop listen on %d MHz to allow a frame to be sent immediately on %d MHz",
   VAR_0->drv_in_listen, VAR_1);
  FUNC_1(VAR_0, VAR_1);
 }
 return VAR_8;
}
