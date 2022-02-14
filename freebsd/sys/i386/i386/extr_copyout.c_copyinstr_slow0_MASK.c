
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct copyinstr_arg0 {scalar_t__ alen; scalar_t__ len; int end; scalar_t__ kc; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_0, void *VAR_1)
{
 struct copyinstr_arg0 *VAR_2;
 char VAR_3;

 VAR_2 = VAR_1;
 FUNC_0(VAR_2->alen == 0 && VAR_2->len > 0 && !VAR_2->end);
 while (VAR_2->alen < VAR_2->len && !VAR_2->end) {
  VAR_3 = *(char *)(VAR_0 + VAR_2->alen);
  *(char *)VAR_2->kc = VAR_3;
  VAR_2->alen++;
  VAR_2->kc++;
  if (VAR_3 == '\0')
   VAR_2->end = 1;
 }
}
