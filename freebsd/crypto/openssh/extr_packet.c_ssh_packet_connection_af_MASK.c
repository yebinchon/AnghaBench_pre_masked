
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int to ;
struct ssh {TYPE_1__* state; } ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {int connection_out; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (struct sockaddr_storage*,int ,int) ;

int
FUNC_3(struct ssh *VAR_2)
{
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4 = sizeof(VAR_3);

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_1(VAR_2->state->connection_out, (struct sockaddr *)&VAR_3,
     &VAR_4) < 0)
  return 0;





 return VAR_3.ss_family;
}
