
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct module_env {int dummy; } ;
struct auth_zones {int lock; } ;
struct auth_xfer {int lock; } ;


 struct auth_xfer* FUNC_0 (struct auth_zones*,int *,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct auth_xfer*,struct module_env*,int ,int ,int *) ;

int FUNC_5(struct auth_zones* VAR_0,
 struct module_env* VAR_1, uint8_t* VAR_2, size_t VAR_3, uint16_t VAR_4)
{
 struct auth_xfer* VAR_5;
 FUNC_2(&VAR_0->lock);
 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);
 if(!VAR_5) {
  FUNC_3(&VAR_0->lock);
  return 0;
 }
 FUNC_1(&VAR_5->lock);
 FUNC_3(&VAR_0->lock);

 FUNC_4(VAR_5, VAR_1, 0, 0, ((void*)0));
 return 1;
}
