
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int cvmx_bootmem_named_block_desc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char const*,char*,int) ;

uint64_t FUNC_8(const char *VAR_4, uint32_t VAR_5)
{
    uint64_t VAR_6 = 0;




    FUNC_4(VAR_5);
    if (!FUNC_3(3))
    {
        int VAR_7;
        uint64_t VAR_8 = FUNC_0(VAR_8);
        int VAR_9 = FUNC_0(VAR_2);
        int VAR_10 = FUNC_0(VAR_1);
        uint64_t VAR_11 = VAR_8;
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
        {
            uint64_t VAR_12 = FUNC_1(VAR_11, VAR_3);
            if (VAR_4 && VAR_12)
            {
                char VAR_13[VAR_10];
                FUNC_2(VAR_11, VAR_13, VAR_10);
                if (!FUNC_7(VAR_4, VAR_13, VAR_10 - 1))
                {
                    VAR_6 = VAR_11;
                    break;
                }
            }
            else if (!VAR_4 && !VAR_12)
            {
                VAR_6 = VAR_11;
                break;
            }
            VAR_11 += sizeof(cvmx_bootmem_named_block_desc_t);
        }
    }
    FUNC_5(VAR_5);
    return VAR_6;
}
