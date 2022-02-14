
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct security_mnt_opts {int dummy; } ;
struct TYPE_2__ {int (* sb_set_mnt_opts ) (struct super_block*,struct security_mnt_opts*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct super_block*,struct security_mnt_opts*) ;

int FUNC_1(struct super_block *VAR_1,
    struct security_mnt_opts *VAR_2)
{
 return VAR_0->sb_set_mnt_opts(VAR_1, VAR_2);
}
