
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

s32 FUNC_1(u8 *VAR_4, u16 *VAR_5, u16 *VAR_6,
       int VAR_7)
{
 int VAR_8 = 100;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = ((VAR_7 / 2) + VAR_0 - 1) /
   VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_4[VAR_11] < VAR_8 && VAR_4[VAR_11])
   VAR_8 = VAR_4[VAR_11];
 }

 VAR_10 = (VAR_9 / VAR_8) + 1;


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  int VAR_12 = FUNC_0(VAR_4[VAR_11] * VAR_10, VAR_2);

  if (VAR_12 < VAR_9)
   VAR_12 = VAR_9;
  VAR_5[VAR_11] = (u16)VAR_12;

  VAR_6[VAR_11] = VAR_4[VAR_11] ? (VAR_4[VAR_11]*VAR_1)/100 : VAR_9;
 }

 return 0;
}
