
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ufs2_daddr_t ;
struct fs {int fs_ipg; int fs_fpg; } ;
struct TYPE_2__ {int cs_ndir; } ;
struct cg {int cg_cgx; TYPE_1__ cg_cs; } ;


 int VAR_0 ;
 int FUNC_0 (struct cg*) ;
 int FUNC_1 (struct cg*) ;
 int FUNC_2 (int ,int ,int,int,char*,int ,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int) ;
 struct fs VAR_4 ;

void
FUNC_5(
 struct cg *VAR_5,
 struct cg *VAR_6,
 int VAR_7)
{
 int VAR_8, VAR_9;
 struct fs *VAR_10 = &VAR_4;

 VAR_8 = FUNC_3(VAR_10->fs_ipg, VAR_0);
 VAR_9 = VAR_5->cg_cs.cs_ndir - VAR_6->cg_cs.cs_ndir;
 if (VAR_9 < 0) {
  FUNC_4("LOST %d DIRECTORIES\n", -VAR_9);
  VAR_9 = 0;
 }
 if (VAR_9 > 0)
  FUNC_2(FUNC_1(VAR_6), FUNC_1(VAR_5), VAR_8,
      VAR_5->cg_cgx * (ufs2_daddr_t)VAR_10->fs_ipg, "DIR", VAR_2,
      0, VAR_9, VAR_7);
 FUNC_2(FUNC_1(VAR_6), FUNC_1(VAR_5), VAR_8,
     VAR_5->cg_cgx * (ufs2_daddr_t)VAR_10->fs_ipg, "FILE", VAR_3,
     VAR_9, VAR_10->fs_ipg, VAR_7);
 FUNC_2(FUNC_0(VAR_5), FUNC_0(VAR_6),
     FUNC_3(VAR_10->fs_fpg, VAR_0),
     VAR_5->cg_cgx * (ufs2_daddr_t)VAR_10->fs_fpg, "FRAG",
     VAR_1, 0, VAR_10->fs_fpg, VAR_7);
}
