
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int s_mount_opt; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_1)
{
 FUNC_0(VAR_1)->s_mount_opt &= ~(1 << VAR_0);
 FUNC_1("reiserfs: disabling flush barriers on %s\n",
        FUNC_2(VAR_1));
}
