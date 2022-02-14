
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
typedef int krb5_context ;
typedef int krb5_address ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *,char*,size_t,size_t*) ;
 scalar_t__ FUNC_2 (int ,struct sockaddr*,int *) ;
 int FUNC_3 (char*,size_t,char*,int) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_0,
        struct sockaddr *VAR_1, size_t VAR_2, char *VAR_3, size_t VAR_4)
{
    krb5_address VAR_5;
    if(FUNC_2(VAR_0, VAR_1, &VAR_5) == 0) {
 if(FUNC_1(&VAR_5, VAR_3, VAR_4, &VAR_4) == 0) {
     FUNC_0(VAR_0, &VAR_5);
     return;
 }
 FUNC_0(VAR_0, &VAR_5);
    }
    FUNC_3(VAR_3, VAR_4, "<family=%d>", VAR_1->sa_family);
}
