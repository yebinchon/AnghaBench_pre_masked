
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct p2p_data {int pending_listen_freq; unsigned int pending_listen_sec; unsigned int pending_listen_usec; scalar_t__ start_after_scan; TYPE_1__* cfg; scalar_t__ p2p_scan_running; } ;
struct TYPE_2__ {scalar_t__ (* start_listen ) (int ,int,unsigned int,struct wpabuf*) ;int cb_ctx; int channel; int reg_class; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (struct p2p_data*,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct p2p_data*,char*) ;
 int FUNC_3 (struct p2p_data*,int ) ;
 scalar_t__ FUNC_4 (int ,int,unsigned int,struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;

int FUNC_6(struct p2p_data *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct wpabuf *VAR_6;

 FUNC_2(VAR_3, "Going to listen(only) state");

 if (VAR_3->pending_listen_freq) {

  FUNC_2(VAR_3, "p2p_listen command pending already");
  return -1;
 }

 VAR_5 = FUNC_1(VAR_3->cfg->reg_class, VAR_3->cfg->channel);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3, "Unknown regulatory class/channel");
  return -1;
 }

 VAR_3->pending_listen_sec = VAR_4 / 1000;
 VAR_3->pending_listen_usec = (VAR_4 % 1000) * 1000;

 if (VAR_3->p2p_scan_running) {
  if (VAR_3->start_after_scan == VAR_0) {
   FUNC_2(VAR_3, "p2p_scan running - connect is already pending - skip listen");
   return 0;
  }
  FUNC_2(VAR_3, "p2p_scan running - delay start of listen state");
  VAR_3->start_after_scan = VAR_1;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
  return -1;

 VAR_3->pending_listen_freq = VAR_5;

 if (VAR_3->cfg->start_listen(VAR_3->cfg->cb_ctx, VAR_5, VAR_4, VAR_6) < 0) {
  FUNC_2(VAR_3, "Failed to start listen mode");
  VAR_3->pending_listen_freq = 0;
  FUNC_5(VAR_6);
  return -1;
 }
 FUNC_5(VAR_6);

 FUNC_3(VAR_3, VAR_2);

 return 0;
}
