
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* rtx ;


 int VAR_0 ;
 int VAR_1 ;
 void** FUNC_0 (int ,void*,int ) ;

__attribute__((used)) static rtx
FUNC_1 (rtx VAR_2)
{
  void **VAR_3 = FUNC_0 (VAR_1, VAR_2, VAR_0);
  if (*VAR_3 == 0)
    *VAR_3 = VAR_2;

  return (rtx) *VAR_3;
}
