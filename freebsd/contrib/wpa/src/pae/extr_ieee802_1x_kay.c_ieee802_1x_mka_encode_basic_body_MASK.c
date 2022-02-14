
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_6__ {unsigned int len; int name; } ;
struct ieee802_1x_mka_participant {TYPE_3__ ckn; scalar_t__ mn; int mi; int can_be_key_server; int is_key_server; scalar_t__ is_elected; struct ieee802_1x_kay* kay; } ;
struct TYPE_4__ {int port; int addr; } ;
struct ieee802_1x_mka_basic_body {int ckn; int algo_agility; int actor_mn; int actor_mi; TYPE_1__ actor_sci; int macsec_capability; int macsec_desired; int key_server; int priority; int version; } ;
struct TYPE_5__ {int port; int addr; } ;
struct ieee802_1x_kay {int algo_agility; TYPE_2__ actor_sci; int macsec_capable; int macsec_desired; int actor_priority; int mka_version; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ieee802_1x_mka_basic_body*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ieee802_1x_mka_basic_body*,scalar_t__) ;
 struct ieee802_1x_mka_basic_body* FUNC_5 (struct wpabuf*,int ) ;

__attribute__((used)) static int
FUNC_6(
 struct ieee802_1x_mka_participant *VAR_1,
 struct wpabuf *VAR_2)
{
 struct ieee802_1x_mka_basic_body *VAR_3;
 struct ieee802_1x_kay *VAR_4 = VAR_1->kay;
 unsigned int VAR_5 = sizeof(struct ieee802_1x_mka_basic_body);

 VAR_5 += VAR_1->ckn.len;
 VAR_3 = FUNC_5(VAR_2, FUNC_0(VAR_5));

 VAR_3->version = VAR_4->mka_version;
 VAR_3->priority = VAR_4->actor_priority;


 if (VAR_1->is_elected)
  VAR_3->key_server = VAR_1->is_key_server;
 else
  VAR_3->key_server = VAR_1->can_be_key_server;

 VAR_3->macsec_desired = VAR_4->macsec_desired;
 VAR_3->macsec_capability = VAR_4->macsec_capable;
 FUNC_4(VAR_3, VAR_5 - VAR_0);

 FUNC_3(VAR_3->actor_sci.addr, VAR_4->actor_sci.addr,
    sizeof(VAR_4->actor_sci.addr));
 VAR_3->actor_sci.port = VAR_4->actor_sci.port;

 FUNC_3(VAR_3->actor_mi, VAR_1->mi, sizeof(VAR_3->actor_mi));
 VAR_1->mn = VAR_1->mn + 1;
 VAR_3->actor_mn = FUNC_1(VAR_1->mn);
 FUNC_3(VAR_3->algo_agility, VAR_4->algo_agility,
    sizeof(VAR_3->algo_agility));

 FUNC_3(VAR_3->ckn, VAR_1->ckn.name, VAR_1->ckn.len);

 FUNC_2(VAR_3);

 return 0;
}
