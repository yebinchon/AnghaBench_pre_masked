
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ltab_lnum; int ltab_offs; int lpt_drty_flgs; int ltab_sz; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ubifs_info *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_2 != VAR_1->ltab_lnum || VAR_3 != VAR_1->ltab_offs)
  return 0;
 if (!(VAR_1->lpt_drty_flgs & VAR_0)) {
  VAR_1->lpt_drty_flgs |= VAR_0;
  FUNC_0(VAR_1, VAR_1->ltab_lnum, VAR_1->ltab_sz);
 }
 return 0;
}
