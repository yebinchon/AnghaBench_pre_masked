
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {scalar_t__ h_addrtype; scalar_t__ h_length; int h_addr_list; int h_aliases; int * h_name; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static bool
FUNC_3(const struct hostent *VAR_0, const struct hostent *VAR_1)
{

 if (VAR_0 == ((void*)0) && VAR_1 != ((void*)0))
  return (1);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if (VAR_0->h_name != ((void*)0) || VAR_1->h_name != ((void*)0)) {
  if (VAR_0->h_name == ((void*)0) || VAR_1->h_name == ((void*)0))
   return (0);
  if (FUNC_2(VAR_0->h_name, VAR_1->h_name) != 0)
   return (0);
 }

 if (!FUNC_1(VAR_0->h_aliases, VAR_1->h_aliases))
  return (0);
 if (!FUNC_1(VAR_1->h_aliases, VAR_0->h_aliases))
  return (0);

 if (VAR_0->h_addrtype != VAR_1->h_addrtype)
  return (0);

 if (VAR_0->h_length != VAR_1->h_length)
  return (0);

 if (!FUNC_0(VAR_0->h_addr_list, VAR_1->h_addr_list,
     VAR_0->h_length)) {
  return (0);
 }
 if (!FUNC_0(VAR_1->h_addr_list, VAR_0->h_addr_list,
     VAR_0->h_length)) {
  return (0);
 }

 return (1);
}
