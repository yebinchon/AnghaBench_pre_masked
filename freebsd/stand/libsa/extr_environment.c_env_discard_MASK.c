
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct env_var {int ev_flags; struct env_var* ev_value; struct env_var* ev_name; struct env_var* ev_next; TYPE_1__* ev_prev; } ;
struct TYPE_2__ {struct env_var* ev_next; } ;


 int VAR_0 ;
 struct env_var* VAR_1 ;
 int FUNC_0 (struct env_var*) ;

__attribute__((used)) static void
FUNC_1(struct env_var *VAR_2)
{
    if (VAR_2->ev_prev)
 VAR_2->ev_prev->ev_next = VAR_2->ev_next;
    if (VAR_2->ev_next)
 VAR_2->ev_next->ev_prev = VAR_2->ev_prev;
    if (VAR_1 == VAR_2)
 VAR_1 = VAR_2->ev_next;
    FUNC_0(VAR_2->ev_name);
    if (VAR_2->ev_value != ((void*)0) && (VAR_2->ev_flags & VAR_0) != 0)
 FUNC_0(VAR_2->ev_value);
    FUNC_0(VAR_2);
}
