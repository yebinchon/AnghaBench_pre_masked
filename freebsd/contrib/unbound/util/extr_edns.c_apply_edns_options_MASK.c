
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct edns_data {int dummy; } ;
struct config_file {scalar_t__ do_tcp_keepalive; } ;
struct comm_point {int dummy; } ;


 int FUNC_0 (struct edns_data*,struct edns_data*,struct comm_point*,struct regional*) ;

int FUNC_1(struct edns_data* VAR_0, struct edns_data* VAR_1,
 struct config_file* VAR_2, struct comm_point* VAR_3, struct regional* VAR_4)
{
 if(VAR_2->do_tcp_keepalive &&
  !FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4))
  return 0;

 return 1;
}
