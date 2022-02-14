
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
struct TYPE_4__ {int flags; scalar_t__ poll_count; scalar_t__ poll_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(sc_p VAR_2)
{
 VAR_2->flags |= (VAR_0 | VAR_1);
 VAR_2->poll_state = 0;
 VAR_2->poll_count = 0;
 FUNC_0(VAR_2);
}
