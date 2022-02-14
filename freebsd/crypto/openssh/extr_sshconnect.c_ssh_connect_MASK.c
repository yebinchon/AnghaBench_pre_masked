
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct ssh {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct addrinfo {int dummy; } ;
struct TYPE_2__ {int * proxy_command; scalar_t__ proxy_use_fdpass; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct ssh*,char const*,struct addrinfo*,struct sockaddr_storage*,int ,int,int,int*,int) ;
 int * FUNC_1 (struct ssh*,int ,int ) ;
 int FUNC_2 (struct ssh*,char const*,int ,int *) ;
 int FUNC_3 (struct ssh*,char const*,int ,int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;

int
FUNC_5(struct ssh *VAR_3, const char *VAR_4, struct addrinfo *VAR_5,
    struct sockaddr_storage *VAR_6, u_short VAR_7, int VAR_8,
    int VAR_9, int *VAR_10, int VAR_11)
{
 if (VAR_2.proxy_command == ((void*)0)) {
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8, VAR_9, VAR_10, VAR_11);
 } else if (FUNC_4(VAR_2.proxy_command, "-") == 0) {
  if ((FUNC_1(VAR_3,
      VAR_0, VAR_1)) == ((void*)0))
   return -1;
  return 0;
 } else if (VAR_2.proxy_use_fdpass) {
  return FUNC_3(VAR_3, VAR_4, VAR_7,
      VAR_2.proxy_command);
 }
 return FUNC_2(VAR_3, VAR_4, VAR_7, VAR_2.proxy_command);
}
