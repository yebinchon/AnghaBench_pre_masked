
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_command {int* mc_mailbox; scalar_t__ mc_status; } ;
struct TYPE_2__ {int command; scalar_t__ status; size_t msg; } ;


 TYPE_1__* VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*,int,int) ;

__attribute__((used)) static char *
FUNC_1(struct mlx_command *VAR_2)
{
    static char VAR_3[80];
    int VAR_4;


    for (VAR_4 = 0; VAR_0[VAR_4].command != -1; VAR_4++)
 if (((VAR_2->mc_mailbox[0] == VAR_0[VAR_4].command) || (VAR_0[VAR_4].command == 0)) &&
     (VAR_2->mc_status == VAR_0[VAR_4].status))
     return(VAR_1[VAR_0[VAR_4].msg]);

    FUNC_0(VAR_3, "unknown response 0x%x for command 0x%x", (int)VAR_2->mc_status, (int)VAR_2->mc_mailbox[0]);
    return(VAR_3);
}
