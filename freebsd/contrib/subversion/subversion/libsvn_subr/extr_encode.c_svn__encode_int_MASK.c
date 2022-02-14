
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned char* FUNC_1 (unsigned char*,int) ;

unsigned char *
FUNC_2(unsigned char *VAR_1, apr_int64_t VAR_2)
{
  apr_uint64_t VAR_3 = VAR_2;
  VAR_3 = VAR_3 & FUNC_0(0x8000000000000000)
        ? VAR_0 - (2 * VAR_3)
        : 2 * VAR_3;

  return FUNC_1(VAR_1, VAR_3);
}
