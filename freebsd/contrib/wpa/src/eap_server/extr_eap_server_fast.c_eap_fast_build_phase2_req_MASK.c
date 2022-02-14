
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_fast_data {int * phase2_priv; TYPE_1__* phase2_method; } ;
struct TYPE_2__ {struct wpabuf* (* buildReq ) (struct eap_sm*,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (struct wpabuf*) ;
 struct wpabuf* FUNC_1 (struct eap_sm*,int *,int ) ;
 int FUNC_2 (int ,char*,struct wpabuf*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_2,
       struct eap_fast_data *VAR_3,
       u8 VAR_4)
{
 struct wpabuf *VAR_5;

 if (VAR_3->phase2_priv == ((void*)0)) {
  FUNC_3(VAR_0, "EAP-FAST: Phase 2 method not "
      "initialized");
  return ((void*)0);
 }
 VAR_5 = VAR_3->phase2_method->buildReq(VAR_2, VAR_3->phase2_priv, VAR_4);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_2(VAR_1, "EAP-FAST: Phase 2 EAP-Request", VAR_5);
 return FUNC_0(VAR_5);
}
