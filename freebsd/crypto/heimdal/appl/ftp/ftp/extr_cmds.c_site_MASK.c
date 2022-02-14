
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char**) ;

void
FUNC_3(int VAR_1, char **VAR_2)
{

 if (VAR_1 < 2 && !FUNC_0(&VAR_1, &VAR_2, "arguments to SITE command")) {
  FUNC_1("usage: %s line-to-send\n", VAR_2[0]);
  VAR_0 = -1;
  return;
 }
 FUNC_2("SITE ", VAR_1, VAR_2);
}
