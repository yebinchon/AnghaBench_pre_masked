
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ value; scalar_t__ mem_ref; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_2 (tree VAR_2, tree VAR_3, tree VAR_4)
{
  unsigned int VAR_5 = FUNC_0 (VAR_2);
  tree VAR_6, VAR_7, VAR_8;



  VAR_6 = VAR_1[VAR_5].value;
  VAR_1[VAR_5].value = VAR_3;
  VAR_1[VAR_5].mem_ref = VAR_4;

  if (VAR_6 != VAR_3)
    return 1;
  VAR_7 = VAR_0[VAR_5];
  VAR_8 = FUNC_1 (VAR_2);
  VAR_0[VAR_5] = VAR_8;

  return (VAR_7 != VAR_8);
}
