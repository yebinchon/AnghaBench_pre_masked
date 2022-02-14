
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wpabuf {int dummy; } ;
struct ieee802_1x_mka_sak_use_body {int ptx; int prx; int delay_protect; void* lrx; void* ltx; void* orx; void* otx; void* okn; int osrv_mi; int oan; void* lkn; int lsrv_mi; scalar_t__ lan; void* olpn; void* llpn; int type; } ;
struct TYPE_2__ {scalar_t__ kn; int mi; } ;
struct ieee802_1x_mka_participant {TYPE_1__ oki; TYPE_1__ lki; int oan; void* ltx; void* lrx; scalar_t__ lan; void* new_sak; scalar_t__ is_key_server; struct ieee802_1x_kay* kay; } ;
struct ieee802_1x_kay {scalar_t__ mka_hello_time; scalar_t__ pn_exhaustion; scalar_t__ macsec_validate; void* rx_enable; void* port_enable; void* tx_enable; int macsec_protect; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ieee802_1x_mka_sak_use_body*) ;
 scalar_t__ FUNC_2 (struct ieee802_1x_mka_participant*,TYPE_1__*) ;
 unsigned int FUNC_3 (struct ieee802_1x_mka_participant*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ieee802_1x_mka_sak_use_body*,unsigned int) ;
 int FUNC_6 (int ,char*) ;
 struct ieee802_1x_mka_sak_use_body* FUNC_7 (struct wpabuf*,unsigned int) ;

__attribute__((used)) static int
FUNC_8(
 struct ieee802_1x_mka_participant *VAR_7,
 struct wpabuf *VAR_8)
{
 struct ieee802_1x_mka_sak_use_body *VAR_9;
 struct ieee802_1x_kay *VAR_10 = VAR_7->kay;
 unsigned int VAR_11;
 u32 VAR_12 = 1;

 VAR_11 = FUNC_3(VAR_7);
 VAR_9 = FUNC_7(VAR_8, VAR_11);

 VAR_9->type = VAR_3;
 FUNC_5(VAR_9, VAR_11 - VAR_2);

 if (VAR_11 == VAR_2) {
  VAR_9->ptx = VAR_6;
  VAR_9->prx = VAR_6;
  VAR_9->lan = 0;
  VAR_9->lrx = VAR_0;
  VAR_9->ltx = VAR_0;
  VAR_9->delay_protect = VAR_0;
  return 0;
 }


 VAR_9->delay_protect = VAR_10->mka_hello_time <= VAR_1;

 VAR_12 = FUNC_2(VAR_7, &VAR_7->lki);
 if (VAR_12 > VAR_10->pn_exhaustion) {
  FUNC_6(VAR_4, "KaY: My LPN exhaustion");
  if (VAR_7->is_key_server)
   VAR_7->new_sak = VAR_6;
 }

 VAR_9->llpn = FUNC_0(VAR_12);
 VAR_12 = FUNC_2(VAR_7, &VAR_7->oki);
 VAR_9->olpn = FUNC_0(VAR_12);


 VAR_9->ptx = !VAR_10->macsec_protect;
 VAR_9->prx = VAR_10->macsec_validate != VAR_5;


 VAR_9->lan = VAR_7->lan;
 FUNC_4(VAR_9->lsrv_mi, VAR_7->lki.mi, sizeof(VAR_9->lsrv_mi));
 VAR_9->lkn = FUNC_0(VAR_7->lki.kn);
 VAR_9->lrx = VAR_7->lrx;
 VAR_9->ltx = VAR_7->ltx;


 VAR_9->oan = VAR_7->oan;
 if (VAR_7->oki.kn != VAR_7->lki.kn &&
     VAR_7->oki.kn != 0) {
  VAR_9->otx = VAR_6;
  VAR_9->orx = VAR_6;
  FUNC_4(VAR_9->osrv_mi, VAR_7->oki.mi,
     sizeof(VAR_9->osrv_mi));
  VAR_9->okn = FUNC_0(VAR_7->oki.kn);
 } else {
  VAR_9->otx = VAR_0;
  VAR_9->orx = VAR_0;
 }


 if (VAR_9->ltx) {
  VAR_10->tx_enable = VAR_6;
  VAR_10->port_enable = VAR_6;
 }
 if (VAR_9->lrx)
  VAR_10->rx_enable = VAR_6;

 FUNC_1(VAR_9);
 return 0;
}
