
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsmount {int nm_wsize; int nm_rsize; int nm_readdirsize; scalar_t__ nm_maxfilesize; int nm_state; TYPE_2__* nm_mountp; } ;
struct nfsfsinfo {int fs_wtpref; int fs_wtmax; int fs_rtpref; int fs_rtmax; int fs_dtpref; scalar_t__ fs_maxfilesize; } ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfsmount*) ;

void
FUNC_1(struct nfsmount *VAR_3, struct nfsfsinfo *VAR_4)
{

 if ((VAR_3->nm_wsize == 0 || VAR_4->fs_wtpref < VAR_3->nm_wsize) &&
     VAR_4->fs_wtpref >= VAR_2)
  VAR_3->nm_wsize = (VAR_4->fs_wtpref + VAR_2 - 1) &
      ~(VAR_2 - 1);
 if (VAR_4->fs_wtmax < VAR_3->nm_wsize && VAR_4->fs_wtmax > 0) {
  VAR_3->nm_wsize = VAR_4->fs_wtmax & ~(VAR_2 - 1);
  if (VAR_3->nm_wsize == 0)
   VAR_3->nm_wsize = VAR_4->fs_wtmax;
 }
 if (VAR_3->nm_wsize < VAR_2)
  VAR_3->nm_wsize = VAR_2;
 if ((VAR_3->nm_rsize == 0 || VAR_4->fs_rtpref < VAR_3->nm_rsize) &&
     VAR_4->fs_rtpref >= VAR_2)
  VAR_3->nm_rsize = (VAR_4->fs_rtpref + VAR_2 - 1) &
      ~(VAR_2 - 1);
 if (VAR_4->fs_rtmax < VAR_3->nm_rsize && VAR_4->fs_rtmax > 0) {
  VAR_3->nm_rsize = VAR_4->fs_rtmax & ~(VAR_2 - 1);
  if (VAR_3->nm_rsize == 0)
   VAR_3->nm_rsize = VAR_4->fs_rtmax;
 }
 if (VAR_3->nm_rsize < VAR_2)
  VAR_3->nm_rsize = VAR_2;
 if ((VAR_3->nm_readdirsize == 0 || VAR_4->fs_dtpref < VAR_3->nm_readdirsize)
     && VAR_4->fs_dtpref >= VAR_1)
  VAR_3->nm_readdirsize = (VAR_4->fs_dtpref + VAR_1 - 1) &
      ~(VAR_1 - 1);
 if (VAR_4->fs_rtmax < VAR_3->nm_readdirsize && VAR_4->fs_rtmax > 0) {
  VAR_3->nm_readdirsize = VAR_4->fs_rtmax & ~(VAR_1 - 1);
  if (VAR_3->nm_readdirsize == 0)
   VAR_3->nm_readdirsize = VAR_4->fs_rtmax;
 }
 if (VAR_3->nm_readdirsize < VAR_1)
  VAR_3->nm_readdirsize = VAR_1;
 if (VAR_4->fs_maxfilesize > 0 &&
     VAR_4->fs_maxfilesize < VAR_3->nm_maxfilesize)
  VAR_3->nm_maxfilesize = VAR_4->fs_maxfilesize;
 VAR_3->nm_mountp->mnt_stat.f_iosize = FUNC_0(VAR_3);
 VAR_3->nm_state |= VAR_0;
}
