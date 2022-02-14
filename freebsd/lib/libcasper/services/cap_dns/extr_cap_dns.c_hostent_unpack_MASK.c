
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_addrtype; int h_length; int ** h_addr_list; int ** h_aliases; int * h_name; } ;
typedef int nvlname ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;
 void* FUNC_2 (int,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (struct hostent*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int const*,char*,int *) ;
 scalar_t__ FUNC_6 (int const*,char*) ;
 int FUNC_7 (int const*,char*) ;
 int FUNC_8 (char*,int,char*,unsigned int) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static struct hostent *
FUNC_10(const nvlist_t *VAR_2, struct hostent *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 char VAR_6[64];
 int VAR_7;

 FUNC_3(VAR_3);

 VAR_3->h_name = FUNC_9(FUNC_7(VAR_2, "name"));
 if (VAR_3->h_name == ((void*)0))
  goto fail;
 VAR_3->h_addrtype = (int)FUNC_6(VAR_2, "addrtype");
 VAR_3->h_length = (int)FUNC_6(VAR_2, "length");

 VAR_5 = (unsigned int)FUNC_6(VAR_2, "naliases");
 VAR_3->h_aliases = FUNC_2(sizeof(VAR_3->h_aliases[0]), VAR_5 + 1);
 if (VAR_3->h_aliases == ((void*)0))
  goto fail;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_7 = FUNC_8(VAR_6, sizeof(VAR_6), "alias%u", VAR_4);
  FUNC_0(VAR_7 > 0 && VAR_7 < (int)sizeof(VAR_6));
  VAR_3->h_aliases[VAR_4] =
      FUNC_9(FUNC_7(VAR_2, VAR_6));
  if (VAR_3->h_aliases[VAR_4] == ((void*)0))
   goto fail;
 }
 VAR_3->h_aliases[VAR_4] = ((void*)0);

 VAR_5 = (unsigned int)FUNC_6(VAR_2, "naddrs");
 VAR_3->h_addr_list = FUNC_2(sizeof(VAR_3->h_addr_list[0]), VAR_5 + 1);
 if (VAR_3->h_addr_list == ((void*)0))
  goto fail;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_3->h_addr_list[VAR_4] = FUNC_4(VAR_3->h_length);
  if (VAR_3->h_addr_list[VAR_4] == ((void*)0))
   goto fail;
  VAR_7 = FUNC_8(VAR_6, sizeof(VAR_6), "addr%u", VAR_4);
  FUNC_0(VAR_7 > 0 && VAR_7 < (int)sizeof(VAR_6));
  FUNC_1(FUNC_5(VAR_2, VAR_6, ((void*)0)),
      VAR_3->h_addr_list[VAR_4], VAR_3->h_length);
 }
 VAR_3->h_addr_list[VAR_4] = ((void*)0);

 return (VAR_3);
fail:
 FUNC_3(VAR_3);
 VAR_1 = VAR_0;
 return (((void*)0));
}
