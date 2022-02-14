
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uschar ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int,int const*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_2(const uschar *VAR_4, int VAR_5, const uschar *VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{







 if (VAR_9 < 0) {
  if (VAR_8 < 2) {

   FUNC_0("internal error");
  } else {
   return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9, VAR_0);
  }
 } else if (VAR_8 == VAR_9) {
  if (VAR_8 == 0) {



   return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_3);
  } else {
   return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_1);
  }
 } else if (VAR_8 < VAR_9) {

  return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_2);
 } else {
  FUNC_0("internal error");
 }
 return 0;
}
