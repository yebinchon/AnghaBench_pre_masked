
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mr_op; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_0(void *VAR_5)
{

 if (VAR_2 != VAR_0)
  return;
 if ((VAR_1 & 0xf00) != 0x500)
  return;
 if ((VAR_1 & 0xf0) < 0x80 ||
     ((VAR_1 & 0xf0) == 0x80 && (VAR_1 & 0xf) <= 0x7))
  return;
 VAR_4.mr_op = &VAR_3;
}
