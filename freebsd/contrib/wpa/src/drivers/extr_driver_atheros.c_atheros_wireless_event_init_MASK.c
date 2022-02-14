
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_config {int newlink_cb; struct atheros_driver_data* ctx; } ;
struct atheros_driver_data {int * netlink; } ;


 int FUNC_0 (struct atheros_driver_data*) ;
 int VAR_0 ;
 int * FUNC_1 (struct netlink_config*) ;
 int FUNC_2 (struct netlink_config*) ;
 struct netlink_config* FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct atheros_driver_data *VAR_1)
{
 struct netlink_config *VAR_2;

 FUNC_0(VAR_1);

 VAR_2 = FUNC_3(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return -1;
 VAR_2->ctx = VAR_1;
 VAR_2->newlink_cb = VAR_0;
 VAR_1->netlink = FUNC_1(VAR_2);
 if (VAR_1->netlink == ((void*)0)) {
  FUNC_2(VAR_2);
  return -1;
 }

 return 0;
}
