
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; int h_addrtype; int h_length; char** h_aliases; char** h_addr_list; } ;


 int FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct hostent *VAR_0, char *VAR_1, size_t VAR_2)
{
 char **VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, "%s %d %d",
  VAR_0->h_name, VAR_0->h_addrtype, VAR_0->h_length);
 VAR_1 += VAR_5;
 if (VAR_5 > (int)VAR_2)
  return;
 VAR_2 -= VAR_5;

 if (VAR_0->h_aliases != ((void*)0)) {
  if (*(VAR_0->h_aliases) != ((void*)0)) {
   for (VAR_3 = VAR_0->h_aliases; *VAR_3; ++VAR_3) {
    VAR_5 = FUNC_0(VAR_1, VAR_2, " %s",*VAR_3);
    VAR_1 += VAR_5;
    if (VAR_5 > (int)VAR_2)
     return;
    VAR_2 -= VAR_5;

    if (VAR_2 == 0)
     return;
   }
  } else {
   VAR_5 = FUNC_0(VAR_1, VAR_2, " noaliases");
   VAR_1 += VAR_5;
   if (VAR_5 > (int)VAR_2)
    return;
   VAR_2 -= VAR_5;
  }
 } else {
  VAR_5 = FUNC_0(VAR_1, VAR_2, " (null)");
  VAR_1 += VAR_5;
  if (VAR_5 > (int)VAR_2)
   return;
  VAR_2 -= VAR_5;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2, " : ");
 VAR_1 += VAR_5;
 if (VAR_5 > (int)VAR_2)
  return;
 VAR_2 -= VAR_5;

 if (VAR_0->h_addr_list != ((void*)0)) {
  if (*(VAR_0->h_addr_list) != ((void*)0)) {
   for (VAR_3 = VAR_0->h_addr_list; *VAR_3; ++VAR_3) {
    for (VAR_4 = 0; VAR_4 < (size_t)VAR_0->h_length; ++VAR_4) {
     VAR_5 = FUNC_0(VAR_1, VAR_2,
         VAR_4 + 1 != (size_t)VAR_0->h_length ?
             "%d." : "%d",
         (unsigned char)(*VAR_3)[VAR_4]);
     VAR_1 += VAR_5;
     if (VAR_5 > (int)VAR_2)
      return;
     VAR_2 -= VAR_5;

     if (VAR_2 == 0)
      return;
    }

    if (*(VAR_3 + 1)) {
     VAR_5 = FUNC_0(VAR_1, VAR_2,
         " ");
     VAR_1 += VAR_5;
     if (VAR_5 > (int)VAR_2)
      return;
     VAR_2 -= VAR_5;
    }
   }
  } else {
   VAR_5 = FUNC_0(VAR_1, VAR_2, " noaddrs");
   VAR_1 += VAR_5;
   if (VAR_5 > (int)VAR_2)
    return;
   VAR_2 -= VAR_5;
  }
 } else {
  VAR_5 = FUNC_0(VAR_1, VAR_2, " (null)");
  VAR_1 += VAR_5;
  if (VAR_5 > (int)VAR_2)
   return;
  VAR_2 -= VAR_5;
 }
}
