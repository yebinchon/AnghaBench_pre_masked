
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct ubifs_pnode {int num; TYPE_1__* lprops; } ;
struct ubifs_info {int pcnt_bits; int space_bits; int pnode_sz; scalar_t__ big_lpt; } ;
struct TYPE_2__ {int free; int dirty; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,void*,int) ;
 int FUNC_1 (int **,int*,int,int) ;

void FUNC_2(struct ubifs_info *VAR_6, void *VAR_7,
        struct ubifs_pnode *VAR_8)
{
 uint8_t *VAR_9 = VAR_7 + VAR_2;
 int VAR_10, VAR_11 = 0;
 uint16_t VAR_12;

 FUNC_1(&VAR_9, &VAR_11, VAR_4, VAR_5);
 if (VAR_6->big_lpt)
  FUNC_1(&VAR_9, &VAR_11, VAR_8->num, VAR_6->pcnt_bits);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  FUNC_1(&VAR_9, &VAR_11, VAR_8->lprops[VAR_10].free >> 3,
     VAR_6->space_bits);
  FUNC_1(&VAR_9, &VAR_11, VAR_8->lprops[VAR_10].dirty >> 3,
     VAR_6->space_bits);
  if (VAR_8->lprops[VAR_10].flags & VAR_0)
   FUNC_1(&VAR_9, &VAR_11, 1, 1);
  else
   FUNC_1(&VAR_9, &VAR_11, 0, 1);
 }
 VAR_12 = FUNC_0(-1, VAR_7 + VAR_2,
      VAR_6->pnode_sz - VAR_2);
 VAR_9 = VAR_7;
 VAR_11 = 0;
 FUNC_1(&VAR_9, &VAR_11, VAR_12, VAR_1);
}
