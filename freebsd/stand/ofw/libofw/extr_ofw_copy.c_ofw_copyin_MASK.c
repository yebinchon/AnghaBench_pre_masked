
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef size_t const ssize_t ;


 int FUNC_0 (void const*,void*,size_t const) ;
 scalar_t__ FUNC_1 (scalar_t__,size_t const) ;
 int FUNC_2 (char*) ;

ssize_t
FUNC_3(const void *VAR_0, vm_offset_t VAR_1, const size_t VAR_2)
{
        if (FUNC_1(VAR_1, VAR_2)) {
                FUNC_2("ofw_copyin: map error\n");
                return (0);
        }

        FUNC_0(VAR_0, (void *)VAR_1, VAR_2);
        return(VAR_2);
}
