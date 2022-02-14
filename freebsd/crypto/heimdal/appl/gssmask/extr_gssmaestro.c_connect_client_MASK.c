
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {char* name; int salen; int capabilities; char* moniker; int child; int thr; int * logsock; int target_name; int * sock; void* sa; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int int32_t ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct client** VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 void* FUNC_2 (int,int) ;
 struct client** FUNC_3 (struct client**,int) ;
 int FUNC_4 (int,char*,char*) ;
 int FUNC_5 (int,char*,...) ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct addrinfo*) ;
 int FUNC_12 (struct client*,char**) ;
 int FUNC_13 (struct client*,int *) ;
 int FUNC_14 (struct client*,int *,int*,char**) ;
 int FUNC_15 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 void* FUNC_16 (int) ;
 int FUNC_17 (struct client*) ;
 scalar_t__ VAR_5 ;
 int FUNC_18 (void*,int ,int) ;
 int FUNC_19 (struct addrinfo*,int ,int) ;
 int VAR_6 ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (int *,int *,int (*) (struct client*),struct client*) ;
 int FUNC_22 (int ,int ,int ) ;
 char* FUNC_23 (char*,char) ;
 int FUNC_24 (struct client*) ;

__attribute__((used)) static void
FUNC_25(const char *VAR_7)
{
    char *VAR_8, *VAR_9;
    struct client *VAR_10 = FUNC_2(1, sizeof(*VAR_10));
    struct addrinfo VAR_11, *VAR_12, *VAR_13;
    int VAR_14, VAR_15;

    VAR_8 = FUNC_6(VAR_7);
    VAR_9 = FUNC_23(VAR_8, ':');
    if (VAR_9 == ((void*)0))
 FUNC_5(1, "port missing from %s", VAR_8);
    *VAR_9++ = 0;

    VAR_10->name = FUNC_6(VAR_7);

    FUNC_19(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.ai_family = VAR_2;
    VAR_11.ai_socktype = VAR_3;

    VAR_14 = FUNC_15(VAR_8, VAR_9, &VAR_11, &VAR_12);
    if (VAR_14)
 FUNC_5(1, "error resolving %s", VAR_8);

    for (VAR_13 = VAR_12, VAR_15 = -1; VAR_13; VAR_13 = VAR_13->ai_next) {
 VAR_15 = FUNC_22(VAR_13->ai_family, VAR_13->ai_socktype, VAR_13->ai_protocol);
 if (VAR_15 < 0)
     continue;
 if (FUNC_1(VAR_15, VAR_13->ai_addr, VAR_13->ai_addrlen) < 0) {
     FUNC_0(VAR_15);
     VAR_15 = -1;
     continue;
 }
 VAR_10->sa = FUNC_2(1, VAR_13->ai_addrlen);
 FUNC_18(VAR_10->sa, VAR_13->ai_addr, VAR_13->ai_addrlen);
 VAR_10->salen = VAR_13->ai_addrlen;
 break;
    }
    if (VAR_15 < 0)
 FUNC_4(1, "connect to host: %s", VAR_8);
    FUNC_11(VAR_13);

    VAR_10->sock = FUNC_16(VAR_15);
    FUNC_0(VAR_15);
    if (VAR_10->sock == ((void*)0))
 FUNC_5(1, "krb5_storage_from_fd");

    {
 int32_t VAR_16;
 char *VAR_17 = ((void*)0);
 FUNC_14(VAR_10, &VAR_16, &VAR_10->capabilities, &VAR_17);
 if (VAR_17) {
     FUNC_10(VAR_17);
 }
 if (VAR_10->capabilities & VAR_0)
     FUNC_12(VAR_10, &VAR_10->moniker);
 else
     VAR_10->moniker = VAR_10->name;
 if (VAR_10->capabilities & VAR_1)
     FUNC_13(VAR_10, &VAR_10->target_name);
    }

    if (VAR_5) {
 int VAR_18;

 FUNC_20("starting log socket to client %s\n", VAR_10->moniker);

 VAR_18 = FUNC_24(VAR_10);

 VAR_10->logsock = FUNC_16(VAR_18);
 FUNC_0(VAR_18);
 if (VAR_10->logsock == ((void*)0))
     FUNC_5(1, "failed to create log krb5_storage");



 VAR_10->child = FUNC_9();
 if (VAR_10->child == -1)
     FUNC_5(1, "failed to fork");
 else if (VAR_10->child == 0) {
     FUNC_17(VAR_10);
     FUNC_8(VAR_5);
     FUNC_7(0);
 }

   }


    VAR_4 = FUNC_3(VAR_4, (VAR_6 + 1) * sizeof(*VAR_4));

    VAR_4[VAR_6] = VAR_10;
    VAR_6++;

    FUNC_10(VAR_8);
}
