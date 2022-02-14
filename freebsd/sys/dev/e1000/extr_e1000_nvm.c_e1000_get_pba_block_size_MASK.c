
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,size_t,int,size_t*) ;

s32 FUNC_2(struct e1000_hw *VAR_6, u16 *VAR_7,
        u32 VAR_8, u16 *VAR_9)
{
 s32 VAR_10;
 u16 VAR_11[2];
 u16 VAR_12;

 FUNC_0("e1000_get_pba_block_size");

 if (VAR_7 == ((void*)0)) {
  VAR_10 = FUNC_1(VAR_6, VAR_3, 2, &VAR_11[0]);
  if (VAR_10)
   return VAR_10;
 } else {
  if (VAR_8 > VAR_4) {
   VAR_11[0] = VAR_7[VAR_3];
   VAR_11[1] = VAR_7[VAR_4];
  } else {
   return -VAR_1;
  }
 }

 if (VAR_11[0] == VAR_5) {
  if (VAR_7 == ((void*)0)) {
   VAR_10 = FUNC_1(VAR_6, VAR_11[1] + 0, 1,
       &VAR_12);
   if (VAR_10)
    return VAR_10;
  } else {
   if (VAR_8 > VAR_11[1])
    VAR_12 = VAR_7[VAR_11[1] + 0];
   else
    return -VAR_1;
  }

  if (VAR_12 == 0xFFFF || VAR_12 == 0)
   return -VAR_0;
 } else {

  VAR_12 = 0;
 }

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_12;

 return VAR_2;
}
