
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct gdbarch {int dummy; } ;
struct TYPE_2__ {struct type** type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct type *
FUNC_1 (struct gdbarch *VAR_2, int VAR_3)
{
  FUNC_0 (VAR_3 >= 0 && VAR_3 < VAR_0);
  return *VAR_1[VAR_3].type;
}
