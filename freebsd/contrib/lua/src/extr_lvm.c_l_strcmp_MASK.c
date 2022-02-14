
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TString ;


 char* FUNC_0 (int const*) ;
 int FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;
 size_t FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4 (const TString *VAR_0, const TString *VAR_1) {
  const char *VAR_2 = FUNC_0(VAR_0);
  size_t VAR_3 = FUNC_3(VAR_0);
  const char *VAR_4 = FUNC_0(VAR_1);
  size_t VAR_5 = FUNC_3(VAR_1);
  for (;;) {
    int VAR_6 = FUNC_1(VAR_2, VAR_4);
    if (VAR_6 != 0)
      return VAR_6;
    else {
      size_t VAR_7 = FUNC_2(VAR_2);
      if (VAR_7 == VAR_5)
        return (VAR_7 == VAR_3) ? 0 : 1;
      else if (VAR_7 == VAR_3)
        return -1;

      VAR_7++;
      VAR_2 += VAR_7; VAR_3 -= VAR_7; VAR_4 += VAR_7; VAR_5 -= VAR_7;
    }
  }
}
