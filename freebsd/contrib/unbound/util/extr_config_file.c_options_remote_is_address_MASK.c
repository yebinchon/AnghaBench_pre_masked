
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* first; } ;
struct config_file {TYPE_1__ control_ifs; int remote_control_enable; } ;
struct TYPE_4__ {char* str; } ;



int FUNC_0(struct config_file* VAR_0)
{
 if(!VAR_0->remote_control_enable) return 0;
 if(!VAR_0->control_ifs.first) return 1;
 if(!VAR_0->control_ifs.first->str) return 1;
 if(VAR_0->control_ifs.first->str[0] == 0) return 1;
 return (VAR_0->control_ifs.first->str[0] != '/');
}
