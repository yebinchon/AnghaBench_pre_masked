
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int ai_addr; struct addrinfo* ai_next; } ;
typedef int conn_t ;


 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,char const*,...) ;
 int * FUNC_5 (int) ;
 struct addrinfo* FUNC_6 (char const*,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct addrinfo*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int ,int ) ;

conn_t *
FUNC_11(const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct addrinfo *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7, *VAR_8;
 const char *VAR_9;
 conn_t *VAR_10 = ((void*)0);
 int VAR_11 = 0, VAR_12 = -1;

 FUNC_0("---> %s:%d\n", VAR_1, VAR_2);


 if (VAR_4)
  FUNC_4("resolving server address: %s:%d", VAR_1, VAR_2);
 if ((VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3)) == ((void*)0))
  goto fail;


 VAR_9 = FUNC_9("FETCH_BIND_ADDRESS");
 if (VAR_9 != ((void*)0) && *VAR_9 != '\0') {
  if (VAR_4)
   FUNC_4("resolving client address: %s", VAR_9);
  if ((VAR_5 = FUNC_6(VAR_9, 0, VAR_3)) == ((void*)0))
   goto fail;
 }


 for (VAR_11 = 0, VAR_8 = VAR_6; VAR_8 != ((void*)0); VAR_8 = VAR_8->ai_next) {

  if ((VAR_12 = FUNC_10(VAR_8->ai_family, VAR_0, 0)) < 0)
   goto syserr;

  for (VAR_11 = 0, VAR_7 = VAR_5; VAR_7 != ((void*)0); VAR_7 = VAR_7->ai_next) {
   if (VAR_7->ai_family != VAR_8->ai_family)
    continue;
   if ((VAR_11 = FUNC_1(VAR_12, VAR_7->ai_addr, VAR_7->ai_addrlen)) == 0)
    break;
  }
  if (VAR_11 != 0) {
   if (VAR_4)
    FUNC_4("failed to bind to %s", VAR_9);
   goto syserr;
  }

  if ((VAR_11 = FUNC_3(VAR_12, VAR_8->ai_addr, VAR_8->ai_addrlen)) == 0)
   break;

  FUNC_2(VAR_12);
  VAR_12 = -1;
 }
 if (VAR_11 != 0) {
  if (VAR_4)
   FUNC_4("failed to connect to %s:%d", VAR_1, VAR_2);
  goto syserr;
 }

 if ((VAR_10 = FUNC_5(VAR_12)) == ((void*)0))
  goto syserr;
 if (VAR_5 != ((void*)0))
  FUNC_8(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_8(VAR_6);
 return (VAR_10);
syserr:
 FUNC_7();
 goto fail;
fail:
 if (VAR_12 >= 0)
  FUNC_2(VAR_12);
 if (VAR_5 != ((void*)0))
  FUNC_8(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_8(VAR_6);
 return (((void*)0));
}
