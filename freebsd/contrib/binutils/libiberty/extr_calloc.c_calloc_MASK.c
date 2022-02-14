
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PTR ;


 int FUNC_0 (scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;

PTR
FUNC_2 (size_t VAR_0, size_t VAR_1)
{
  register PTR VAR_2;

  if (VAR_0 == 0 || VAR_1 == 0)
    VAR_0 = VAR_1 = 1;

  VAR_2 = FUNC_1 (VAR_0 * VAR_1);
  if (VAR_2) FUNC_0 (VAR_2, VAR_0 * VAR_1);

  return VAR_2;
}
