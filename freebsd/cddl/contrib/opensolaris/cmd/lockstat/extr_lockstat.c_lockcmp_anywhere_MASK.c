
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ls_event; scalar_t__ ls_lock; } ;
typedef TYPE_1__ lsrec_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(lsrec_t *VAR_0, lsrec_t *VAR_1)
{
 if (VAR_0->ls_event < VAR_1->ls_event)
  return (-1);
 if (VAR_0->ls_event > VAR_1->ls_event)
  return (1);
 return (FUNC_0(VAR_0->ls_lock, VAR_1->ls_lock));

}
