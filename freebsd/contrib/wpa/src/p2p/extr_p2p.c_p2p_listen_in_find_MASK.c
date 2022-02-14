
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_data {int pending_listen_freq; int max_disc_int; unsigned int min_disc_int; unsigned int max_disc_tu; int pending_listen_usec; TYPE_1__* cfg; scalar_t__ pending_listen_sec; int state; } ;
typedef int r ;
struct TYPE_2__ {int max_listen; scalar_t__ (* start_listen ) (int ,int,int,struct wpabuf*) ;int cb_ctx; int channel; int reg_class; } ;


 scalar_t__ FUNC_0 (int *,int) ;
 struct wpabuf* FUNC_1 (struct p2p_data*,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct p2p_data*,char*,...) ;
 int FUNC_4 (struct p2p_data*,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int,int,struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_8(struct p2p_data *VAR_0, int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;
 struct wpabuf *VAR_5;

 FUNC_3(VAR_0, "Starting short listen state (state=%s)",
  FUNC_5(VAR_0->state));

 if (VAR_0->pending_listen_freq) {

  FUNC_3(VAR_0, "p2p_listen command pending already");
  return;
 }

 VAR_4 = FUNC_2(VAR_0->cfg->reg_class, VAR_0->cfg->channel);
 if (VAR_4 < 0) {
  FUNC_3(VAR_0, "Unknown regulatory class/channel");
  return;
 }

 if (FUNC_0((u8 *) &VAR_2, sizeof(VAR_2)) < 0)
  VAR_2 = 0;
 VAR_3 = (VAR_2 % ((VAR_0->max_disc_int - VAR_0->min_disc_int) + 1) +
       VAR_0->min_disc_int) * 100;
 if (VAR_0->max_disc_tu >= 0 && VAR_3 > (unsigned int) VAR_0->max_disc_tu)
  VAR_3 = VAR_0->max_disc_tu;
 if (!VAR_1 && VAR_3 < 100)
  VAR_3 = 100;
 if (VAR_0->cfg->max_listen && 1024 * VAR_3 / 1000 > VAR_0->cfg->max_listen)
  VAR_3 = VAR_0->cfg->max_listen * 1000 / 1024;

 if (VAR_3 == 0) {
  FUNC_3(VAR_0, "Skip listen state since duration was 0 TU");
  FUNC_4(VAR_0, 0, 0);
  return;
 }

 VAR_5 = FUNC_1(VAR_0, ((void*)0), 0);
 if (VAR_5 == ((void*)0))
  return;

 VAR_0->pending_listen_freq = VAR_4;
 VAR_0->pending_listen_sec = 0;
 VAR_0->pending_listen_usec = 1024 * VAR_3;

 if (VAR_0->cfg->start_listen(VAR_0->cfg->cb_ctx, VAR_4, 1024 * VAR_3 / 1000,
      VAR_5) < 0) {
  FUNC_3(VAR_0, "Failed to start listen mode");
  VAR_0->pending_listen_freq = 0;
 }
 FUNC_7(VAR_5);
}
