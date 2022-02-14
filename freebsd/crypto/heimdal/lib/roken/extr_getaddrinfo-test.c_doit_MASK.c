
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; int ai_socktype; int ai_protocol; char* ai_canonname; int ai_addr; struct addrinfo* ai_next; int ai_flags; } ;
typedef int hints ;
typedef int addrstr ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int * FUNC_4 (int,int ,char*,int) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_10 (const char *VAR_4, const char *VAR_5)
{
    struct addrinfo VAR_6;
    struct addrinfo *VAR_7, *VAR_8;
    int VAR_9;

    if (VAR_3)
 FUNC_7 ("(%s,%s)... ", VAR_4 ? VAR_4 : "null", VAR_5);

    FUNC_5 (&VAR_6, 0, sizeof(VAR_6));
    VAR_6.ai_flags = VAR_1;
    VAR_6.ai_family = VAR_0;
    VAR_6.ai_socktype = VAR_2;

    VAR_9 = FUNC_3 (VAR_4, VAR_5, &VAR_6, &VAR_7);
    if (VAR_9)
 FUNC_0(1, "error: %s\n", FUNC_2(VAR_9));

    if (VAR_3)
 FUNC_7 ("\n");

    for (VAR_8 = VAR_7; VAR_8 != ((void*)0); VAR_8 = VAR_8->ai_next) {
 char VAR_10[256];

 if (FUNC_4 (VAR_8->ai_family,
         FUNC_8 (VAR_8->ai_addr),
         VAR_10, sizeof(VAR_10)) == ((void*)0)) {
     if (VAR_3)
  FUNC_7 ("\tbad address?\n");
     continue;
 }
 if (VAR_3) {
     FUNC_7 ("\tfamily = %d, socktype = %d, protocol = %d, "
      "address = \"%s\", port = %d",
      VAR_8->ai_family, VAR_8->ai_socktype, VAR_8->ai_protocol,
      VAR_10,
      FUNC_6(FUNC_9 (VAR_8->ai_addr)));
     if (VAR_8->ai_canonname)
  FUNC_7 (", canonname = \"%s\"", VAR_8->ai_canonname);
     FUNC_7 ("\n");
 }
    }
    FUNC_1 (VAR_7);
}
