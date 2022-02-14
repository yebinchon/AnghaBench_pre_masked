
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ufs_lbn_t ;
typedef int ufs2_daddr_t ;
struct suj_blk {int sb_recs; } ;
struct jblkrec {scalar_t__ jb_op; } ;
typedef int ino_t ;
struct TYPE_4__ {scalar_t__ sr_rec; } ;
struct TYPE_3__ {int fs_frag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct jblkrec*,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct suj_blk* FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(ufs2_daddr_t VAR_3, ino_t VAR_4, ufs_lbn_t VAR_5)
{
 struct suj_blk *VAR_6;
 struct jblkrec *VAR_7;

 VAR_6 = FUNC_4(VAR_3, 0);
 if (VAR_6 == ((void*)0))
  return (1);
 if (FUNC_0(&VAR_6->sb_recs))
  return (1);
 VAR_7 = (struct jblkrec *)FUNC_1(&VAR_6->sb_recs, VAR_2)->sr_rec;
 if (FUNC_2(VAR_7, VAR_4, VAR_5, VAR_3, VAR_1->fs_frag))
  if (VAR_7->jb_op == VAR_0)
   return (!FUNC_3(VAR_3));
 return (0);
}
