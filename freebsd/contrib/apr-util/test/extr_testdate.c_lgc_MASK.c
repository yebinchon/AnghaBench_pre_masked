
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static apr_uint32_t FUNC_1(apr_uint32_t VAR_0)
{
    apr_uint64_t VAR_1 = VAR_0;
    VAR_1 *= 279470273;
    VAR_1 %= FUNC_0(4294967291);
    return (apr_uint32_t)VAR_1;
}
