
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_fh {scalar_t__ fh_locked; TYPE_2__* fh_dentry; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mutex; } ;


 int FUNC_0 (struct svc_fh*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct svc_fh *VAR_0)
{
 if (VAR_0->fh_locked) {
  FUNC_0(VAR_0);
  FUNC_1(&VAR_0->fh_dentry->d_inode->i_mutex);
  VAR_0->fh_locked = 0;
 }
}
