
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, vm_offset_t VAR_1, size_t VAR_2)
{
    while (VAR_2-- > 0) {
 FUNC_0(VAR_1, VAR_0);
 VAR_1 += sizeof(u_int32_t);
    }
}
