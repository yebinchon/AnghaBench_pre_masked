
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bo_object; } ;
struct vnode {int v_iflag; TYPE_1__ v_bufobj; } ;
struct thread {int dummy; } ;
struct smbnode {int n_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct smbnode* FUNC_2 (struct vnode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (int*,scalar_t__,char*,int) ;
 int FUNC_5 (struct vnode*,int ,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int*) ;

int
FUNC_8(struct vnode *VAR_11, struct thread *VAR_12)
{
 struct smbnode *VAR_13 = FUNC_2(VAR_11);
 int VAR_14 = 0;

 if (VAR_11->v_iflag & VAR_8)
  return 0;

 while (VAR_13->n_flag & VAR_2) {
  VAR_13->n_flag |= VAR_3;
  VAR_14 = FUNC_4(&VAR_13->n_flag, VAR_7 + 2, "smfsvinv", 2 * VAR_10);
  VAR_14 = FUNC_3(VAR_12);
  if (VAR_14 == VAR_0)
   return VAR_0;
 }
 VAR_13->n_flag |= VAR_2;

 if (VAR_11->v_bufobj.bo_object != ((void*)0)) {
  FUNC_0(VAR_11->v_bufobj.bo_object);
  FUNC_6(VAR_11->v_bufobj.bo_object, 0, 0, VAR_5);
  FUNC_1(VAR_11->v_bufobj.bo_object);
 }

 VAR_14 = FUNC_5(VAR_11, VAR_9, VAR_6, 0);
 while (VAR_14) {
  if (VAR_14 == VAR_1 || VAR_14 == VAR_0) {
   VAR_13->n_flag &= ~VAR_2;
   if (VAR_13->n_flag & VAR_3) {
    VAR_13->n_flag &= ~VAR_3;
    FUNC_7(&VAR_13->n_flag);
   }
   return VAR_0;
  }
  VAR_14 = FUNC_5(VAR_11, VAR_9, VAR_6, 0);
 }
 VAR_13->n_flag &= ~(VAR_4 | VAR_2);
 if (VAR_13->n_flag & VAR_3) {
  VAR_13->n_flag &= ~VAR_3;
  FUNC_7(&VAR_13->n_flag);
 }
 return (VAR_14);
}
