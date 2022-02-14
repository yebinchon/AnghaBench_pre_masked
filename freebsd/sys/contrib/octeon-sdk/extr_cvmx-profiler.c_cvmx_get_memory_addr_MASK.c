
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_bootmem_named_block_desc {int base_addr; } ;


 int FUNC_0 (int ) ;
 struct cvmx_bootmem_named_block_desc* FUNC_1 (char const*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static
void *FUNC_3(const char* VAR_0)
{
    void *VAR_1 = ((void*)0);
    const struct cvmx_bootmem_named_block_desc *VAR_2 = FUNC_1(VAR_0);
    if (VAR_2)
        VAR_1 = FUNC_2(VAR_2->base_addr);
    FUNC_0 (VAR_1 != ((void*)0));

    return VAR_1;
}
