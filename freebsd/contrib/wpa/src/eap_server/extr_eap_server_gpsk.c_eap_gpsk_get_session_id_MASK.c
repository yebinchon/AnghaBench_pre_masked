
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_gpsk_data {scalar_t__ state; size_t id_len; int session_id; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,size_t) ;

__attribute__((used)) static u8 * FUNC_1(struct eap_sm *VAR_1, void *VAR_2, size_t *VAR_3)
{
 struct eap_gpsk_data *VAR_4 = VAR_2;
 u8 *VAR_5;

 if (VAR_4->state != VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4->session_id, VAR_4->id_len);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 *VAR_3 = VAR_4->id_len;

 return VAR_5;
}
