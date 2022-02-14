
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_list_mutex; int connlist_mutex; int close_conns_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void)
{
 FUNC_0("Removing iSER datamover...");

 if (VAR_1 != 0)
  return (VAR_0);

 FUNC_3(&VAR_3.close_conns_mutex);
 FUNC_2(&VAR_3.connlist_mutex);
 FUNC_3(&VAR_3.device_list_mutex);

 FUNC_1("iser", 1);

 FUNC_4(VAR_2);

 return (0);
}
