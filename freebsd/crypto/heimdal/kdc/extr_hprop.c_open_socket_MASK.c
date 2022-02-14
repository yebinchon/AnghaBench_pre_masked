
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int krb5_context ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_9(krb5_context VAR_2, const char *VAR_3, const char *VAR_4)
{
    struct addrinfo *VAR_5, *VAR_6;
    struct addrinfo VAR_7;
    int VAR_8;

    FUNC_5 (&VAR_7, 0, sizeof(VAR_7));
    VAR_7.ai_socktype = VAR_1;
    VAR_7.ai_protocol = VAR_0;

    VAR_8 = FUNC_4 (VAR_3, VAR_4, &VAR_7, &VAR_5);
    if (VAR_8) {
 FUNC_8 ("%s: %s", VAR_3, FUNC_3(VAR_8));
 return -1;
    }

    for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->ai_next) {
 int VAR_9;

 VAR_9 = FUNC_6 (VAR_6->ai_family, VAR_6->ai_socktype, VAR_6->ai_protocol);
 if (VAR_9 < 0)
     continue;
 if (FUNC_1 (VAR_9, VAR_6->ai_addr, VAR_6->ai_addrlen) < 0) {
     FUNC_7 ("connect(%s)", VAR_3);
     FUNC_0 (VAR_9);
     continue;
 }
 FUNC_2 (VAR_5);
 return VAR_9;
    }
    FUNC_8 ("failed to contact %s", VAR_3);
    FUNC_2 (VAR_5);
    return -1;
}
