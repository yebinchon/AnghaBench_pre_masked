
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int) ;

CORE_ADDR
FUNC_2 (int VAR_1, CORE_ADDR VAR_2)
{
  CORE_ADDR VAR_3;

  if (VAR_1 < 0 || VAR_1 >= VAR_0)
    FUNC_1 ("Invalid register number %d.", VAR_1);

  FUNC_0 (VAR_3, VAR_2, VAR_1);

  return VAR_3;
}
