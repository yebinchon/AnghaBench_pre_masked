
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct eap_fast_pac {scalar_t__ pac_type; size_t a_id_len; struct eap_fast_pac* next; int a_id; } ;


 int FUNC_0 (struct eap_fast_pac*) ;
 scalar_t__ FUNC_1 (int ,int const*,size_t) ;

__attribute__((used)) static void FUNC_2(struct eap_fast_pac **VAR_0,
    struct eap_fast_pac **VAR_1,
    const u8 *VAR_2, size_t VAR_3, u16 VAR_4)
{
 struct eap_fast_pac *VAR_5, *VAR_6;

 VAR_5 = *VAR_0;
 VAR_6 = ((void*)0);

 while (VAR_5) {
  if (VAR_5->pac_type == VAR_4 && VAR_5->a_id_len == VAR_3 &&
      FUNC_1(VAR_5->a_id, VAR_2, VAR_3) == 0) {
   if (VAR_6 == ((void*)0))
    *VAR_0 = VAR_5->next;
   else
    VAR_6->next = VAR_5->next;
   if (*VAR_1 == VAR_5)
    *VAR_1 = ((void*)0);
   FUNC_0(VAR_5);
   break;
  }
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
 }
}
