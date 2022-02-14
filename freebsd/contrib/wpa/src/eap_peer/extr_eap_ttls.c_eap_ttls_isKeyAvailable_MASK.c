
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ttls_data {scalar_t__ phase2_success; int * key_data; } ;
struct eap_sm {int dummy; } ;
typedef int Boolean ;



__attribute__((used)) static Boolean FUNC_0(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_ttls_data *VAR_2 = VAR_1;
 return VAR_2->key_data != ((void*)0) && VAR_2->phase2_success;
}
