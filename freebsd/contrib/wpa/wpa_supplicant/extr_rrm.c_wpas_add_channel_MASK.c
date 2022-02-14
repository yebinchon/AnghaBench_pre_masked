
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,size_t) ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static int FUNC_2(u8 VAR_1, u8 VAR_2, u8 VAR_3,
       int *VAR_4)
{
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  u8 VAR_6 = VAR_2 - (2 * VAR_3 - 2) + VAR_5 * 4;

  VAR_4[VAR_5] = FUNC_0(((void*)0), VAR_1, VAR_6);



  if (VAR_4[VAR_5] < 0 &&
      (VAR_1 == 128 || VAR_1 == 129 || VAR_1 == 130))
   VAR_4[VAR_5] = 5000 + 5 * VAR_6;
  if (VAR_4[VAR_5] < 0) {
   FUNC_1(VAR_0,
       "Beacon Report: Invalid channel %u",
       VAR_2);
   return -1;
  }
 }

 return 0;
}
