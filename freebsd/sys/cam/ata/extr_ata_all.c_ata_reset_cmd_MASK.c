
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int control; } ;
struct ccb_ataio {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(struct ccb_ataio *VAR_2)
{
 FUNC_0(&VAR_2->cmd, sizeof(VAR_2->cmd));
 VAR_2->cmd.flags = VAR_0 | VAR_1;
 VAR_2->cmd.control = 0x04;
}
