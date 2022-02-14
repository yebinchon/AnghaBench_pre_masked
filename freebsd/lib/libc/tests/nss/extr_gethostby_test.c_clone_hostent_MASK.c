
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; char** h_aliases; char** h_addr_list; int h_length; int h_addrtype; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (struct hostent*,int ,int) ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct hostent *VAR_0, struct hostent const *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 char **VAR_2;
 int VAR_3;
 int VAR_4;
 size_t VAR_5;

 FUNC_4(VAR_0, 0, sizeof(struct hostent));

 if (VAR_1->h_name != ((void*)0)) {
  VAR_0->h_name = FUNC_5(VAR_1->h_name);
  FUNC_0(VAR_0->h_name != ((void*)0));
 }

 VAR_0->h_addrtype = VAR_1->h_addrtype;
 VAR_0->h_length = VAR_1->h_length;

 if (VAR_1->h_aliases != ((void*)0)) {
  VAR_3 = 0;
  for (VAR_2 = VAR_1->h_aliases; *VAR_2; ++VAR_2)
   ++VAR_3;

  VAR_0->h_aliases = FUNC_1(VAR_3 + 1, sizeof(char *));
  FUNC_0(VAR_0->h_aliases != ((void*)0));

  for (VAR_2 = VAR_1->h_aliases; *VAR_2; ++VAR_2) {
   VAR_0->h_aliases[VAR_2 - VAR_1->h_aliases] = FUNC_5(*VAR_2);
   FUNC_0(VAR_0->h_aliases[VAR_2 - VAR_1->h_aliases] != ((void*)0));
  }
 }

 if (VAR_1->h_addr_list != ((void*)0)) {
  VAR_4 = 0;
  for (VAR_2 = VAR_1->h_addr_list; *VAR_2; ++VAR_2)
   ++VAR_4;

  VAR_0->h_addr_list = FUNC_1(VAR_4 + 1, sizeof(char *));
  FUNC_0(VAR_0->h_addr_list != ((void*)0));

  for (VAR_2 = VAR_1->h_addr_list; *VAR_2; ++VAR_2) {
   VAR_5 = VAR_2 - VAR_1->h_addr_list;
   VAR_0->h_addr_list[VAR_5] = FUNC_2(VAR_1->h_length);
   FUNC_0(VAR_0->h_addr_list[VAR_5] != ((void*)0));
   FUNC_3(VAR_0->h_addr_list[VAR_5],
       VAR_1->h_addr_list[VAR_5], VAR_1->h_length);
  }
 }
}
