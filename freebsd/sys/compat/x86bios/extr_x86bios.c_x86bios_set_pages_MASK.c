
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_2, vm_paddr_t VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = VAR_3 / VAR_0, VAR_6 = 0;
     VAR_6 < FUNC_0(VAR_4, VAR_0); VAR_5++, VAR_6++)
  VAR_1[VAR_5] = VAR_2 + VAR_6 * VAR_0;
}
