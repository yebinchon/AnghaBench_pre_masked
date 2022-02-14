
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; scalar_t__ ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,char*,char const*,...) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static int
FUNC_9 (const char *VAR_2, const char *VAR_3)
{
    struct addrinfo *VAR_4, *VAR_5;
    struct addrinfo VAR_6;
    int VAR_7;
    int VAR_8 = -1;

    FUNC_6 (&VAR_6, 0, sizeof(VAR_6));
    VAR_6.ai_family = VAR_0;
    VAR_6.ai_socktype = VAR_1;
    VAR_6.ai_protocol = 0;

    VAR_7 = FUNC_5 (VAR_2, VAR_3, &VAR_6, &VAR_4);
    if (VAR_7)
 FUNC_2 (1, "getaddrinfo(%s): %s", VAR_2, FUNC_4(VAR_7));

    for (VAR_5 = VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->ai_next) {
 VAR_8 = FUNC_7 (VAR_5->ai_family, VAR_5->ai_socktype, VAR_5->ai_protocol);
 if (VAR_8 < 0)
     continue;
 if (FUNC_1 (VAR_8, VAR_5->ai_addr, VAR_5->ai_addrlen) < 0) {
     FUNC_8 ("connect(%s)", VAR_2);
      FUNC_0 (VAR_8);
      continue;
 }
 break;
    }
    FUNC_3 (VAR_4);
    if (VAR_5 == ((void*)0))
 FUNC_2 (1, "failed to contact %s", VAR_2);

    return VAR_8;
}
