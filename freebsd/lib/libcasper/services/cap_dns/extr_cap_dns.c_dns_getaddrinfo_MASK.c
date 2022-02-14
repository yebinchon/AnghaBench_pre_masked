
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int ai_family; int ai_socktype; int ai_protocol; struct addrinfo* ai_next; int * ai_canonname; int * ai_addr; scalar_t__ ai_addrlen; } ;
typedef int nvlname ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,char*) ;
 char* FUNC_4 (int const*,char*,int *) ;
 int FUNC_5 (struct addrinfo*) ;
 int FUNC_6 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_7 (int const*,char*) ;
 scalar_t__ FUNC_8 (int const*,char*) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_11(const nvlist_t *VAR_2, const nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 struct addrinfo VAR_5, *VAR_6, *VAR_7, *VAR_8;
 const char *VAR_9, *VAR_10;
 char VAR_11[64];
 nvlist_t *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (!FUNC_3(VAR_2, "NAME2ADDR") &&
     !FUNC_3(VAR_2, "NAME"))
  return (VAR_1);

 VAR_9 = FUNC_4(VAR_3, "hostname", ((void*)0));
 VAR_10 = FUNC_4(VAR_3, "servname", ((void*)0));
 if (FUNC_7(VAR_3, "hints.ai_flags")) {
  VAR_5.ai_flags = (int)FUNC_8(VAR_3,
      "hints.ai_flags");
  VAR_5.ai_family = (int)FUNC_8(VAR_3,
      "hints.ai_family");
  VAR_5.ai_socktype = (int)FUNC_8(VAR_3,
      "hints.ai_socktype");
  VAR_5.ai_protocol = (int)FUNC_8(VAR_3,
      "hints.ai_protocol");
  VAR_5.ai_addrlen = 0;
  VAR_5.ai_addr = ((void*)0);
  VAR_5.ai_canonname = ((void*)0);
  VAR_5.ai_next = ((void*)0);
  VAR_6 = &VAR_5;
  VAR_15 = VAR_5.ai_family;
 } else {
  VAR_6 = ((void*)0);
  VAR_15 = VAR_0;
 }

 if (!FUNC_2(VAR_2, VAR_15))
  return (VAR_1);

 VAR_14 = FUNC_6(VAR_9, VAR_10, VAR_6, &VAR_7);
 if (VAR_14 != 0)
  goto out;

 for (VAR_8 = VAR_7, VAR_13 = 0; VAR_8 != ((void*)0); VAR_8 = VAR_8->ai_next, VAR_13++) {
  VAR_12 = FUNC_0(VAR_8);
  VAR_16 = FUNC_10(VAR_11, sizeof(VAR_11), "res%u", VAR_13);
  FUNC_1(VAR_16 > 0 && VAR_16 < (int)sizeof(VAR_11));
  FUNC_9(VAR_4, VAR_11, VAR_12);
 }

 FUNC_5(VAR_7);
 VAR_14 = 0;
out:
 return (VAR_14);
}
