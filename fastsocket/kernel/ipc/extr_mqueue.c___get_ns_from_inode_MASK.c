
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipc_namespace {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_fs_info; } ;


 struct ipc_namespace* FUNC_0 (int ) ;

__attribute__((used)) static inline struct ipc_namespace *FUNC_1(struct inode *VAR_0)
{
 return FUNC_0(VAR_0->i_sb->s_fs_info);
}
