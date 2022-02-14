
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*,size_t) ;
 int * VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(bool VAR_4, const char *VAR_5) {
 size_t VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_1);

 VAR_6 = 0;
 VAR_7 = FUNC_3(VAR_5);
 while (VAR_6 < VAR_7) {

  if (VAR_3 == VAR_0) {
   if (FUNC_2(VAR_4) && VAR_4) {
    return 1;
   }
  }

  if (VAR_3 + VAR_7 <= VAR_0) {

   VAR_8 = VAR_7 - VAR_6;
  } else {

   VAR_8 = VAR_0 - VAR_3;
  }
  FUNC_1(&VAR_2[VAR_3], &VAR_5[VAR_6], VAR_8);
  VAR_3 += VAR_8;
  VAR_6 += VAR_8;
 }

 return 0;
}
