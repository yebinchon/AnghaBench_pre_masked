
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int fs_metackhash; int fs_cgsize; } ;
struct uufsd {struct fs d_fs; } ;
struct cg {int cg_cgx; int cg_ckhash; } ;


 int VAR_0 ;
 int FUNC_0 (struct uufsd*,char*) ;
 int FUNC_1 (struct uufsd*,int ,struct cg*,int ) ;
 int FUNC_2 (long,void*,int ) ;
 int FUNC_3 (struct fs*,int ) ;
 int FUNC_4 (struct fs*,int ) ;

int
FUNC_5(struct uufsd *VAR_1, struct cg *VAR_2)
{
 struct fs *VAR_3;

 VAR_3 = &VAR_1->d_fs;
 if ((VAR_3->fs_metackhash & VAR_0) != 0) {
  VAR_2->cg_ckhash = 0;
  VAR_2->cg_ckhash =
      FUNC_2(~0L, (void *)VAR_2, VAR_3->fs_cgsize);
 }
 if (FUNC_1(VAR_1, FUNC_4(VAR_3, FUNC_3(VAR_3, VAR_2->cg_cgx)), VAR_2,
     VAR_3->fs_cgsize) == -1) {
  FUNC_0(VAR_1, "unable to write cylinder group");
  return (-1);
 }
 return (0);
}
