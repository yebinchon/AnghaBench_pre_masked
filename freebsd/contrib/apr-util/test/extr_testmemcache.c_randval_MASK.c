
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(apr_uint32_t VAR_2)
{
    apr_uint32_t VAR_3 = 0;
    double VAR_4 = 0;

    if (VAR_1 == 0) {
 FUNC_2((unsigned) (FUNC_0()));
 VAR_1 = 1;
    }

    VAR_4 = (double) FUNC_1() / ((double) VAR_0 + 1);
    VAR_3 = (int) (VAR_4 * (VAR_2 - 0 + 1));

    return VAR_3 > 0 ? VAR_3 : 1;
}
