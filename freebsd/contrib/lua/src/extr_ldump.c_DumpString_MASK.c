
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TString ;
typedef int DumpState ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (char const*,size_t,int *) ;
 int FUNC_3 (size_t) ;
 char* FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static void FUNC_6 (const TString *VAR_0, DumpState *VAR_1) {
  if (VAR_0 == ((void*)0))
    FUNC_0(0, VAR_1);
  else {
    size_t VAR_2 = FUNC_5(VAR_0) + 1;
    const char *VAR_3 = FUNC_4(VAR_0);
    if (VAR_2 < 0xFF)
      FUNC_0(FUNC_3(VAR_2), VAR_1);
    else {
      FUNC_0(0xFF, VAR_1);
      FUNC_1(VAR_2, VAR_1);
    }
    FUNC_2(VAR_3, VAR_2 - 1, VAR_1);
  }
}
