
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static uintmax_t
FUNC_2 (uintmax_t VAR_0, uintmax_t VAR_1)
{
  uintmax_t VAR_2 = VAR_0 + VAR_1;
  if (VAR_2 < VAR_0)
    FUNC_1 (2, 0, FUNC_0("input is too large to count"));
  return VAR_2;
}
