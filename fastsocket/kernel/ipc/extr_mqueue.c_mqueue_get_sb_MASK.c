
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct file_system_type {int dummy; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {void* ipc_ns; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct file_system_type*,int,void*,int ,struct vfsmount*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file_system_type *VAR_3,
    int VAR_4, const char *VAR_5,
    void *VAR_6, struct vfsmount *VAR_7)
{
 if (!(VAR_4 & VAR_0))
  VAR_6 = VAR_1->nsproxy->ipc_ns;
 return FUNC_0(VAR_3, VAR_4, VAR_6, VAR_2, VAR_7);
}
