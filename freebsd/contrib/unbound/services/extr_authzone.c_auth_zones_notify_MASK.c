
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct module_env {int dummy; } ;
struct auth_zones {int lock; } ;
struct auth_xfer {int lock; } ;
struct auth_master {int dummy; } ;
typedef int socklen_t ;


 struct auth_xfer* FUNC_0 (struct auth_zones*,int *,size_t,int ) ;
 int FUNC_1 (struct auth_xfer*,struct sockaddr_storage*,int ,struct auth_master**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct auth_xfer*,struct module_env*,int,int ,struct auth_master*) ;

int FUNC_7(struct auth_zones* VAR_0, struct module_env* VAR_1,
 uint8_t* VAR_2, size_t VAR_3, uint16_t VAR_4,
 struct sockaddr_storage* VAR_5, socklen_t VAR_6, int VAR_7,
 uint32_t VAR_8, int* VAR_9)
{
 struct auth_xfer* VAR_10;
 struct auth_master* VAR_11 = ((void*)0);

 FUNC_4(&VAR_0->lock);
 VAR_10 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);
 if(!VAR_10) {
  FUNC_5(&VAR_0->lock);

  *VAR_9 = 1;
  return 0;
 }
 FUNC_2(&VAR_10->lock);
 FUNC_5(&VAR_0->lock);


 if(!FUNC_1(VAR_10, VAR_5, VAR_6, &VAR_11)) {
  FUNC_3(&VAR_10->lock);

  *VAR_9 = 1;
  return 0;
 }


 FUNC_6(VAR_10, VAR_1, VAR_7, VAR_8, VAR_11);
 return 1;
}
