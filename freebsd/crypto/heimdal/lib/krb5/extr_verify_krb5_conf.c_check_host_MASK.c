
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {void* ai_socktype; int * ai_next; int * ai_addr; int * ai_canonname; scalar_t__ ai_addrlen; scalar_t__ ai_protocol; int ai_family; scalar_t__ ai_flags; } ;
typedef int service ;
typedef int krb5_context ;
typedef int hostname ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (int ,char*,char const*,char*,...) ;
 int FUNC_4 (char*,int,char*,int) ;
 size_t FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 scalar_t__ FUNC_8 (char const**,char*,char*,int) ;
 int FUNC_9 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_10(krb5_context VAR_4, const char *VAR_5, char *VAR_6)
{
    int VAR_7;
    char VAR_8[128];
    const char *VAR_9 = VAR_6;
    struct addrinfo VAR_10;
    char VAR_11[32];
    int VAR_12;
    struct addrinfo *VAR_13;

    VAR_10.ai_flags = 0;
    VAR_10.ai_family = VAR_1;
    VAR_10.ai_socktype = 0;
    VAR_10.ai_protocol = 0;

    VAR_10.ai_addrlen = 0;
    VAR_10.ai_canonname = ((void*)0);
    VAR_10.ai_addr = ((void*)0);
    VAR_10.ai_next = ((void*)0);



    if(FUNC_7(VAR_9, "http://", 7) == 0){
        VAR_9 += 7;
 VAR_10.ai_socktype = VAR_3;
 FUNC_6(VAR_11, "http", sizeof(VAR_11));
 VAR_12 = 80;
    } else if(FUNC_7(VAR_9, "http/", 5) == 0) {
        VAR_9 += 5;
 VAR_10.ai_socktype = VAR_3;
 FUNC_6(VAR_11, "http", sizeof(VAR_11));
 VAR_12 = 80;
    }else if(FUNC_7(VAR_9, "tcp/", 4) == 0){
        VAR_9 += 4;
 VAR_10.ai_socktype = VAR_3;
 FUNC_6(VAR_11, "kerberos", sizeof(VAR_11));
 VAR_12 = 88;
    } else if(FUNC_7(VAR_9, "udp/", 4) == 0) {
        VAR_9 += 4;
 VAR_10.ai_socktype = VAR_2;
 FUNC_6(VAR_11, "kerberos", sizeof(VAR_11));
 VAR_12 = 88;
    } else {
 VAR_10.ai_socktype = VAR_2;
 FUNC_6(VAR_11, "kerberos", sizeof(VAR_11));
 VAR_12 = 88;
    }
    if(FUNC_8(&VAR_9, ":", VAR_8, sizeof(VAR_8)) < 0) {
 return 1;
    }
    VAR_8[FUNC_5(VAR_8, "/")] = '\0';
    if(VAR_9 != ((void*)0)) {
 char *VAR_14;
 int VAR_15 = FUNC_9(VAR_9, &VAR_14, 0);
 if(VAR_14 == VAR_9) {
     FUNC_3(VAR_4, "%s: failed to parse port number in %s",
         VAR_5, VAR_6);
     return 1;
 }
 VAR_12 = VAR_15;
 FUNC_4(VAR_11, sizeof(VAR_11), "%u", VAR_12);
    }
    VAR_7 = FUNC_1(VAR_8, VAR_11, &VAR_10, &VAR_13);
    if(VAR_7 == VAR_0 && !FUNC_2((unsigned char)VAR_11[0])) {
 FUNC_4(VAR_11, sizeof(VAR_11), "%u", VAR_12);
 VAR_7 = FUNC_1(VAR_8, VAR_11, &VAR_10, &VAR_13);
    }
    if(VAR_7 != 0) {
 FUNC_3(VAR_4, "%s: %s (%s)", VAR_5, FUNC_0(VAR_7), VAR_8);
 return 1;
    }
    return 0;
}
