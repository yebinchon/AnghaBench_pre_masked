
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_5(char *VAR_3, char *VAR_4)
{
    if (VAR_3 != 0) {
 if (FUNC_0(VAR_4)) {
     size_t VAR_5 = FUNC_3(VAR_3);
     size_t VAR_6 = FUNC_3(VAR_4);

     if (VAR_5 > VAR_6 && !FUNC_4(VAR_4, VAR_3, VAR_6)) {
  unsigned VAR_7;
  FUNC_1(VAR_1, ("rewrite:\n\t%s", VAR_3));
  for (VAR_7 = 0; VAR_7 < VAR_5 - VAR_6; ++VAR_7) {
      VAR_3[VAR_7] = VAR_3[VAR_7 + VAR_6];
  }
  FUNC_2(VAR_3 + VAR_7, VAR_4, FUNC_3(VAR_3) + 1);
  FUNC_1(VAR_1, ("to:\n\t%s", VAR_3));
     }
 }
 return VAR_2;
    }
    return VAR_0;
}
