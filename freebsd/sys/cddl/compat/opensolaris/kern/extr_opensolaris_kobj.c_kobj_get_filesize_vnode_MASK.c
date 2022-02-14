
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_size; } ;
struct _buf {struct vnode* ptr; } ;
struct TYPE_2__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,struct vattr*,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_3(struct _buf *VAR_3, uint64_t *VAR_4)
{
 struct vnode *VAR_5 = VAR_3->ptr;
 struct vattr VAR_6;
 int VAR_7;

 FUNC_2(VAR_5, VAR_1 | VAR_0);
 VAR_7 = FUNC_0(VAR_5, &VAR_6, VAR_2->td_ucred);
 FUNC_1(VAR_5, 0);
 if (VAR_7 == 0)
  *VAR_4 = (uint64_t)VAR_6.va_size;
 return (VAR_7);
}
