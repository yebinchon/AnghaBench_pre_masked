
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct ubifs_nnode {TYPE_1__* nbranch; scalar_t__ num; } ;
struct ubifs_info {int lpt_last; int nnode_sz; int lpt_offs_bits; int lpt_lnum_bits; scalar_t__ lpt_first; int pcnt_bits; scalar_t__ big_lpt; } ;
struct TYPE_2__ {int lnum; scalar_t__ offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int FUNC_1 (int **,int*,scalar_t__,int ) ;

void FUNC_2(struct ubifs_info *VAR_5, void *VAR_6,
        struct ubifs_nnode *VAR_7)
{
 uint8_t *VAR_8 = VAR_6 + VAR_1;
 int VAR_9, VAR_10 = 0;
 uint16_t VAR_11;

 FUNC_1(&VAR_8, &VAR_10, VAR_3, VAR_4);
 if (VAR_5->big_lpt)
  FUNC_1(&VAR_8, &VAR_10, VAR_7->num, VAR_5->pcnt_bits);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  int VAR_12 = VAR_7->nbranch[VAR_9].lnum;

  if (VAR_12 == 0)
   VAR_12 = VAR_5->lpt_last + 1;
  FUNC_1(&VAR_8, &VAR_10, VAR_12 - VAR_5->lpt_first, VAR_5->lpt_lnum_bits);
  FUNC_1(&VAR_8, &VAR_10, VAR_7->nbranch[VAR_9].offs,
     VAR_5->lpt_offs_bits);
 }
 VAR_11 = FUNC_0(-1, VAR_6 + VAR_1,
      VAR_5->nnode_sz - VAR_1);
 VAR_8 = VAR_6;
 VAR_10 = 0;
 FUNC_1(&VAR_8, &VAR_10, VAR_11, VAR_0);
}
