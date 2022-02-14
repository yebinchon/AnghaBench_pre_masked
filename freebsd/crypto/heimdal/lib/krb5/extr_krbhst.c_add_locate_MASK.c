
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct krb5_krbhst_info {char* hostname; struct addrinfo* ai; int def_port; int port; int proto; } ;
struct krb5_krbhst_data {int dummy; } ;
struct addrinfo {int dummy; } ;
typedef int socklen_t ;
typedef int port ;
typedef int krb5_error_code ;
typedef int host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct krb5_krbhst_data*,struct krb5_krbhst_info*) ;
 struct krb5_krbhst_info* FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (struct sockaddr*,int ,char*,int,char*,int,int) ;
 int FUNC_4 (struct krb5_krbhst_data*) ;
 int FUNC_5 (struct addrinfo*,int ) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (struct sockaddr*) ;
 int FUNC_8 (struct sockaddr*) ;
 size_t FUNC_9 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(void *VAR_5, int VAR_6, struct sockaddr *VAR_7)
{
    struct krb5_krbhst_info *VAR_8;
    struct krb5_krbhst_data *VAR_9 = VAR_5;
    char VAR_10[VAR_1], VAR_11[VAR_2];
    struct addrinfo VAR_12, *VAR_13;
    socklen_t VAR_14;
    size_t VAR_15;
    int VAR_16;

    VAR_14 = FUNC_8(VAR_7);

    VAR_16 = FUNC_3(VAR_7, VAR_14, VAR_10, sizeof(VAR_10), VAR_11, sizeof(VAR_11),
        VAR_3|VAR_4);
    if (VAR_16 != 0)
 return 0;

    FUNC_5(&VAR_12, FUNC_4(VAR_9));
    VAR_16 = FUNC_2(VAR_10, VAR_11, &VAR_12, &VAR_13);
    if (VAR_16)
 return 0;

    VAR_15 = FUNC_9(VAR_10);

    VAR_8 = FUNC_1(1, sizeof(*VAR_8) + VAR_15);
    if(VAR_8 == ((void*)0))
 return VAR_0;

    VAR_8->proto = FUNC_4(VAR_9);
    VAR_8->port = VAR_8->def_port = FUNC_7(VAR_7);
    VAR_8->ai = VAR_13;
    FUNC_6(VAR_8->hostname, VAR_10, VAR_15);
    VAR_8->hostname[VAR_15] = '\0';
    FUNC_0(VAR_9, VAR_8);

    return 0;
}
