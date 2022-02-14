
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_fast_data {TYPE_1__* phase2_method; int * phase2_priv; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ method; int * (* getKey ) (struct eap_sm*,int *,size_t*) ;int (* isKeyAvailable ) (struct eap_sm*,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (struct eap_sm*,int *) ;
 int * FUNC_4 (struct eap_sm*,int *,size_t*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_3,
       struct eap_fast_data *VAR_4,
       u8 *VAR_5, size_t VAR_6)
{
 u8 *VAR_7;
 size_t VAR_8;

 FUNC_2(VAR_5, 0, VAR_6);

 if (VAR_4->phase2_method == ((void*)0) || VAR_4->phase2_priv == ((void*)0)) {
  FUNC_5(VAR_2, "EAP-FAST: Phase 2 method not "
      "available");
  return -1;
 }

 if (VAR_4->phase2_method->isKeyAvailable == ((void*)0) ||
     VAR_4->phase2_method->getKey == ((void*)0))
  return 0;

 if (!VAR_4->phase2_method->isKeyAvailable(VAR_3, VAR_4->phase2_priv) ||
     (VAR_7 = VAR_4->phase2_method->getKey(VAR_3, VAR_4->phase2_priv,
            &VAR_8)) == ((void*)0)) {
  FUNC_5(VAR_2, "EAP-FAST: Could not get key material "
      "from Phase 2");
  return -1;
 }

 if (VAR_8 > VAR_6)
  VAR_8 = VAR_6;
 if (VAR_8 == 32 &&
     VAR_4->phase2_method->vendor == VAR_1 &&
     VAR_4->phase2_method->method == VAR_0) {





  FUNC_1(VAR_5, VAR_7 + 16, 16);
  FUNC_1(VAR_5 + 16, VAR_7, 16);
 } else
  FUNC_1(VAR_5, VAR_7, VAR_8);
 FUNC_0(VAR_7);

 return 0;
}
