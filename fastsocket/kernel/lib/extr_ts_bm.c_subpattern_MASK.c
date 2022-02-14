
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1+VAR_3-1, VAR_5 = VAR_2+VAR_3-1, VAR_6 = 0;

 while(VAR_0[VAR_4--] == VAR_0[VAR_5--]) {
  if (VAR_5 < 0) {
   VAR_6 = 1;
   break;
  }
  if (--VAR_3 == 0) {
   VAR_6 = VAR_0[VAR_1-1] != VAR_0[VAR_2-1];
   break;
  }
 }

 return VAR_6;
}
