
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int nhead_offs; int nhead_lnum; int ihead_offs; int ihead_lnum; scalar_t__ remounting_rw; TYPE_1__* vfs_sb; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ubifs_info const*,int ,int ,void*) ;
 int FUNC_2 (int) ;

int FUNC_3(const struct ubifs_info *VAR_1, void *VAR_2)
{
 int VAR_3;

 FUNC_2(!(VAR_1->vfs_sb->s_flags & VAR_0) || VAR_1->remounting_rw);

 FUNC_0("checking index head at %d:%d", VAR_1->ihead_lnum, VAR_1->ihead_offs);
 VAR_3 = FUNC_1(VAR_1, VAR_1->ihead_lnum, VAR_1->ihead_offs, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0("checking LPT head at %d:%d", VAR_1->nhead_lnum, VAR_1->nhead_offs);
 VAR_3 = FUNC_1(VAR_1, VAR_1->nhead_lnum, VAR_1->nhead_offs, VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
