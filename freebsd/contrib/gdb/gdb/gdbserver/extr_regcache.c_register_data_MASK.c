
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* registers; } ;
struct TYPE_3__ {int offset; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static char *
FUNC_1 (int VAR_2, int VAR_3)
{
  char *VAR_4 = FUNC_0 (VAR_0, VAR_3)->registers;

  return VAR_4 + (VAR_1[VAR_2].offset / 8);
}
