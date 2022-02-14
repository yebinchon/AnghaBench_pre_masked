
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blocks; scalar_t__ kind; scalar_t__ names; scalar_t__ keep; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

bool
FUNC_0 (void)
{
  return (VAR_1->blocks != VAR_0
   || VAR_1->keep
   || VAR_1->kind == VAR_2
   || VAR_1->names != VAR_0);
}
