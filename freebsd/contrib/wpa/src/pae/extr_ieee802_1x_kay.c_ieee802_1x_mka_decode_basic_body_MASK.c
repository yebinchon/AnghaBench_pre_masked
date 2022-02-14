
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ time_t ;
struct TYPE_5__ {int port; int addr; } ;
struct TYPE_4__ {int mn; int mi; } ;
struct ieee802_1x_mka_participant {TYPE_2__ current_peer_sci; TYPE_1__ current_peer_id; int mi; } ;
struct TYPE_6__ {int port; int addr; } ;
struct ieee802_1x_mka_basic_body {scalar_t__ version; int priority; scalar_t__ key_server; int macsec_capability; int macsec_desired; int actor_mn; int actor_mi; TYPE_3__ actor_sci; int ckn; } ;
struct ieee802_1x_kay_peer {scalar_t__ expire; scalar_t__ mn; int key_server_priority; void* is_key_server; int macsec_capability; int macsec_desired; } ;
struct ieee802_1x_kay {scalar_t__ is_obliged_key_server; } ;
typedef void* Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (struct ieee802_1x_mka_basic_body const*) ;
 struct ieee802_1x_kay_peer* FUNC_2 (struct ieee802_1x_mka_participant*,int ,scalar_t__) ;
 struct ieee802_1x_mka_participant* FUNC_3 (struct ieee802_1x_kay*,int ,size_t) ;
 struct ieee802_1x_kay_peer* FUNC_4 (struct ieee802_1x_mka_participant*,int ) ;
 struct ieee802_1x_kay_peer* FUNC_5 (struct ieee802_1x_mka_participant*,TYPE_3__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct ieee802_1x_mka_participant*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static struct ieee802_1x_mka_participant *
FUNC_12(struct ieee802_1x_kay *VAR_6, const u8 *VAR_7,
     size_t VAR_8)
{
 struct ieee802_1x_mka_participant *VAR_9;
 const struct ieee802_1x_mka_basic_body *VAR_10;
 struct ieee802_1x_kay_peer *VAR_11;
 size_t VAR_12;
 size_t VAR_13;

 VAR_10 = (const struct ieee802_1x_mka_basic_body *) VAR_7;

 if (VAR_10->version > VAR_3) {
  FUNC_11(VAR_4,
      "KaY: Peer's version(%d) greater than MKA current version(%d)",
      VAR_10->version, VAR_3);
 }
 if (VAR_6->is_obliged_key_server && VAR_10->key_server) {
  FUNC_11(VAR_4, "KaY: I must be key server - ignore MKPDU claiming to be from a key server");
  return ((void*)0);
 }

 VAR_13 = FUNC_1(VAR_10);
 if (VAR_13 < sizeof(struct ieee802_1x_mka_basic_body) - VAR_1) {
  FUNC_11(VAR_4, "KaY: Too small body length %zu",
      VAR_13);
  return ((void*)0);
 }
 VAR_12 = VAR_13 -
     (sizeof(struct ieee802_1x_mka_basic_body) - VAR_1);
 VAR_9 = FUNC_3(VAR_6, VAR_10->ckn, VAR_12);
 if (!VAR_9) {
  FUNC_11(VAR_4,
      "KaY: Peer is not included in my CA - ignore MKPDU");
  return ((void*)0);
 }


 if (FUNC_7(VAR_10->actor_mi, VAR_9->mi, VAR_0) == 0) {
  if (!FUNC_9(VAR_9))
   return ((void*)0);
  FUNC_11(VAR_4,
      "KaY: Peer using my MI - selected a new random MI: %s",
      FUNC_6(VAR_9->mi));
 }

 FUNC_8(VAR_9->current_peer_id.mi, VAR_10->actor_mi, VAR_0);
 VAR_9->current_peer_id.mn = VAR_10->actor_mn;
 FUNC_8(VAR_9->current_peer_sci.addr, VAR_10->actor_sci.addr,
    sizeof(VAR_9->current_peer_sci.addr));
 VAR_9->current_peer_sci.port = VAR_10->actor_sci.port;


 VAR_11 = FUNC_4(VAR_9, VAR_10->actor_mi);
 if (!VAR_11) {
  VAR_11 = FUNC_5(VAR_9,
         &VAR_10->actor_sci);
  if (VAR_11) {
   time_t VAR_14;

   FUNC_11(VAR_5,
       "KaY: duplicated SCI detected - maybe active attacker or peer selected new MI - ignore MKPDU");


   VAR_14 = FUNC_10(((void*)0)) + VAR_2 * 1.5 / 1000;
   if (VAR_11->expire > VAR_14)
    VAR_11->expire = VAR_14;
   return ((void*)0);
  }

  VAR_11 = FUNC_2(
   VAR_9, VAR_10->actor_mi,
   FUNC_0(VAR_10->actor_mn));
  if (!VAR_11) {
   FUNC_11(VAR_4,
       "KaY: No potential peer entry found - ignore MKPDU");
   return ((void*)0);
  }

  VAR_11->macsec_desired = VAR_10->macsec_desired;
  VAR_11->macsec_capability = VAR_10->macsec_capability;
  VAR_11->is_key_server = (Boolean) VAR_10->key_server;
  VAR_11->key_server_priority = VAR_10->priority;
 } else if (VAR_11->mn < FUNC_0(VAR_10->actor_mn)) {
  VAR_11->mn = FUNC_0(VAR_10->actor_mn);
  VAR_11->macsec_desired = VAR_10->macsec_desired;
  VAR_11->macsec_capability = VAR_10->macsec_capability;
  VAR_11->is_key_server = (Boolean) VAR_10->key_server;
  VAR_11->key_server_priority = VAR_10->priority;
 } else {
  FUNC_11(VAR_5,
      "KaY: The peer MN did not increase - ignore MKPDU");
  return ((void*)0);
 }

 return VAR_9;
}
