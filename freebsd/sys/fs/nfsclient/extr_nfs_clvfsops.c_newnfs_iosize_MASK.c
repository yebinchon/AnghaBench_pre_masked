
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsmount {int nm_flag; scalar_t__ nm_sotype; int nm_rsize; int nm_readdirsize; int nm_wsize; TYPE_2__* nm_mountp; } ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,void*) ;

int
FUNC_1(struct nfsmount *VAR_8)
{
 int VAR_9, VAR_10;


 if (VAR_8->nm_flag & VAR_1) {
  VAR_10 = VAR_3;
 } else if (VAR_8->nm_flag & VAR_0) {
  if (VAR_8->nm_sotype == VAR_7)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_3;
 } else {
  VAR_10 = VAR_5;
 }
 if (VAR_8->nm_rsize > VAR_10 || VAR_8->nm_rsize == 0)
  VAR_8->nm_rsize = VAR_10;
 if (VAR_8->nm_rsize > VAR_3)
  VAR_8->nm_rsize = VAR_3;
 if (VAR_8->nm_readdirsize > VAR_10 || VAR_8->nm_readdirsize == 0)
  VAR_8->nm_readdirsize = VAR_10;
 if (VAR_8->nm_readdirsize > VAR_8->nm_rsize)
  VAR_8->nm_readdirsize = VAR_8->nm_rsize;
 if (VAR_8->nm_wsize > VAR_10 || VAR_8->nm_wsize == 0)
  VAR_8->nm_wsize = VAR_10;
 if (VAR_8->nm_wsize > VAR_3)
  VAR_8->nm_wsize = VAR_3;
 VAR_9 = FUNC_0(VAR_8->nm_rsize, VAR_8->nm_wsize);
 VAR_9 = FUNC_0(VAR_9, VAR_6);
 VAR_9 = FUNC_0(VAR_9, VAR_2);
 VAR_8->nm_mountp->mnt_stat.f_iosize = VAR_9;
 return (VAR_9);
}
