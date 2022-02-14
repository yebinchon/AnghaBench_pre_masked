
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int register_valid_p; scalar_t__ readonly_p; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_1 = FUNC_1 (VAR_0);
  VAR_1->readonly_p = 0;
  VAR_3 = FUNC_0 (VAR_1);
  VAR_2 = VAR_1->register_valid_p;
}
