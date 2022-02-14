
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;
typedef int apr_byte_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(apr_uint32_t *VAR_0, int VAR_1)
{
    int VAR_2;
    apr_byte_t VAR_3[4], *VAR_4;

    if (FUNC_0()) {
 VAR_1 /= sizeof(apr_uint32_t);
 VAR_4 = (apr_byte_t *) VAR_0;
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
     VAR_3[0] = VAR_4[0];
     VAR_3[1] = VAR_4[1];
     VAR_3[2] = VAR_4[2];
     VAR_3[3] = VAR_4[3];
     VAR_4[0] = VAR_3[3];
     VAR_4[1] = VAR_3[2];
     VAR_4[2] = VAR_3[1];
     VAR_4[3] = VAR_3[0];
     VAR_4 += sizeof(apr_uint32_t);
 }
    }
}
