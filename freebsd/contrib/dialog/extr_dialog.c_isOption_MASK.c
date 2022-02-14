
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ strspn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const) ;
 char const** VAR_3 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_6(const char *VAR_4)
{
    bool VAR_5 = VAR_0;

    if (VAR_4 != 0) {
 if (VAR_3 != 0) {
     int VAR_6;
     for (VAR_6 = 0; VAR_3[VAR_6] != 0; ++VAR_6) {
  if (VAR_3[VAR_6] == VAR_4) {
      VAR_5 = VAR_2;
      break;
  }
     }
 } else if (!FUNC_5(VAR_4, "--", (size_t) 2) && FUNC_3(FUNC_0(VAR_4[2]))) {
     if (FUNC_4(VAR_4) == (strspn) (VAR_4, VAR_1)) {
  VAR_5 = VAR_2;
     } else {
  FUNC_2();
  FUNC_1("Invalid option \"%s\"", VAR_4);
     }
 }
    }
    return VAR_5;
}
