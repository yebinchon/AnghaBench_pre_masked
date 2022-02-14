
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* if_pseudo_t ;
struct TYPE_4__ {int ip_on_list; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(if_pseudo_t VAR_2)
{
 FUNC_1();
 if (!VAR_2->ip_on_list) {
  FUNC_0(&VAR_0, VAR_2, VAR_1);
  VAR_2->ip_on_list = 1;
 }
 FUNC_2();
}
