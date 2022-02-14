
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_1, uint8_t *VAR_2, uint32_t VAR_3,
 uint32_t VAR_4)
{
        int VAR_5;

        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
                if (VAR_4) {
                        if (FUNC_0(VAR_1, VAR_2))
                                break;
                } else {
                        if (FUNC_1(VAR_1, VAR_2))
                                break;
                }

                VAR_2 += VAR_0;
        }
        return;
}
