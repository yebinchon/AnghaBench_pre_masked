
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct type {int dummy; } ;
struct gdbarch {int dummy; } ;
struct TYPE_4__ {struct type** type; } ;
struct TYPE_3__ {struct type** type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static struct type *
FUNC_1 (struct gdbarch *VAR_4, int VAR_5)
{
  if (VAR_5 >= VAR_1
      && VAR_5 < VAR_1 + VAR_0)
    return *VAR_2[VAR_5 - VAR_1].type;

  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_1);
  return *VAR_3[VAR_5].type;
}
