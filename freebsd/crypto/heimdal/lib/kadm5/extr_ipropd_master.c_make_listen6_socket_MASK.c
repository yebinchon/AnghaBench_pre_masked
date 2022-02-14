
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int one ;
typedef int krb5_socket_t ;
typedef int krb5_context ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (long) ;
 int FUNC_2 (int ,int,int ,char*) ;
 int FUNC_3 (int ,int,char*,char const*) ;
 void* FUNC_4 (int ,char const*,char*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sockaddr_in6*,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,int ,void*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 long FUNC_10 (char const*,char**,int) ;

__attribute__((used)) static krb5_socket_t
FUNC_11 (krb5_context VAR_9, const char *VAR_10)
{
    krb5_socket_t VAR_11;
    int VAR_12 = 1;
    struct sockaddr_in6 VAR_13;

    VAR_11 = FUNC_9 (VAR_0, VAR_3, 0);
    if (FUNC_7(VAR_11))
 FUNC_2 (VAR_9, 1, VAR_8, "socket AF_INET6");
    FUNC_8 (VAR_11, VAR_4, VAR_6, (void *)&VAR_12, sizeof(VAR_12));
    FUNC_6 (&VAR_13, 0, sizeof(VAR_13));
    VAR_13.sin6_family = VAR_0;

    if (VAR_10) {
 VAR_13.sin6_port = FUNC_4 (VAR_9,
           VAR_10, "tcp",
           0);
 if (VAR_13.sin6_port == 0) {
     char *VAR_14;
     long VAR_15;

     VAR_15 = FUNC_10 (VAR_10, &VAR_14, 10);
     if (VAR_15 == 0 && VAR_14 == VAR_10)
  FUNC_3 (VAR_9, 1, "bad port `%s'", VAR_10);
     VAR_13.sin6_port = FUNC_1(VAR_15);
 }
    } else {
 VAR_13.sin6_port = FUNC_4 (VAR_9, VAR_2,
         "tcp", VAR_1);
    }
    if(FUNC_0(VAR_11, (struct sockaddr *)&VAR_13, sizeof(VAR_13)) < 0)
 FUNC_2 (VAR_9, 1, VAR_7, "bind6");
    if (FUNC_5(VAR_11, VAR_5) < 0)
 FUNC_2 (VAR_9, 1, VAR_7, "listen6");
    return VAR_11;
}
