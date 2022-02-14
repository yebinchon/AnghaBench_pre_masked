
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcent {char* r_name; int r_number; char** r_aliases; } ;


 int FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct rpcent *VAR_0, char *VAR_1, size_t VAR_2)
{
 char **VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, "%s %d",
  VAR_0->r_name, VAR_0->r_number);
 VAR_1 += VAR_4;
 if (VAR_4 > (int)VAR_2)
  return;
 VAR_2 -= VAR_4;

 if (VAR_0->r_aliases != ((void*)0)) {
  if (*(VAR_0->r_aliases) != ((void*)0)) {
   for (VAR_3 = VAR_0->r_aliases; *VAR_3; ++VAR_3) {
    VAR_4 = FUNC_0(VAR_1, VAR_2, " %s", *VAR_3);
    VAR_1 += VAR_4;
    if (VAR_4 > (int)VAR_2)
     return;
    VAR_2 -= VAR_4;

    if (VAR_2 == 0)
     return;
   }
  } else
   FUNC_0(VAR_1, VAR_2, " noaliases");
 } else
  FUNC_0(VAR_1, VAR_2, " (null)");
}
