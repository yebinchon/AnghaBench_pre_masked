
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(vm_page_t VAR_1, size_t VAR_2, void *VAR_3, size_t VAR_4)
{
        uint8_t *VAR_5;

        VAR_5 = (uint8_t*)FUNC_1(VAR_1);
        if (!VAR_5)
                return VAR_0;

        FUNC_0(VAR_5 + VAR_2, VAR_3, VAR_4);

        FUNC_2((vm_offset_t)VAR_5);

        return 0;
}
