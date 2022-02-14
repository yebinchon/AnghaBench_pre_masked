
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*,...) ;
 long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4;
 long VAR_5;

 VAR_0 = 0;
 VAR_5 = FUNC_1(VAR_1, &VAR_4, 0);
 if (*VAR_1 && !*VAR_4 && !VAR_0) {
  if (VAR_5 < VAR_2 || VAR_5 > VAR_3) {
   FUNC_0(1, "%s: must be between %d and %d",
        VAR_1, VAR_2, VAR_3);
  }
  return (int)VAR_5;
 }

 FUNC_0(1, "%s: parameter must be an integer", VAR_1);
}
