
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1, 0);
 if (VAR_1 != VAR_0) {
  while (VAR_1[0] == ' ')
   VAR_1++;
  if (VAR_1[0] != '\0')
   FUNC_1(VAR_2, "%s", VAR_1);
  else
   FUNC_1(VAR_2, ((void*)0));
 } else
  FUNC_2("%s", VAR_1);
}
