
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {int * phase2_priv; TYPE_1__* phase2_method; } ;
struct TYPE_2__ {int * (* getKey ) (struct eap_sm*,int *,size_t*) ;int (* isKeyAvailable ) (struct eap_sm*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (struct eap_sm*,int *) ;
 int * FUNC_4 (struct eap_sm*,int *,size_t*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_1, struct eap_peap_data *VAR_2,
       u8 *VAR_3, size_t VAR_4)
{
 u8 *VAR_5;
 size_t VAR_6;

 FUNC_2(VAR_3, 0, VAR_4);
 if (VAR_2->phase2_method == ((void*)0) || VAR_2->phase2_priv == ((void*)0) ||
     VAR_2->phase2_method->isKeyAvailable == ((void*)0) ||
     VAR_2->phase2_method->getKey == ((void*)0))
  return 0;

 if (!VAR_2->phase2_method->isKeyAvailable(VAR_1, VAR_2->phase2_priv) ||
     (VAR_5 = VAR_2->phase2_method->getKey(VAR_1, VAR_2->phase2_priv,
            &VAR_6)) == ((void*)0)) {
  FUNC_5(VAR_0, "EAP-PEAP: Could not get key material "
      "from Phase 2");
  return -1;
 }

 if (VAR_6 > VAR_4)
  VAR_6 = VAR_4;
 FUNC_1(VAR_3, VAR_5, VAR_6);
 FUNC_0(VAR_5);

 return 0;
}
