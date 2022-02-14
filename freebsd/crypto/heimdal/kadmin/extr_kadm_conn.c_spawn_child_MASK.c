
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef scalar_t__ pid_t ;
typedef int krb5_socket_t ;
typedef int krb5_context ;
typedef int krb5_address ;
typedef int buf ;
typedef int __ss ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,char*,int,size_t*) ;
 int FUNC_5 (int ,struct sockaddr*,int *) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_2 ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(krb5_context VAR_3, int *VAR_4,
     unsigned int VAR_5, int VAR_6)
{
    int VAR_7;
    size_t VAR_8;
    struct sockaddr_storage VAR_9;
    struct sockaddr *VAR_10 = (struct sockaddr *)&VAR_9;
    socklen_t VAR_11 = sizeof(VAR_9);
    krb5_socket_t VAR_12;
    pid_t VAR_13;
    krb5_address VAR_14;
    char VAR_15[128];
    size_t VAR_16;

    VAR_12 = FUNC_0(VAR_4[VAR_6], VAR_10, &VAR_11);
    if(FUNC_8(VAR_12)) {
 FUNC_6(VAR_3, VAR_2, "accept");
 return 1;
    }
    VAR_7 = FUNC_5(VAR_3, VAR_10, &VAR_14);
    if(VAR_7)
 FUNC_6(VAR_3, VAR_7, "krb5_sockaddr2address");
    else {
 VAR_7 = FUNC_4 (&VAR_14, VAR_15, sizeof(VAR_15),
    &VAR_16);
 if(VAR_7)
     FUNC_6(VAR_3, VAR_7, "krb5_print_address");
 else
     FUNC_7(VAR_3, "connection from %s", VAR_15);
 FUNC_3(VAR_3, &VAR_14);
    }

    VAR_13 = FUNC_2();
    if(VAR_13 == 0) {
 for(VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
     FUNC_9(VAR_4[VAR_8]);
 FUNC_1(VAR_12, VAR_0);
 FUNC_1(VAR_12, VAR_1);
 if(VAR_12 != VAR_0 && VAR_12 != VAR_1)
     FUNC_9(VAR_12);
 return 0;
    } else {
 FUNC_9(VAR_12);
    }
    return 1;
}
