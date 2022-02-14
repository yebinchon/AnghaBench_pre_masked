
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;


 int VAR_0 ;

__attribute__((used)) static apr_uint64_t
FUNC_0(apr_uint64_t VAR_1)
{
  return VAR_1 & 1
       ? (VAR_0 - VAR_1 / 2)
       : VAR_1 / 2;
}
