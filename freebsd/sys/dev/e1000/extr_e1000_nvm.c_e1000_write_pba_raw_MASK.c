
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct e1000_pba {int* word; int* pba_block; } ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,size_t,int,int*) ;
 int FUNC_1 (int*,int*,int) ;

s32 FUNC_2(struct e1000_hw *VAR_5, u16 *VAR_6,
   u32 VAR_7, struct e1000_pba *VAR_8)
{
 s32 VAR_9;

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (VAR_6 == ((void*)0)) {
  VAR_9 = FUNC_0(VAR_5, VAR_2, 2,
       &VAR_8->word[0]);
  if (VAR_9)
   return VAR_9;
 } else {
  if (VAR_7 > VAR_3) {
   VAR_6[VAR_2] = VAR_8->word[0];
   VAR_6[VAR_3] = VAR_8->word[1];
  } else {
   return -VAR_0;
  }
 }

 if (VAR_8->word[0] == VAR_4) {
  if (VAR_8->pba_block == ((void*)0))
   return -VAR_0;

  if (VAR_6 == ((void*)0)) {
   VAR_9 = FUNC_0(VAR_5, VAR_8->word[1],
        VAR_8->pba_block[0],
        VAR_8->pba_block);
   if (VAR_9)
    return VAR_9;
  } else {
   if (VAR_7 > (u32)(VAR_8->word[1] +
           VAR_8->pba_block[0])) {
    FUNC_1(&VAR_6[VAR_8->word[1]],
           VAR_8->pba_block,
           VAR_8->pba_block[0] * sizeof(u16));
   } else {
    return -VAR_0;
   }
  }
 }

 return VAR_1;
}
