
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int time_t ;
typedef int off_t ;
typedef int intmax_t ;
struct TYPE_11__ {int cs_nbfree; int cs_ndir; int cs_nifree; int cs_nffree; } ;
struct TYPE_14__ {int cg_magic; int cg_cgx; int cg_ndblk; int cg_niblk; int cg_initediblk; int cg_unrefs; int cg_old_ncyl; int cg_old_niblk; int cg_rotor; int cg_irotor; int cg_frotor; int* cg_frsum; int cg_nclusterblks; TYPE_1__ cg_cs; int cg_old_time; int cg_time; } ;
struct TYPE_13__ {int d_lcg; int d_bsize; int d_ufs; } ;
struct TYPE_12__ {int fs_frag; int fs_contigsumsize; int fs_fpg; int fs_ipg; } ;


 int FUNC_0 (int,int) ;
 TYPE_5__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(void)
{
 time_t VAR_3;
 off_t VAR_4;
 int VAR_5, VAR_6;

 FUNC_9("\ncg %d:\n", VAR_2.d_lcg);
 VAR_4 = FUNC_7(&VAR_1, FUNC_5(&VAR_1, VAR_2.d_lcg)) * VAR_2.d_bsize;
 switch (VAR_2.d_ufs) {
 case 2:
  VAR_3 = VAR_0.cg_time;
  FUNC_9("magic\t%x\ttell\t%jx\ttime\t%s",
      VAR_0.cg_magic, (intmax_t)VAR_4, FUNC_6(&VAR_3));
  FUNC_9("cgx\t%d\tndblk\t%d\tniblk\t%d\tinitiblk %d\tunrefs %d\n",
      VAR_0.cg_cgx, VAR_0.cg_ndblk, VAR_0.cg_niblk, VAR_0.cg_initediblk,
      VAR_0.cg_unrefs);
  break;
 case 1:
  VAR_3 = VAR_0.cg_old_time;
  FUNC_9("magic\t%x\ttell\t%jx\ttime\t%s",
      VAR_0.cg_magic, (intmax_t)VAR_4, FUNC_6(&VAR_3));
  FUNC_9("cgx\t%d\tncyl\t%d\tniblk\t%d\tndblk\t%d\n",
      VAR_0.cg_cgx, VAR_0.cg_old_ncyl, VAR_0.cg_old_niblk,
      VAR_0.cg_ndblk);
  break;
 default:
  break;
 }
 FUNC_9("nbfree\t%d\tndir\t%d\tnifree\t%d\tnffree\t%d\n",
     VAR_0.cg_cs.cs_nbfree, VAR_0.cg_cs.cs_ndir,
     VAR_0.cg_cs.cs_nifree, VAR_0.cg_cs.cs_nffree);
 FUNC_9("rotor\t%d\tirotor\t%d\tfrotor\t%d\nfrsum",
     VAR_0.cg_rotor, VAR_0.cg_irotor, VAR_0.cg_frotor);
 for (VAR_5 = 1, VAR_6 = 0; VAR_5 < VAR_1.fs_frag; VAR_5++) {
  FUNC_9("\t%d", VAR_0.cg_frsum[VAR_5]);
  VAR_6 += VAR_5 * VAR_0.cg_frsum[VAR_5];
 }
 FUNC_9("\nsum of frsum: %d", VAR_6);
 if (VAR_1.fs_contigsumsize > 0) {
  for (VAR_5 = 1; VAR_5 < VAR_1.fs_contigsumsize; VAR_5++) {
   if ((VAR_5 - 1) % 8 == 0)
    FUNC_9("\nclusters %d-%d:", VAR_5,
        FUNC_0(VAR_1.fs_contigsumsize - 1, VAR_5 + 7));
   FUNC_9("\t%d", FUNC_3(&VAR_0)[VAR_5]);
  }
  FUNC_9("\nclusters size %d and over: %d\n",
      VAR_1.fs_contigsumsize,
      FUNC_3(&VAR_0)[VAR_1.fs_contigsumsize]);
  FUNC_9("clusters free:\t");
  FUNC_8(FUNC_2(&VAR_0), VAR_0.cg_nclusterblks);
 } else
  FUNC_9("\n");
 FUNC_9("inodes used:\t");
 FUNC_8(FUNC_4(&VAR_0), VAR_1.fs_ipg);
 FUNC_9("blks free:\t");
 FUNC_8(FUNC_1(&VAR_0), VAR_1.fs_fpg);
 return (0);
}
