
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int bo_bsize; } ;
struct vnode {struct bufobj v_bufobj; } ;
typedef int off_t ;
typedef int daddr_t ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (struct bufobj*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct vnode*,struct bufobj*,int,int) ;
 int FUNC_6 (struct vnode*,int ,int ) ;

void
FUNC_7(struct vnode *VAR_2, daddr_t VAR_3, daddr_t VAR_4,
    int VAR_5)
{
 struct bufobj *VAR_6;
 off_t VAR_7, VAR_8;

 FUNC_0(VAR_2, "v_inval_buf_range");

 VAR_7 = VAR_5 * VAR_3;
 VAR_8 = VAR_5 * VAR_4;

 VAR_6 = &VAR_2->v_bufobj;
 FUNC_1(VAR_6);
 FUNC_3(VAR_5 == VAR_6->bo_bsize);

 while (FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4) == VAR_0)
  ;

 FUNC_2(VAR_6);
 FUNC_6(VAR_2, FUNC_4(VAR_7), FUNC_4(VAR_8 + VAR_1 - 1));
}
