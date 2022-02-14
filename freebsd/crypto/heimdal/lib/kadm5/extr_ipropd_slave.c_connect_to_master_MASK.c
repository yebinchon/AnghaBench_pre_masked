
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int port ;
typedef int node ;
typedef int krb5_context ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct addrinfo*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int ,int ,char*,int,int *,int ,int ) ;
 int FUNC_6 (int ,int ,char*,char const*,char*) ;
 int FUNC_7 (int ,char*,char const*,char*) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_12 (krb5_context VAR_6, const char *VAR_7,
     const char *VAR_8)
{
    char VAR_9[VAR_2];
    struct addrinfo *VAR_10, *VAR_11;
    struct addrinfo VAR_12;
    int VAR_13;
    int VAR_14 = -1;

    FUNC_8 (&VAR_12, 0, sizeof(VAR_12));
    VAR_12.ai_socktype = VAR_4;

    if (VAR_8 == ((void*)0)) {
 FUNC_9(VAR_9, sizeof(VAR_9), "%u", VAR_0);
 VAR_8 = VAR_9;
    }

    VAR_13 = FUNC_4 (VAR_7, VAR_8, &VAR_12, &VAR_10);
    if (VAR_13) {
 FUNC_7(VAR_6, "Failed to get address of to %s: %s",
     VAR_7, FUNC_3(VAR_13));
 return -1;
    }

    for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->ai_next) {
 char VAR_15[VAR_1];
 VAR_13 = FUNC_5(VAR_11->ai_addr, VAR_11->ai_addrlen,
       VAR_15, sizeof(VAR_15), ((void*)0), 0, VAR_3);
 if (VAR_13)
     FUNC_11(VAR_15, "[unknown-addr]", sizeof(VAR_15));

 VAR_14 = FUNC_10 (VAR_11->ai_family, VAR_11->ai_socktype, VAR_11->ai_protocol);
 if (VAR_14 < 0)
     continue;
 if (FUNC_1 (VAR_14, VAR_11->ai_addr, VAR_11->ai_addrlen) < 0) {
     FUNC_6(VAR_6, VAR_5, "connection failed to %s[%s]",
        VAR_7, VAR_15);
     FUNC_0 (VAR_14);
     continue;
 }
 FUNC_7(VAR_6, "connection successful "
     "to master: %s[%s]", VAR_7, VAR_15);
 break;
    }
    FUNC_2 (VAR_10);

    if (VAR_11 == ((void*)0))
 return -1;

    return VAR_14;
}
