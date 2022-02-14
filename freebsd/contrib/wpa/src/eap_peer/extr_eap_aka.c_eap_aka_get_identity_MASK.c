
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_aka_data {size_t reauth_id_len; size_t pseudonym_len; int const* pseudonym; int const* reauth_id; } ;



__attribute__((used)) static const u8 * FUNC_0(struct eap_sm *VAR_0, void *VAR_1,
           size_t *VAR_2)
{
 struct eap_aka_data *VAR_3 = VAR_1;

 if (VAR_3->reauth_id) {
  *VAR_2 = VAR_3->reauth_id_len;
  return VAR_3->reauth_id;
 }

 if (VAR_3->pseudonym) {
  *VAR_2 = VAR_3->pseudonym_len;
  return VAR_3->pseudonym;
 }

 return ((void*)0);
}
