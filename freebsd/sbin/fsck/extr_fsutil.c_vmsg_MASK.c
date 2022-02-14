
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, const char *VAR_3, va_list VAR_4)
{
 if (!VAR_2 && VAR_1)
  (void) FUNC_2("%s: ", VAR_0);

 (void) FUNC_3(VAR_3, VAR_4);

 if (VAR_2 && VAR_1)
  (void) FUNC_2("\n");

 if (VAR_2 && VAR_1) {
  (void) FUNC_2(
      "%s: UNEXPECTED INCONSISTENCY; RUN %s MANUALLY.\n",
      VAR_0, FUNC_1());
  FUNC_0(8);
 }
}
