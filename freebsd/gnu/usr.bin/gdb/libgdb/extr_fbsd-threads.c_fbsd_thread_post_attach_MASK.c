
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* to_post_attach ) (int) ;} ;
struct TYPE_3__ {int pid; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (int VAR_5)
{
  VAR_0.to_post_attach (VAR_5);

  if (VAR_2 && !VAR_1)
    {
      VAR_4.pid = FUNC_0 (VAR_3);
      FUNC_1 ();
    }
}
