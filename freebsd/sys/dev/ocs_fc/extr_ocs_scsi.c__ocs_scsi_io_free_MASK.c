
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_9__ {int active_ios_lock; int active_ios; int io_alloc_enabled; } ;
typedef TYPE_1__ ocs_node_t ;
struct TYPE_10__ {TYPE_1__* node; int display_name; int * ocs; } ;
typedef TYPE_2__ ocs_io_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 ocs_io_t *VAR_2 = (ocs_io_t *)VAR_1;
 ocs_t *VAR_3 = VAR_2->ocs;
 ocs_node_t *VAR_4 = VAR_2->node;
 int VAR_5;

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_8(VAR_2, "freeing io 0x%p %s\n", VAR_2, VAR_2->display_name);

 FUNC_0(FUNC_1(VAR_2));

 FUNC_5(&VAR_4->active_ios_lock);
  FUNC_4(&VAR_4->active_ios, VAR_2);
  VAR_5 = (!VAR_4->io_alloc_enabled) && FUNC_3(&VAR_4->active_ios);
 FUNC_7(&VAR_4->active_ios_lock);

 if (VAR_5) {
  FUNC_6(VAR_4, VAR_0, ((void*)0));
 }

 VAR_2->node = ((void*)0);
 FUNC_2(VAR_3, VAR_2);

}
