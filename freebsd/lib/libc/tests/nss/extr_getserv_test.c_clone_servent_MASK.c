
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {char* s_name; char* s_proto; char** s_aliases; int s_port; } ;


 int FUNC_0 (int ) ;
 char** FUNC_1 (int,int) ;
 int FUNC_2 (struct servent*,int ,int) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct servent *VAR_0, struct servent const *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 char **VAR_2;
 int VAR_3;

 FUNC_2(VAR_0, 0, sizeof(struct servent));

 if (VAR_1->s_name != ((void*)0)) {
  VAR_0->s_name = FUNC_3(VAR_1->s_name);
  FUNC_0(VAR_0->s_name != ((void*)0));
 }

 if (VAR_1->s_proto != ((void*)0)) {
  VAR_0->s_proto = FUNC_3(VAR_1->s_proto);
  FUNC_0(VAR_0->s_proto != ((void*)0));
 }
 VAR_0->s_port = VAR_1->s_port;

 if (VAR_1->s_aliases != ((void*)0)) {
  VAR_3 = 0;
  for (VAR_2 = VAR_1->s_aliases; *VAR_2; ++VAR_2)
   ++VAR_3;

  VAR_0->s_aliases = FUNC_1(VAR_3 + 1, sizeof(char *));
  FUNC_0(VAR_0->s_aliases != ((void*)0));

  for (VAR_2 = VAR_1->s_aliases; *VAR_2; ++VAR_2) {
   VAR_0->s_aliases[VAR_2 - VAR_1->s_aliases] = FUNC_3(*VAR_2);
   FUNC_0(VAR_0->s_aliases[VAR_2 - VAR_1->s_aliases] != ((void*)0));
  }
 }
}
