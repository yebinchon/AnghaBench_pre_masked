
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ issingle; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_1 ();
  if (VAR_0.operands[1].issingle)
    FUNC_0 ("fstmdbs");
  else
    FUNC_0 ("fstmdbd");
}
