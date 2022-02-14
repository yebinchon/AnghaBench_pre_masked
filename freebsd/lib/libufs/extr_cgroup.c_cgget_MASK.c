
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fs {int fs_metackhash; int fs_cgsize; } ;
struct uufsd {int d_lcg; struct fs d_fs; } ;
struct cg {scalar_t__ cg_ckhash; int cg_cgx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uufsd*,char*) ;
 int FUNC_1 (struct uufsd*,int ,void*,int ) ;
 scalar_t__ FUNC_2 (long,void*,int ) ;
 int FUNC_3 (struct cg*) ;
 int FUNC_4 (struct fs*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct fs*,int ) ;

int
FUNC_6(struct uufsd *VAR_3, int VAR_4, struct cg *VAR_5)
{
 struct fs *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = &VAR_3->d_fs;
 if (FUNC_1(VAR_3, FUNC_5(VAR_6, FUNC_4(VAR_6, VAR_4)), (void *)VAR_5,
     VAR_6->fs_cgsize) == -1) {
  FUNC_0(VAR_3, "unable to read cylinder group");
  return (-1);
 }
 VAR_8 = VAR_5->cg_ckhash;
 if ((VAR_6->fs_metackhash & VAR_0) != 0) {
  VAR_7 = VAR_5->cg_ckhash;
  VAR_5->cg_ckhash = 0;
  VAR_8 = FUNC_2(~0L, (void *)VAR_5, VAR_6->fs_cgsize);
  VAR_5->cg_ckhash = VAR_7;
 }
 if (VAR_5->cg_ckhash != VAR_8 || !FUNC_3(VAR_5) ||
     VAR_5->cg_cgx != VAR_4) {
  FUNC_0(VAR_3, "cylinder group checks failed");
  VAR_2 = VAR_1;
  return (-1);
 }
 VAR_3->d_lcg = VAR_4;
 return (0);
}
