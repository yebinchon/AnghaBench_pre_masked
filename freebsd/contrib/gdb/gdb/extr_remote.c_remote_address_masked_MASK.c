
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;

__attribute__((used)) static CORE_ADDR
FUNC_0 (CORE_ADDR VAR_1)
{
  if (VAR_0 > 0
      && VAR_0 < (sizeof (ULONGEST) * 8))
    {


      ULONGEST VAR_2 = 1;
      VAR_2 = (VAR_2 << VAR_0) - 1;
      VAR_1 &= VAR_2;
    }
  return VAR_1;
}
