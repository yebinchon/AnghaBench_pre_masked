
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ peap_version; int ssl; TYPE_1__* phase2_method; int * phase2_priv; } ;
struct eap_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ method; struct wpabuf* (* buildReq ) (struct eap_sm*,int *,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (struct eap_sm*,int *,struct wpabuf*) ;
 struct wpabuf* FUNC_1 (struct eap_sm*,int *,int ) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*) ;
 int * FUNC_5 (struct wpabuf*) ;
 size_t FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_2,
       struct eap_peap_data *VAR_3,
       u8 VAR_4)
{
 struct wpabuf *VAR_5, *VAR_6, VAR_7;
 const u8 *VAR_8;
 size_t VAR_9;

 if (VAR_3->phase2_method == ((void*)0) || VAR_3->phase2_priv == ((void*)0)) {
  FUNC_3(VAR_1, "EAP-PEAP: Phase 2 method not ready");
  return ((void*)0);
 }
 VAR_5 = VAR_3->phase2_method->buildReq(VAR_2, VAR_3->phase2_priv, VAR_4);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_5(VAR_5);
 VAR_9 = FUNC_6(VAR_5);
 FUNC_2(VAR_1, "EAP-PEAP: Encrypting Phase 2 data",
   VAR_8, VAR_9);

 if (VAR_3->peap_version == 0 &&
     VAR_3->phase2_method->method != VAR_0) {
  VAR_8 += sizeof(struct eap_hdr);
  VAR_9 -= sizeof(struct eap_hdr);
 }

 FUNC_7(&VAR_7, VAR_8, VAR_9);
 VAR_6 = FUNC_0(VAR_2, &VAR_3->ssl, &VAR_7);
 FUNC_4(VAR_5);

 return VAR_6;
}
