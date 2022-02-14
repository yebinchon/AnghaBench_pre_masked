
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int * basic_block ;
struct TYPE_2__ {int * src; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 TYPE_1__* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static basic_block
FUNC_3 (tree VAR_0, tree VAR_1)
{
  int VAR_2;
  bool VAR_3 = 0;
  basic_block VAR_4 = ((void*)0);
  for (VAR_2 = 0; VAR_2 < FUNC_2 (VAR_0); VAR_2++)
    if (FUNC_0 (VAR_0, VAR_2) == VAR_1)
      {
 if (VAR_3)
   return ((void*)0);
 VAR_3 = 1;
 VAR_4 = FUNC_1 (VAR_0, VAR_2)->src;
      }
  return VAR_4;
}
