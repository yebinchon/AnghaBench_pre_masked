
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_socktype; int ai_family; } ;
typedef scalar_t__ ldns_status ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,char const*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int * FUNC_6 (void*,int *) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;

__attribute__((used)) static void
FUNC_8(ldns_resolver *VAR_7, const char *VAR_8) {
    struct addrinfo VAR_9, *VAR_10, *VAR_11;
    ldns_status VAR_12;
    ldns_rdf *VAR_13;
    int VAR_14;

    FUNC_7(&VAR_9, 0, sizeof VAR_9);
    switch (FUNC_4(VAR_7)) {
    case 129: VAR_9.ai_family = VAR_3; break;
    case 128: VAR_9.ai_family = VAR_4; break;
    default: VAR_9.ai_family = VAR_5; break;
    }
    VAR_9.ai_socktype = VAR_6;
    do VAR_14 = FUNC_2(VAR_8, ((void*)0), &VAR_9, &VAR_10);
    while (VAR_14 == VAR_0);
    if (VAR_14 != 0)
        FUNC_0(1, "couldn't get address for '%s': %s", VAR_8, FUNC_1(VAR_14));
    for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->ai_next) {
        if ((VAR_13 = FUNC_6((void*)VAR_11->ai_addr, ((void*)0))) == ((void*)0))
            FUNC_0(1, "couldn't allocate an rdf: %s",
                FUNC_3(VAR_1));
        VAR_12 = FUNC_5(VAR_7, VAR_13);
        if (VAR_12 != VAR_2)
            FUNC_0(1, "couldn't push a nameserver address: %s",
                FUNC_3(VAR_12));
    }
}
