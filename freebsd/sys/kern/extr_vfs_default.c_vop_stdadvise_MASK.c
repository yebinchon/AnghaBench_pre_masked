
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_advise_args {int a_advice; int a_end; int a_start; struct vnode* a_vp; } ;
struct bufobj {int bo_bsize; int bo_dirty; int bo_clean; } ;
struct vnode {int v_iflag; struct bufobj v_bufobj; int * v_object; } ;
typedef int off_t ;
typedef int daddr_t ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;


 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vnode*,int ) ;
 int FUNC_6 (int *,struct bufobj*,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (struct vnode*,int) ;

int
FUNC_13(struct vop_advise_args *VAR_4)
{
 struct vnode *VAR_5;
 struct bufobj *VAR_6;
 daddr_t VAR_7, VAR_8;
 off_t VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_5 = VAR_4->a_vp;
 switch (VAR_4->a_advice) {
 case 128:





  VAR_14 = 0;
  break;
 case 129:
  VAR_14 = 0;
  FUNC_12(VAR_5, VAR_1 | VAR_2);
  if (VAR_5->v_iflag & VAR_3) {
   FUNC_5(VAR_5, 0);
   break;
  }
  VAR_13 = VAR_5->v_bufobj.bo_bsize;
  VAR_9 = FUNC_8(VAR_4->a_start, VAR_13);
  VAR_10 = FUNC_9(VAR_4->a_end, VAR_13);







  if (VAR_5->v_object != ((void*)0)) {
   VAR_11 = FUNC_10(VAR_9);
   VAR_12 = FUNC_7(VAR_10);
   FUNC_3(VAR_5->v_object);
   FUNC_11(VAR_5->v_object, FUNC_2(VAR_11),
       FUNC_2(VAR_12));
   FUNC_4(VAR_5->v_object);
  }

  VAR_6 = &VAR_5->v_bufobj;
  FUNC_0(VAR_6);
  VAR_7 = VAR_9 / VAR_13;
  VAR_8 = VAR_10 / VAR_13;
  VAR_14 = FUNC_6(&VAR_6->bo_clean, VAR_6, VAR_7, VAR_8);
  if (VAR_14 == 0)
   VAR_14 = FUNC_6(&VAR_6->bo_dirty, VAR_6, VAR_7, VAR_8);
  FUNC_1(VAR_6);
  FUNC_5(VAR_5, 0);
  break;
 default:
  VAR_14 = VAR_0;
  break;
 }
 return (VAR_14);
}
