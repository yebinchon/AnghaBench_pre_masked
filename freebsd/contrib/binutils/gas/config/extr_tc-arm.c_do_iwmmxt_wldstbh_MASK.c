
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,int) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_6;
  VAR_4.instruction |= VAR_4.operands[0].reg << 12;
  if (VAR_5)
    VAR_6 = VAR_1;
  else
    VAR_6 = VAR_0;
  FUNC_0 (1, VAR_3, VAR_2, VAR_6);
}
