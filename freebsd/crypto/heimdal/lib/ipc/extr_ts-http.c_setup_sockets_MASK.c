
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
typedef int hints ;
typedef int heim_sipc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int,int ,int ,int *,int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int VAR_4 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(void)
{
    struct addrinfo VAR_5, *VAR_6, *VAR_7;
    int VAR_8, VAR_9;
    heim_sipc VAR_10;

    FUNC_8(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.ai_family = VAR_2;
    VAR_5.ai_socktype = VAR_3;
    VAR_5.ai_flags = VAR_0;
    VAR_8 = FUNC_5(((void*)0), "8080", &VAR_5, &VAR_7);
    if (VAR_8)
 FUNC_2(1, "%s", FUNC_4(VAR_8));

    for (VAR_6 = VAR_7; VAR_6 ; VAR_6 = VAR_6->ai_next) {
 VAR_9 = FUNC_9(VAR_6->ai_family, VAR_6->ai_socktype, VAR_6->ai_protocol);
 if (VAR_9 < 0) {
     FUNC_12("socket");
     continue;
 }
 FUNC_11(VAR_9, 1);
 FUNC_10(VAR_9, 1);

 if (FUNC_0(VAR_9, VAR_6->ai_addr, VAR_6->ai_addrlen) < 0) {
     FUNC_12("bind");
     FUNC_1(VAR_9);
     continue;
 }
 FUNC_7(VAR_9, 5);
 VAR_8 = FUNC_6(VAR_9, VAR_1,
     VAR_4, ((void*)0), &VAR_10);
 if (VAR_8)
     FUNC_2(1, "heim_sipc_stream_listener: %d", VAR_8);
    }
    FUNC_3(VAR_7);
}
