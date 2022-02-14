
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ubifs_lpt_lprops {int dirty; int free; } ;
struct ubifs_info {int lpt_lebs; int ltab_sz; int lpt_spc_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,void*,int) ;
 int FUNC_1 (int **,int*,int ,int ) ;

void FUNC_2(struct ubifs_info *VAR_4, void *VAR_5,
       struct ubifs_lpt_lprops *VAR_6)
{
 uint8_t *VAR_7 = VAR_5 + VAR_1;
 int VAR_8, VAR_9 = 0;
 uint16_t VAR_10;

 FUNC_1(&VAR_7, &VAR_9, VAR_2, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_4->lpt_lebs; VAR_8++) {
  FUNC_1(&VAR_7, &VAR_9, VAR_6[VAR_8].free, VAR_4->lpt_spc_bits);
  FUNC_1(&VAR_7, &VAR_9, VAR_6[VAR_8].dirty, VAR_4->lpt_spc_bits);
 }
 VAR_10 = FUNC_0(-1, VAR_5 + VAR_1,
      VAR_4->ltab_sz - VAR_1);
 VAR_7 = VAR_5;
 VAR_9 = 0;
 FUNC_1(&VAR_7, &VAR_9, VAR_10, VAR_0);
}
