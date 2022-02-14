
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipc_namespace {TYPE_2__* mq_mnt; } ;
struct TYPE_4__ {TYPE_1__* mnt_sb; } ;
struct TYPE_3__ {int * s_fs_info; } ;



void FUNC_0(struct ipc_namespace *VAR_0)
{
 VAR_0->mq_mnt->mnt_sb->s_fs_info = ((void*)0);
}
