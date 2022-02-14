
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_4__ {scalar_t__ extended_usage; int extended; int output; int input; } ;
typedef TYPE_1__ Channel ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ssh*,TYPE_1__*,int ,int ,int ,char*,int) ;

int
FUNC_1(struct ssh *VAR_1, Channel *VAR_2, char *VAR_3, int VAR_4)
{
 if (VAR_2->extended_usage != VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_2->input, VAR_2->output, VAR_2->extended,
     VAR_3, VAR_4);
}
