
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ocfs2_dlm_lksb {int dummy; } ocfs2_dlm_lksb ;
struct TYPE_4__ {TYPE_1__* sp_ops; } ;
struct TYPE_3__ {int (* lvb_valid ) (union ocfs2_dlm_lksb*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (union ocfs2_dlm_lksb*) ;

int FUNC_1(union ocfs2_dlm_lksb *VAR_1)
{
 return VAR_0->sp_ops->lvb_valid(VAR_1);
}
