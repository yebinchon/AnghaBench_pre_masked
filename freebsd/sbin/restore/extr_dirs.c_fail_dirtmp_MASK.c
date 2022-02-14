
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,char const*,char*,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_4)
{
 const char *VAR_5;

 FUNC_3("%s: cannot write directory database", VAR_4);
 if (VAR_2 == VAR_0) {
  if ((VAR_5 = FUNC_2("TMPDIR")) == ((void*)0) || VAR_5[0] == '\0')
   VAR_5 = VAR_1;
  FUNC_1(VAR_3, "Try making space in %s, %s\n%s\n", VAR_5,
      "or set environment variable TMPDIR",
      "to an alternate location with more disk space.");
 }
 FUNC_0(1);
}
