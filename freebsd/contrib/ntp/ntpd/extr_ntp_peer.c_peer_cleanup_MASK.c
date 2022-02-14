
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int dummy; } ;
typedef unsigned int associd_t ;


 unsigned int VAR_0 ;
 struct peer* FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct peer*) ;

void FUNC_2(void)
{
        struct peer *VAR_2;
        associd_t VAR_3;

        for (VAR_3 = VAR_1; VAR_3 != VAR_0; VAR_3++) {
            if (VAR_3 != 0U) {
                VAR_2 = FUNC_0(VAR_3);
                if (VAR_2 != ((void*)0))
                    FUNC_1(VAR_2);
            }
        }
        VAR_2 = FUNC_0(VAR_0);
        if (VAR_2 != ((void*)0))
            FUNC_1(VAR_2);
}
