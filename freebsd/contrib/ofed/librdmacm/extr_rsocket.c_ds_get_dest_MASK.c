
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_addr {int dummy; } socket_addr ;
struct sockaddr {int dummy; } ;
struct rsocket {int map_lock; int dest_map; } ;
struct ds_qp {int dummy; } ;
struct ds_dest {int addr; struct ds_qp* qp; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ds_dest* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (struct rsocket*,union socket_addr*,int ,struct ds_qp**) ;
 int FUNC_3 (struct rsocket*,struct sockaddr const*,int ,union socket_addr*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sockaddr const*,int ) ;
 struct ds_dest** FUNC_7 (struct sockaddr const*,int *,int ) ;
 struct ds_dest** FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct rsocket *VAR_2, const struct sockaddr *VAR_3,
         socklen_t VAR_4, struct ds_dest **VAR_5)
{
 union socket_addr VAR_6;
 socklen_t VAR_7;
 struct ds_qp *VAR_8;
 struct ds_dest **VAR_9, *VAR_10;
 int VAR_11 = 0;

 FUNC_4(&VAR_2->map_lock);
 VAR_9 = FUNC_7(VAR_3, &VAR_2->dest_map, VAR_1);
 if (VAR_9)
  goto found;

 VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_2(VAR_2, &VAR_6, VAR_7, &VAR_8);
 if (VAR_11)
  goto out;

 VAR_9 = FUNC_7(VAR_3, &VAR_2->dest_map, VAR_1);
 if (!VAR_9) {
  VAR_10 = FUNC_1(1, sizeof(*VAR_10));
  if (!VAR_10) {
   VAR_11 = FUNC_0(VAR_0);
   goto out;
  }

  FUNC_6(&VAR_10->addr, VAR_3, VAR_4);
  VAR_10->qp = VAR_8;
  VAR_9 = FUNC_8(&VAR_10->addr, &VAR_2->dest_map, VAR_1);
 }

found:
 *VAR_5 = *VAR_9;
out:
 FUNC_5(&VAR_2->map_lock);
 return VAR_11;
}
