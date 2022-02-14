
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct subpage_print {scalar_t__ key; int (* fn ) (void*,scalar_t__,int ,scalar_t__) ;} ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (void*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, uint32_t VAR_1, uint8_t VAR_2, uint32_t VAR_3, struct subpage_print *VAR_4, size_t VAR_5)
{
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4++) {
  if (VAR_4->key == VAR_1) {
   VAR_4->fn(VAR_0, VAR_1, VAR_2, VAR_3);
   return;
  }
 }
 FUNC_0("No handler for page type %x\n", VAR_1);
}
