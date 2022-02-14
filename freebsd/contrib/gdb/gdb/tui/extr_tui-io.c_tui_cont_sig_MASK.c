
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int handle; } ;
struct TYPE_5__ {int curch; int start_line; } ;
struct TYPE_6__ {TYPE_1__ command_info; } ;
struct TYPE_8__ {TYPE_3__ generic; TYPE_2__ detail; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,void (*) (int)) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (int VAR_2)
{
  if (VAR_1)
    {


      FUNC_0 ();


      FUNC_2 ();


      FUNC_3 (VAR_0->generic.handle,
             VAR_0->detail.command_info.start_line,
             VAR_0->detail.command_info.curch);
      FUNC_4 (VAR_0->generic.handle);
    }
  FUNC_1 (VAR_2, FUNC_5);
}
