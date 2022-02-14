
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct module_env {int dummy; } ;
struct auth_xfer {int lock; } ;
struct auth_master {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct auth_xfer*,int,int ) ;
 int FUNC_2 (struct auth_xfer*,int ) ;
 int FUNC_3 (struct auth_xfer*,struct module_env*,struct auth_master*) ;

__attribute__((used)) static void
FUNC_4(struct auth_xfer* VAR_0, struct module_env* VAR_1,
 int VAR_2, uint32_t VAR_3, struct auth_master* VAR_4)
{


 if(VAR_2 && !FUNC_2(VAR_0, VAR_3)) {
  FUNC_0(&VAR_0->lock);
  return;
 }

 if(!FUNC_3(VAR_0, VAR_1, VAR_4)) {

  FUNC_1(VAR_0, VAR_2, VAR_3);
  FUNC_0(&VAR_0->lock);
 }

}
