
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kadm_port {char* port; int def_port; struct kadm_port* next; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
typedef int portstr ;
typedef int krb5_socket_t ;
typedef int krb5_context ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 struct kadm_port* VAR_4 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ,int ,char*,...) ;
 int FUNC_6 (int ,char*,unsigned long) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (int ,char const*) ;
 int * FUNC_10 (int *,unsigned int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_5 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int,char*,int) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int *,unsigned int) ;

void
FUNC_19(krb5_context VAR_6, const char *VAR_7)
{
    int VAR_8;
    struct kadm_port *VAR_9;

    krb5_socket_t *VAR_10 = ((void*)0), *VAR_11;
    unsigned int VAR_12 = 0;
    int VAR_13;

    if (VAR_7 == ((void*)0))
 VAR_7 = "+";

    FUNC_9(VAR_6, VAR_7);

    for(VAR_9 = VAR_4; VAR_9; VAR_9 = VAR_9->next) {
 struct addrinfo VAR_14, *VAR_15, *VAR_16;
 char VAR_17[32];
 FUNC_8 (&VAR_14, 0, sizeof(VAR_14));
 VAR_14.ai_flags = VAR_0;
 VAR_14.ai_socktype = VAR_1;

 VAR_8 = FUNC_2(((void*)0), VAR_9->port, &VAR_14, &VAR_15);
 if(VAR_8) {
     FUNC_14(VAR_17, sizeof(VAR_17), "%u", VAR_9->def_port);
     VAR_8 = FUNC_2(((void*)0), VAR_17, &VAR_14, &VAR_15);
 }

 if(VAR_8) {
     FUNC_5(VAR_6, FUNC_3(VAR_8, VAR_3),
        "%s", VAR_17);
     continue;
 }
 VAR_13 = 0;
 for(VAR_16 = VAR_15; VAR_16; VAR_16 = VAR_16->ai_next)
     VAR_13++;
 VAR_11 = FUNC_10(VAR_10, (VAR_12 + VAR_13) * sizeof(*VAR_10));
 if(VAR_11 == ((void*)0)) {
     FUNC_6(VAR_6, "failed to reallocate %lu bytes",
         (unsigned long)(VAR_12 + VAR_13) * sizeof(*VAR_10));
     continue;
 }
 VAR_10 = VAR_11;
 for(VAR_16 = VAR_15; VAR_16; VAR_16 = VAR_16->ai_next) {
     krb5_socket_t VAR_18 = FUNC_15(VAR_16->ai_family, VAR_16->ai_socktype, VAR_16->ai_protocol);
     if(FUNC_11(VAR_18)) {
  FUNC_5(VAR_6, VAR_5, "socket");
  continue;
     }

     FUNC_17(VAR_18, 1);
     FUNC_16(VAR_18, 1);

     if (FUNC_12(FUNC_0 (VAR_18, VAR_16->ai_addr, VAR_16->ai_addrlen))) {
  FUNC_5(VAR_6, VAR_5, "bind");
  FUNC_13(VAR_18);
  continue;
     }
     if (FUNC_12(FUNC_7 (VAR_18, VAR_2))) {
  FUNC_5(VAR_6, VAR_5, "listen");
  FUNC_13(VAR_18);
  continue;
     }
     VAR_10[VAR_12++] = VAR_18;
 }
 FUNC_1 (VAR_15);
    }
    if(VAR_12 == 0)
 FUNC_4(VAR_6, 1, "no sockets to listen to - exiting");

    FUNC_18(VAR_6, VAR_10, VAR_12);
}
