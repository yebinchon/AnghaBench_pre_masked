
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rsocket {scalar_t__ type; scalar_t__ state; int slock; int conn_dest; int udp_sock; TYPE_3__* cm_id; } ;
typedef int socklen_t ;
struct TYPE_4__ {int dst_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {TYPE_2__ route; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct sockaddr const*,int ) ;
 int FUNC_2 (struct rsocket*,struct sockaddr const*,int ,int *) ;
 int FUNC_3 (struct rsocket*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 struct rsocket* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,struct sockaddr const*,int ) ;
 int FUNC_8 (struct rsocket*) ;
 scalar_t__ VAR_3 ;

int FUNC_9(int VAR_4, const struct sockaddr *VAR_5, socklen_t VAR_6)
{
 struct rsocket *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(&VAR_2, VAR_4);
 if (!VAR_7)
  return FUNC_0(VAR_0);
 if (VAR_7->type == VAR_1) {
  FUNC_7(&VAR_7->cm_id->route.addr.dst_addr, VAR_5, VAR_6);
  VAR_8 = FUNC_8(VAR_7);
 } else {
  if (VAR_7->state == VAR_3) {
   VAR_8 = FUNC_3(VAR_7);
   if (VAR_8)
    return VAR_8;
  }

  FUNC_4(&VAR_7->slock);
  VAR_8 = FUNC_1(VAR_7->udp_sock, VAR_5, VAR_6);
  if (!VAR_8)
   VAR_8 = FUNC_2(VAR_7, VAR_5, VAR_6, &VAR_7->conn_dest);
  FUNC_5(&VAR_7->slock);
 }
 return VAR_8;
}
