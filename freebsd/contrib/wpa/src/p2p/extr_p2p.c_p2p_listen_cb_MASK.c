
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {unsigned int pending_client_disc_freq; unsigned int pending_listen_freq; unsigned int pending_listen_sec; unsigned int pending_listen_usec; int in_listen; unsigned int drv_in_listen; } ;


 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (struct p2p_data*,unsigned int,int) ;

void FUNC_2(struct p2p_data *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 if (VAR_1 == VAR_0->pending_client_disc_freq) {
  FUNC_0(VAR_0, "Client discoverability remain-awake completed");
  VAR_0->pending_client_disc_freq = 0;
  return;
 }

 if (VAR_1 != VAR_0->pending_listen_freq) {
  FUNC_0(VAR_0, "Unexpected listen callback for freq=%u duration=%u (pending_listen_freq=%u)",
   VAR_1, VAR_2, VAR_0->pending_listen_freq);
  return;
 }

 FUNC_0(VAR_0, "Starting Listen timeout(%u,%u) on freq=%u based on callback",
  VAR_0->pending_listen_sec, VAR_0->pending_listen_usec,
  VAR_0->pending_listen_freq);
 VAR_0->in_listen = 1;
 VAR_0->drv_in_listen = VAR_1;
 if (VAR_0->pending_listen_sec || VAR_0->pending_listen_usec) {





  FUNC_1(VAR_0, VAR_0->pending_listen_sec,
    VAR_0->pending_listen_usec + 20000);
 }

 VAR_0->pending_listen_freq = 0;
}
