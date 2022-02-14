
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int ,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 char const* FUNC_3 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_3)
{
 char *VAR_4;

 if (FUNC_0(&VAR_4, "%d%s.pid", VAR_1,
     VAR_3 == ((void*)0) ? FUNC_3() : VAR_3) == -1) {
  if (VAR_2)
   FUNC_2(VAR_0, "Cannot allocate memory for path");
  else
   FUNC_1("Cannot allocate memory for path");
 }

 return VAR_4;
}
