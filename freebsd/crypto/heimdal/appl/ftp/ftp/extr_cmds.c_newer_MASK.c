
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,char**,int,char*) ;
 int FUNC_1 (char*,char*,char*) ;

void
FUNC_2(int VAR_2, char **VAR_3)
{

 if (FUNC_0(VAR_2, VAR_3, -1, VAR_1 == VAR_0 ? "wb" : "w"))
  FUNC_1("Local file \"%s\" is newer than remote file \"%s\"\n",
   VAR_3[2], VAR_3[1]);
}
