
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {char* s_name; char* s_proto; char** s_aliases; int s_port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct servent *VAR_0, char *VAR_1, size_t VAR_2)
{
 char **VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, "%s %d %s",
  VAR_0->s_name, FUNC_0(VAR_0->s_port), VAR_0->s_proto);
 VAR_1 += VAR_4;
 if (VAR_4 > (int)VAR_2)
  return;
 VAR_2 -= VAR_4;

 if (VAR_0->s_aliases != ((void*)0)) {
  if (*(VAR_0->s_aliases) != ((void*)0)) {
   for (VAR_3 = VAR_0->s_aliases; *VAR_3; ++VAR_3) {
    VAR_4 = FUNC_1(VAR_1, VAR_2, " %s", *VAR_3);
    VAR_1 += VAR_4;
    if (VAR_4 > (int)VAR_2)
     return;
    VAR_2 -= VAR_4;

    if (VAR_2 == 0)
     return;
   }
  } else
   FUNC_1(VAR_1, VAR_2, " noaliases");
 } else
  FUNC_1(VAR_1, VAR_2, " (null)");
}
