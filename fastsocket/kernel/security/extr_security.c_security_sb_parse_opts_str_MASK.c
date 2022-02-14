
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct security_mnt_opts {int dummy; } ;
struct TYPE_2__ {int (* sb_parse_opts_str ) (char*,struct security_mnt_opts*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,struct security_mnt_opts*) ;

int FUNC_1(char *VAR_1, struct security_mnt_opts *VAR_2)
{
 return VAR_0->sb_parse_opts_str(VAR_1, VAR_2);
}
