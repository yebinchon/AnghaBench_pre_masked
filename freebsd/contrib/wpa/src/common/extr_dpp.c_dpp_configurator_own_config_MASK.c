
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct dpp_authentication {int * peer_protocol_key; TYPE_1__* conf; int * own_protocol_key; TYPE_2__* curve; } ;
struct TYPE_6__ {char const* name; } ;
struct TYPE_5__ {int csign; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (struct dpp_authentication*,int) ;
 int FUNC_1 (struct dpp_authentication*,int ) ;
 int FUNC_2 (struct dpp_authentication*) ;
 TYPE_2__* VAR_2 ;
 int * FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char const*) ;
 int FUNC_5 (struct dpp_authentication*,int ,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;

int FUNC_10(struct dpp_authentication *VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct wpabuf *VAR_6;
 int VAR_7 = -1;

 if (!VAR_3->conf) {
  FUNC_6(VAR_0, "DPP: No configurator specified");
  return -1;
 }

 if (!VAR_4) {
  VAR_3->curve = &VAR_2[0];
 } else {
  VAR_3->curve = FUNC_4(VAR_4);
  if (!VAR_3->curve) {
   FUNC_6(VAR_1, "DPP: Unsupported curve: %s",
       VAR_4);
   return -1;
  }
 }
 FUNC_6(VAR_0,
     "DPP: Building own configuration/connector with curve %s",
     VAR_3->curve->name);

 VAR_3->own_protocol_key = FUNC_3(VAR_3->curve);
 if (!VAR_3->own_protocol_key)
  return -1;
 FUNC_2(VAR_3);
 VAR_3->peer_protocol_key = VAR_3->own_protocol_key;
 FUNC_1(VAR_3, VAR_3->conf->csign);

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_6)
  goto fail;
 VAR_7 = FUNC_5(VAR_3, FUNC_8(VAR_6),
     FUNC_9(VAR_6));
fail:
 FUNC_7(VAR_6);
 VAR_3->peer_protocol_key = ((void*)0);
 return VAR_7;
}
