
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to ;
struct ssh {struct session_state* state; } ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr {int dummy; } ;
struct session_state {int connection_in; int connection_out; } ;
typedef int socklen_t ;
typedef int from ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (struct sockaddr_storage*,struct sockaddr_storage*,int) ;
 int FUNC_2 (struct sockaddr_storage*,int ,int) ;

int
FUNC_3(struct ssh *VAR_2)
{
 struct session_state *VAR_3;
 struct sockaddr_storage VAR_4, VAR_5;
 socklen_t VAR_6, VAR_7;

 if (VAR_2 == ((void*)0) || VAR_2->state == ((void*)0))
  return 0;

 VAR_3 = VAR_2->state;
 if (VAR_3->connection_in == -1 || VAR_3->connection_out == -1)
  return 0;

 if (VAR_3->connection_in == VAR_3->connection_out)
  return 1;
 VAR_6 = sizeof(VAR_4);
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 if (FUNC_0(VAR_3->connection_in, (struct sockaddr *)&VAR_4,
     &VAR_6) < 0)
  return 0;
 VAR_7 = sizeof(VAR_5);
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 if (FUNC_0(VAR_3->connection_out, (struct sockaddr *)&VAR_5,
     &VAR_7) < 0)
  return 0;
 if (VAR_6 != VAR_7 || FUNC_1(&VAR_4, &VAR_5, VAR_6) != 0)
  return 0;
 if (VAR_4.ss_family != VAR_0 && VAR_4.ss_family != VAR_1)
  return 0;
 return 1;
}
