
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_mount; } ;
struct statfs {scalar_t__ f_ffree; int f_bavail; int f_bsize; int f_bfree; int f_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct statfs*) ;
 int FUNC_2 (struct statfs*,int ) ;
 struct statfs* FUNC_3 (int,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct statfs*,int ) ;

int
FUNC_5(struct vnode *VAR_4, struct statfs *VAR_5)
{
 struct statfs *VAR_6;
 int VAR_7;

 VAR_6 = ((void*)0);
 if (VAR_3 > 0) {

  VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
  VAR_7 = FUNC_4(VAR_6, VAR_4->v_mount);
  if (VAR_7 != 0) {
   FUNC_2(VAR_6, VAR_0);
   VAR_6 = ((void*)0);
  }
 }
 VAR_7 = FUNC_1(VAR_4->v_mount, VAR_5);
 if (VAR_7 == 0) {
  if (VAR_6 != ((void*)0)) {
   VAR_5->f_blocks = VAR_6->f_blocks;
   VAR_5->f_bavail = VAR_6->f_bavail;
   VAR_5->f_bfree = VAR_6->f_bfree;
   VAR_5->f_bsize = VAR_6->f_bsize;
  }







  if (VAR_5->f_bavail < 0)
   VAR_5->f_bavail = 0;
  if (VAR_5->f_ffree < 0)
   VAR_5->f_ffree = 0;
 }
 FUNC_2(VAR_6, VAR_0);
 FUNC_0(VAR_7);
 return (VAR_7);
}
