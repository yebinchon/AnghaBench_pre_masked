
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hostent {scalar_t__ h_length; int ** h_addr_list; int ** h_aliases; scalar_t__ h_addrtype; int * h_name; } ;
typedef int nvlname ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int *,size_t) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_5(const struct hostent *VAR_0, nvlist_t *VAR_1)
{
 unsigned int VAR_2;
 char VAR_3[64];
 int VAR_4;

 FUNC_3(VAR_1, "name", VAR_0->h_name);
 FUNC_2(VAR_1, "addrtype", (uint64_t)VAR_0->h_addrtype);
 FUNC_2(VAR_1, "length", (uint64_t)VAR_0->h_length);

 if (VAR_0->h_aliases == ((void*)0)) {
  FUNC_2(VAR_1, "naliases", 0);
 } else {
  for (VAR_2 = 0; VAR_0->h_aliases[VAR_2] != ((void*)0); VAR_2++) {
   VAR_4 = FUNC_4(VAR_3, sizeof(VAR_3), "alias%u", VAR_2);
   FUNC_0(VAR_4 > 0 && VAR_4 < (int)sizeof(VAR_3));
   FUNC_3(VAR_1, VAR_3, VAR_0->h_aliases[VAR_2]);
  }
  FUNC_2(VAR_1, "naliases", (uint64_t)VAR_2);
 }

 if (VAR_0->h_addr_list == ((void*)0)) {
  FUNC_2(VAR_1, "naddrs", 0);
 } else {
  for (VAR_2 = 0; VAR_0->h_addr_list[VAR_2] != ((void*)0); VAR_2++) {
   VAR_4 = FUNC_4(VAR_3, sizeof(VAR_3), "addr%u", VAR_2);
   FUNC_0(VAR_4 > 0 && VAR_4 < (int)sizeof(VAR_3));
   FUNC_1(VAR_1, VAR_3, VAR_0->h_addr_list[VAR_2],
       (size_t)VAR_0->h_length);
  }
  FUNC_2(VAR_1, "naddrs", (uint64_t)VAR_2);
 }
}
