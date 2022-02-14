
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINT8 ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char* VAR_0)
{
 int VAR_1;
 int VAR_2 = FUNC_2(VAR_0);
 UINT8 *VAR_3;
 UINT8 VAR_4;

 if (FUNC_1((int)VAR_2, 2) == VAR_2 || VAR_2 < 10)
  return;

 for (VAR_1 = 0; VAR_1<VAR_2; ++VAR_1) {
  if (!((VAR_1+1)%3)) {
   if (VAR_0[VAR_1] != ' ')
    return;
  }
  else
   if (!((VAR_0[VAR_1] >= '0' && VAR_0[VAR_1] <= '9') ||
           (VAR_0[VAR_1] >= 'A' && VAR_0[VAR_1] <= 'F')))
    return;
 }

 for (VAR_1 = 0; VAR_1<VAR_2; VAR_1 += 3) {
  VAR_3 = &VAR_0[VAR_1];
  VAR_4 = 0;
  FUNC_0(VAR_3, &VAR_4);
  VAR_0[VAR_1/3] = (char) VAR_4;
 }
 VAR_0[(VAR_2+1)/3] = 0;
}
