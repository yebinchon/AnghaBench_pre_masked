
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rsocket {scalar_t__ type; int udp_sock; int cm_id; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct sockaddr*,int *) ;
 int VAR_2 ;
 struct rsocket* FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr*,int ,int *) ;

int FUNC_5(int VAR_3, struct sockaddr *VAR_4, socklen_t *VAR_5)
{
 struct rsocket *VAR_6;

 VAR_6 = FUNC_2(&VAR_2, VAR_3);
 if (!VAR_6)
  return FUNC_0(VAR_0);
 if (VAR_6->type == VAR_1) {
  FUNC_4(VAR_4, FUNC_3(VAR_6->cm_id), VAR_5);
  return 0;
 } else {
  return FUNC_1(VAR_6->udp_sock, VAR_4, VAR_5);
 }
}
