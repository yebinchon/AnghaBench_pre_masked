
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,struct page**,unsigned int) ;
 int FUNC_2 (void*,size_t) ;

void *
FUNC_3(struct page **VAR_1, unsigned int VAR_2, unsigned long VAR_3, int VAR_4)
{
 vm_offset_t VAR_5;
 size_t VAR_6;

 VAR_6 = VAR_2 * VAR_0;
 VAR_5 = FUNC_0(VAR_6);
 if (VAR_5 == 0)
  return (((void*)0));
 FUNC_2((void *)VAR_5, VAR_6);
 FUNC_1(VAR_5, VAR_1, VAR_2);

 return ((void *)VAR_5);
}
