
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* addressT ;
struct TYPE_4__ {int fr_literal; } ;
struct TYPE_3__ {int frch_obstack; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;

addressT
FUNC_1 (void)
{
  if (VAR_4 == VAR_1)
    return VAR_0;

  return ((char *) FUNC_0 (&VAR_3->frch_obstack)
   - VAR_2->fr_literal);
}
