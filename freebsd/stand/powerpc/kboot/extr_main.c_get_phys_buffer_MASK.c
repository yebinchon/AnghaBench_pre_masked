
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ memsz; size_t bufsz; void* mem; void* buf; } ;


 void* FUNC_0 (size_t const) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (size_t const,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,size_t const) ;

__attribute__((used)) static ssize_t
FUNC_3(vm_offset_t VAR_2, const size_t VAR_3, void **VAR_4)
{
 int VAR_5 = 0;
 const size_t VAR_6 = 4*1024*1024;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2 >= (vm_offset_t)VAR_0[VAR_5].mem &&
      VAR_2 < (vm_offset_t)VAR_0[VAR_5].mem +
      VAR_0[VAR_5].memsz)
   goto out;
 }

 VAR_0[VAR_1].buf = FUNC_0(VAR_6);
 VAR_0[VAR_1].bufsz = VAR_6;
 VAR_0[VAR_1].mem = (void *)FUNC_2(VAR_2,VAR_6);
 VAR_0[VAR_1].memsz = VAR_6;

 VAR_5 = VAR_1;
 VAR_1++;

out:
 *VAR_4 = VAR_0[VAR_5].buf + (VAR_2 -
     (vm_offset_t)VAR_0[VAR_5].mem);
 return (FUNC_1(VAR_3,VAR_0[VAR_5].bufsz - (VAR_2 -
     (vm_offset_t)VAR_0[VAR_5].mem)));
}
