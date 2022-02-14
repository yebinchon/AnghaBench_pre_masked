
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int ai_family; int ai_socktype; int ai_protocol; int ai_addrlen; char* ai_canonname; struct addrinfo* ai_next; int * ai_addr; } ;


 int FUNC_0 (char*,size_t,char*,...) ;

void
FUNC_1(struct addrinfo *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2, "%d %d %d %d %d ",
  VAR_0->ai_flags, VAR_0->ai_family, VAR_0->ai_socktype, VAR_0->ai_protocol,
  VAR_0->ai_addrlen);
 VAR_1 += VAR_3;
 if (VAR_3 > (int)VAR_2)
  return;
 VAR_2 -= VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, "%s ",
  VAR_0->ai_canonname == ((void*)0) ? "(null)" : VAR_0->ai_canonname);
 VAR_1 += VAR_3;
 if (VAR_3 > (int)VAR_2)
  return;
 VAR_2 -= VAR_3;

 if (VAR_0->ai_addr == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_1, VAR_2, "(null)");
  VAR_1 += VAR_3;
  if (VAR_3 > (int)VAR_2)
   return;
  VAR_2 -= VAR_3;
 } else {
  for (VAR_4 = 0; VAR_4 < (int)VAR_0->ai_addrlen; VAR_4++) {
   VAR_3 = FUNC_0(VAR_1, VAR_2,
       VAR_4 + 1 != (int)VAR_0->ai_addrlen ? "%d." : "%d",
       ((unsigned char *)VAR_0->ai_addr)[VAR_4]);
   VAR_1 += VAR_3;
   if (VAR_3 > (int)VAR_2)
    return;
   VAR_2 -= VAR_3;

   if (VAR_2 == 0)
    return;
  }
 }

 if (VAR_0->ai_next != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_1, VAR_2, ":");
  VAR_1 += VAR_3;
  if (VAR_3 > (int)VAR_2)
   return;
  VAR_2 -= VAR_3;

  FUNC_1(VAR_0->ai_next, VAR_1, VAR_2);
 }
}
