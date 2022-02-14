
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_data {int master_key; int success; int master_key_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int,int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int *,int) ;

__attribute__((used)) static u8 * FUNC_4(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_mschapv2_data *VAR_5 = VAR_3;
 u8 *VAR_6;
 int VAR_7;

 if (!VAR_5->master_key_valid || !VAR_5->success)
  return ((void*)0);

 VAR_7 = 2 * VAR_0;

 VAR_6 = FUNC_2(VAR_7);
 if (VAR_6 == ((void*)0))
  return ((void*)0);



 if (FUNC_0(VAR_5->master_key, VAR_6, VAR_0, 1,
        0) < 0 ||
     FUNC_0(VAR_5->master_key, VAR_6 + VAR_0,
        VAR_0, 0, 0) < 0) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 FUNC_3(VAR_1, "EAP-MSCHAPV2: Derived key",
   VAR_6, VAR_7);

 *VAR_4 = VAR_7;
 return VAR_6;
}
