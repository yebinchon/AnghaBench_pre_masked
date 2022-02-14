
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ctl_fd; scalar_t__ as_fd; scalar_t__ status_fd; } ;
typedef TYPE_1__ procinfo ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (procinfo *VAR_0)
{
  if (VAR_0->ctl_fd > 0)
    FUNC_0 (VAR_0->ctl_fd);






  VAR_0->ctl_fd = VAR_0->as_fd = VAR_0->status_fd = 0;
}
