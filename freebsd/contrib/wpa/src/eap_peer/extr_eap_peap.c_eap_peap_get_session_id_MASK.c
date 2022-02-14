
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {size_t id_len; int * session_id; int phase2_success; } ;


 int * FUNC_0 (int *,size_t) ;

__attribute__((used)) static u8 * FUNC_1(struct eap_sm *VAR_0, void *VAR_1, size_t *VAR_2)
{
 struct eap_peap_data *VAR_3 = VAR_1;
 u8 *VAR_4;

 if (VAR_3->session_id == ((void*)0) || !VAR_3->phase2_success)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_3->session_id, VAR_3->id_len);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 *VAR_2 = VAR_3->id_len;

 return VAR_4;
}
