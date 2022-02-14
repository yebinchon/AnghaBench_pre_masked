
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_resource {int container_object; int (* container_free_cb ) (int ) ;} ;


 int FUNC_0 (struct vmci_resource*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void inline
FUNC_2(struct vmci_resource *VAR_0)
{

 FUNC_0(VAR_0);

 if (VAR_0->container_free_cb) {
  VAR_0->container_free_cb(VAR_0->container_object);

 }
}
