
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;


 int FUNC_0 (struct nv*,char*,unsigned int) ;
 char* FUNC_1 (struct nv*,char*,unsigned int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct nv *VAR_0)
{
 unsigned int VAR_1;
 const char *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = 0;
 VAR_5 = 0;

 for (VAR_1 = 0; ; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, "resource%u", VAR_1);
  if (VAR_2 == ((void*)0))
   break;
  if (!VAR_4) {
   FUNC_2("Name\tStatus\t Role\t\tComponents\n");
   VAR_4 = 1;
  }
  FUNC_2("%s\t", VAR_2);
  VAR_3 = FUNC_0(VAR_0, "error%u", VAR_1);
  if (VAR_3 != 0) {
   if (VAR_5 == 0)
    VAR_5 = VAR_3;
   FUNC_2("ERR%d\n", VAR_3);
   continue;
  }
  VAR_2 = FUNC_1(VAR_0, "status%u", VAR_1);
  FUNC_2("%-9s", (VAR_2 != ((void*)0)) ? VAR_2 : "-");
  FUNC_2("%-15s", FUNC_1(VAR_0, "role%u", VAR_1));
  FUNC_2("%s\t",
      FUNC_1(VAR_0, "localpath%u", VAR_1));
  FUNC_2("%s\n",
      FUNC_1(VAR_0, "remoteaddr%u", VAR_1));
 }
 return (VAR_5);
}
