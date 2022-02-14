
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int apr_md4_ctx_t ;
typedef int abts_case ;
struct TYPE_2__ {void* string; void* md4sum; } ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,unsigned int) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_4 (unsigned char*,void const*,int) ;
 unsigned int FUNC_5 (void const*) ;

__attribute__((used)) static void FUNC_6(abts_case *VAR_3, void *VAR_4)
{
        apr_md4_ctx_t VAR_5;
        unsigned char VAR_6[VAR_0];
        const void *VAR_7 = VAR_2[VAR_1].string;
        const void *VAR_8 = VAR_2[VAR_1].md4sum;
        unsigned int VAR_9 = FUNC_5(VAR_7);

        FUNC_0(VAR_3, "apr_md4_init", (FUNC_2(&VAR_5) == 0));
        FUNC_0(VAR_3, "apr_md4_update",
                    (FUNC_3(&VAR_5,
                                    (unsigned char *)VAR_7, VAR_9) == 0));

        FUNC_0(VAR_3, "apr_md4_final", (FUNC_1(VAR_6, &VAR_5) ==0));
        FUNC_0(VAR_3, "check for correct md4 digest",
                    (FUNC_4(VAR_6, VAR_8, VAR_0) == 0));
}
