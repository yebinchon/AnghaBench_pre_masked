
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rsocket {scalar_t__ type; scalar_t__ state; int udp_sock; int cm_id; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct sockaddr const*,int ) ;
 int FUNC_2 (struct rsocket*) ;
 int VAR_2 ;
 struct rsocket* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,struct sockaddr*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_5(int VAR_5, const struct sockaddr *VAR_6, socklen_t VAR_7)
{
 struct rsocket *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_2, VAR_5);
 if (!VAR_8)
  return FUNC_0(VAR_0);
 if (VAR_8->type == VAR_1) {
  VAR_9 = FUNC_4(VAR_8->cm_id, (struct sockaddr *) VAR_6);
  if (!VAR_9)
   VAR_8->state = VAR_3;
 } else {
  if (VAR_8->state == VAR_4) {
   VAR_9 = FUNC_2(VAR_8);
   if (VAR_9)
    return VAR_9;
  }
  VAR_9 = FUNC_1(VAR_8->udp_sock, VAR_6, VAR_7);
 }
 return VAR_9;
}
