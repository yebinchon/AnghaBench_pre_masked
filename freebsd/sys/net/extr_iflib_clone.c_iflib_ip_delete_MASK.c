
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* if_pseudo_t ;
struct TYPE_4__ {scalar_t__ ip_on_list; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(if_pseudo_t VAR_1)
{
 FUNC_1();
 if (VAR_1->ip_on_list) {
  FUNC_0(VAR_1, VAR_0);
  VAR_1->ip_on_list = 0;
 }
 FUNC_2();
}
