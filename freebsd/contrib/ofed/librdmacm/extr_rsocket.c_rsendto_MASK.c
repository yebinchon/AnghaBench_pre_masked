
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rsocket {scalar_t__ type; scalar_t__ state; int slock; TYPE_1__* conn_dest; } ;
typedef int ssize_t ;
typedef int socklen_t ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct sockaddr const*,int *) ;
 int FUNC_2 (struct rsocket*,struct sockaddr const*,int ,TYPE_1__**) ;
 int FUNC_3 (struct rsocket*) ;
 int FUNC_4 (struct rsocket*,void const*,size_t,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 struct rsocket* FUNC_7 (int *,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int,void const*,size_t,int) ;

ssize_t FUNC_9(int VAR_4, const void *VAR_5, size_t VAR_6, int VAR_7,
  const struct sockaddr *VAR_8, socklen_t VAR_9)
{
 struct rsocket *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(&VAR_2, VAR_4);
 if (VAR_10->type == VAR_1) {
  if (VAR_8 || VAR_9)
   return FUNC_0(VAR_0);

  return FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7);
 }

 if (VAR_10->state == VAR_3) {
  VAR_11 = FUNC_3(VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_5(&VAR_10->slock);
 if (!VAR_10->conn_dest || FUNC_1(VAR_8, &VAR_10->conn_dest->addr)) {
  VAR_11 = FUNC_2(VAR_10, VAR_8, VAR_9, &VAR_10->conn_dest);
  if (VAR_11)
   goto out;
 }

 VAR_11 = FUNC_4(VAR_10, VAR_5, VAR_6, VAR_7);
out:
 FUNC_6(&VAR_10->slock);
 return VAR_11;
}
