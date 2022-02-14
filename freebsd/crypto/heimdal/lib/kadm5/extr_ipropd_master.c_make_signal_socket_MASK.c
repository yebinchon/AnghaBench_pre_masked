
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {int ai_addrlen; struct sockaddr* ai_addr; int ai_family; int ai_protocol; int ai_socktype; } ;
typedef scalar_t__ krb5_socket_t ;
typedef int krb5_context ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,struct addrinfo**) ;
 int FUNC_3 (int ,int,int ,char*,...) ;
 int FUNC_4 (struct sockaddr_un*,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char const*,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static krb5_socket_t
FUNC_10 (krb5_context VAR_4)
{

    struct sockaddr_un VAR_5;
    const char *VAR_6;
    krb5_socket_t VAR_7;

    VAR_6 = FUNC_1(VAR_4);

    VAR_7 = FUNC_7 (VAR_0, VAR_1, 0);
    if (VAR_7 < 0)
 FUNC_3 (VAR_4, 1, VAR_2, "socket AF_UNIX");
    FUNC_4 (&VAR_5, 0, sizeof(VAR_5));
    VAR_5.sun_family = VAR_0;
    FUNC_8 (VAR_5.sun_path, VAR_6, sizeof(VAR_5.sun_path));
    FUNC_9 (VAR_5.sun_path);
    if (FUNC_0 (VAR_7, (struct sockaddr *)&VAR_5, sizeof(VAR_5)) < 0)
 FUNC_3 (VAR_4, 1, VAR_2, "bind %s", VAR_5.sun_path);
    return VAR_7;
}
