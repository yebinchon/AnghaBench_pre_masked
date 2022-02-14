
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct eap_fast_pac {scalar_t__ pac_type; size_t a_id_len; struct eap_fast_pac* next; int a_id; } ;


 scalar_t__ FUNC_0 (int ,int const*,size_t) ;

struct eap_fast_pac * FUNC_1(struct eap_fast_pac *VAR_0,
           const u8 *VAR_1, size_t VAR_2,
           u16 VAR_3)
{
 struct eap_fast_pac *VAR_4 = VAR_0;

 while (VAR_4) {
  if (VAR_4->pac_type == VAR_3 && VAR_4->a_id_len == VAR_2 &&
      FUNC_0(VAR_4->a_id, VAR_1, VAR_2) == 0) {
   return VAR_4;
  }
  VAR_4 = VAR_4->next;
 }
 return ((void*)0);
}
