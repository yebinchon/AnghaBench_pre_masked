
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_mschapv2_data {scalar_t__ master_key_valid; scalar_t__ success; } ;
typedef int Boolean ;



__attribute__((used)) static Boolean FUNC_0(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_mschapv2_data *VAR_2 = VAR_1;
 return VAR_2->success && VAR_2->master_key_valid;
}
