
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_vm_handle_t {struct netmap_priv_d* priv; struct cdev* dev; } ;
struct netmap_priv_d {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct netmap_vm_handle_t*,int ) ;
 int FUNC_2 (struct netmap_priv_d*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,void*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct netmap_vm_handle_t *VAR_3 = VAR_2;
 struct cdev *VAR_4 = VAR_3->dev;
 struct netmap_priv_d *VAR_5 = VAR_3->priv;

 if (VAR_1)
  FUNC_3("handle %p", VAR_2);
 FUNC_2(VAR_5);
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_4);
}
