
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {char* p_name; char** p_aliases; int p_proto; } ;


 int FUNC_0 (int ) ;
 char** FUNC_1 (int,int) ;
 int FUNC_2 (struct protoent*,int ,int) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct protoent *VAR_0, struct protoent const *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 char **VAR_2;
 int VAR_3;

 FUNC_2(VAR_0, 0, sizeof(struct protoent));

 if (VAR_1->p_name != ((void*)0)) {
  VAR_0->p_name = FUNC_3(VAR_1->p_name);
  FUNC_0(VAR_0->p_name != ((void*)0));
 }

 VAR_0->p_proto = VAR_1->p_proto;

 if (VAR_1->p_aliases != ((void*)0)) {
  VAR_3 = 0;
  for (VAR_2 = VAR_1->p_aliases; *VAR_2; ++VAR_2)
   ++VAR_3;

  VAR_0->p_aliases = FUNC_1(VAR_3 + 1, sizeof(char *));
  FUNC_0(VAR_0->p_aliases != ((void*)0));

  for (VAR_2 = VAR_1->p_aliases; *VAR_2; ++VAR_2) {
   VAR_0->p_aliases[VAR_2 - VAR_1->p_aliases] = FUNC_3(*VAR_2);
   FUNC_0(VAR_0->p_aliases[VAR_2 - VAR_1->p_aliases] != ((void*)0));
  }
 }
}
