
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
struct eap_teap_pac {int pac_info_len; unsigned int a_id_len; unsigned int a_id_info_len; void* a_id_info; void* a_id; int * pac_info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct eap_teap_pac *VAR_2)
{
 u8 *VAR_3, *VAR_4;
 u16 VAR_5, VAR_6;

 VAR_3 = VAR_2->pac_info;
 VAR_4 = VAR_3 + VAR_2->pac_info_len;

 while (VAR_4 - VAR_3 > 4) {
  VAR_5 = FUNC_0(VAR_3);
  VAR_3 += 2;
  VAR_6 = FUNC_0(VAR_3);
  VAR_3 += 2;
  if (VAR_6 > (unsigned int) (VAR_4 - VAR_3))
   break;

  if (VAR_5 == VAR_0) {
   FUNC_1(VAR_2->a_id);
   VAR_2->a_id = FUNC_2(VAR_3, VAR_6);
   if (!VAR_2->a_id)
    break;
   VAR_2->a_id_len = VAR_6;
  }

  if (VAR_5 == VAR_1) {
   FUNC_1(VAR_2->a_id_info);
   VAR_2->a_id_info = FUNC_2(VAR_3, VAR_6);
   if (!VAR_2->a_id_info)
    break;
   VAR_2->a_id_info_len = VAR_6;
  }

  VAR_3 += VAR_6;
 }
}
