
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = 0;
 while (VAR_4 > 0) {
  VAR_6 = FUNC_0(VAR_2, &VAR_3[VAR_5], VAR_4);

  if (VAR_6 < 0) {
   if (VAR_1 == VAR_0) continue;
   return VAR_6;
  }
  if (!VAR_6) return VAR_5;

  VAR_5 += VAR_6;
  VAR_4 -= VAR_6;
 }

 return VAR_5;
}
