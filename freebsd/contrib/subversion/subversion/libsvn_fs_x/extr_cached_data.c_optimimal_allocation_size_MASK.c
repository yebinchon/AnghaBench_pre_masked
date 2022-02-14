
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static apr_size_t
FUNC_0(apr_size_t VAR_2)
{


  const apr_size_t VAR_3 = 0x400;
  apr_size_t VAR_4;



  if (VAR_2 <= VAR_1)
    return VAR_2;




  if (VAR_2 >= VAR_0 / 2 - VAR_3)
    return VAR_2;
  VAR_4 = VAR_1;
  while (VAR_4 - VAR_3 < VAR_2)
    VAR_4 *= 2;


  return VAR_4 - VAR_3;
}
