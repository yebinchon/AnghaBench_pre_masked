
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_data {int pending_client_disc_freq; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ (* start_listen ) (int ,int,int,struct wpabuf*) ;int cb_ctx; } ;


 struct wpabuf* FUNC_0 (struct p2p_data*,int *,int ) ;
 int FUNC_1 (struct p2p_data*,char*) ;
 scalar_t__ FUNC_2 (int ,int,int,struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*) ;

void FUNC_4(struct p2p_data *VAR_0, const u8 *VAR_1, const u8 *VAR_2,
        const u8 *VAR_3, size_t VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 struct wpabuf *VAR_7;

 FUNC_1(VAR_0, "Received GO Discoverability Request - remain awake for 100 TU");

 VAR_7 = FUNC_0(VAR_0, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
  return;


 VAR_0->pending_client_disc_freq = VAR_5;
 VAR_6 = 100;
 if (VAR_0->cfg->start_listen(VAR_0->cfg->cb_ctx, VAR_5, 1024 * VAR_6 / 1000,
      VAR_7) < 0) {
  FUNC_1(VAR_0, "Failed to start listen mode for client discoverability");
 }
 FUNC_3(VAR_7);
}
