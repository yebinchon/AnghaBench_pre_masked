
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int,char**,int,char*) ;
 int VAR_0 ;

void
FUNC_2(int VAR_1, char *VAR_2[])
{

 if (FUNC_1(VAR_1, VAR_2, -1, "w"))
  FUNC_0(VAR_0,
      "Local file \"%s\" is newer than remote file \"%s\".\n",
      VAR_2[2], VAR_2[1]);
}
