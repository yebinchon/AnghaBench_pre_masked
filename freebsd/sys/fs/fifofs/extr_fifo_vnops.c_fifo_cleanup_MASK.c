
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct fifoinfo* v_fifoinfo; } ;
struct fifoinfo {scalar_t__ fi_readers; scalar_t__ fi_writers; int fi_pipe; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct fifoinfo*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct vnode *VAR_1)
{
 struct fifoinfo *VAR_2;

 FUNC_0(VAR_1, "fifo_cleanup");
 VAR_2 = VAR_1->v_fifoinfo;
 if (VAR_2->fi_readers == 0 && VAR_2->fi_writers == 0) {
  VAR_1->v_fifoinfo = ((void*)0);
  FUNC_2(VAR_2->fi_pipe);
  FUNC_1(VAR_2, VAR_0);
 }
}
