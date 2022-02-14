
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_3__ {int ref_count; } ;



__attribute__((used)) static __inline boolean_t
FUNC_0(vm_page_t VAR_0)
{

 return (VAR_0->ref_count == 1);
}
