
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_data {scalar_t__ state; int master_key; int master_key_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int ,char*,int *,size_t) ;

__attribute__((used)) static u8 * FUNC_4(struct eap_sm *VAR_3, void *VAR_4, size_t *VAR_5)
{
 struct eap_mschapv2_data *VAR_6 = VAR_4;
 u8 *VAR_7;

 if (VAR_6->state != VAR_2 || !VAR_6->master_key_valid)
  return ((void*)0);

 *VAR_5 = 2 * VAR_0;
 VAR_7 = FUNC_2(*VAR_5);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_6->master_key, VAR_7, VAR_0, 0,
        1) < 0 ||
     FUNC_0(VAR_6->master_key, VAR_7 + VAR_0,
        VAR_0, 1, 1) < 0) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }
 FUNC_3(VAR_1, "EAP-MSCHAPV2: Derived key", VAR_7, *VAR_5);

 return VAR_7;
}
