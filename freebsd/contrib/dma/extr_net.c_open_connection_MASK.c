
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {int ai_addrlen; int ai_protocol; int ai_socktype; int ai_family; } ;
struct mx_hostentry {int addr; int host; TYPE_1__ ai; int sa; int pref; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,...) ;

__attribute__((used)) static int
FUNC_4(struct mx_hostentry *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0, "trying remote delivery to %s [%s] pref %d",
        VAR_1->host, VAR_1->addr, VAR_1->pref);

 VAR_2 = FUNC_2(VAR_1->ai.ai_family, VAR_1->ai.ai_socktype, VAR_1->ai.ai_protocol);
 if (VAR_2 < 0) {
  FUNC_3(VAR_0, "socket for %s [%s] failed: %m",
         VAR_1->host, VAR_1->addr);
  return (-1);
 }

 if (FUNC_1(VAR_2, (struct sockaddr *)&VAR_1->sa, VAR_1->ai.ai_addrlen) < 0) {
  FUNC_3(VAR_0, "connect to %s [%s] failed: %m",
         VAR_1->host, VAR_1->addr);
  FUNC_0(VAR_2);
  return (-1);
 }

 return (VAR_2);
}
