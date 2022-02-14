
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr_list; } ;
typedef TYPE_1__ cselib_val ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_2 (cselib_val *VAR_1)
{
  while (VAR_1->addr_list)
    FUNC_1 (&VAR_1->addr_list);

  FUNC_0 (VAR_0, VAR_1);
}
