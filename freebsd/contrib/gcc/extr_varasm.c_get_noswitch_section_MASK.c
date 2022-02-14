
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct unnamed_section {int dummy; } ;
struct TYPE_6__ {unsigned int flags; } ;
struct TYPE_7__ {int callback; TYPE_1__ common; } ;
struct TYPE_8__ {TYPE_2__ noswitch; } ;
typedef TYPE_3__ section ;
typedef int noswitch_section_callback ;


 unsigned int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;

__attribute__((used)) static section *
FUNC_1 (unsigned int VAR_1, noswitch_section_callback VAR_2)
{
  section *VAR_3;

  VAR_3 = FUNC_0 (sizeof (struct unnamed_section));
  VAR_3->noswitch.common.flags = VAR_1 | VAR_0;
  VAR_3->noswitch.callback = VAR_2;

  return VAR_3;
}
