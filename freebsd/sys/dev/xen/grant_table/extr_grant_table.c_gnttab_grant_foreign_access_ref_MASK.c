
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t grant_ref_t ;
typedef int domid_t ;
struct TYPE_2__ {unsigned long frame; int flags; int domid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;

void
FUNC_1(grant_ref_t VAR_3, domid_t VAR_4,
    unsigned long VAR_5, int VAR_6)
{

 VAR_2[VAR_3].frame = VAR_5;
 VAR_2[VAR_3].domid = VAR_4;
 FUNC_0();
 VAR_2[VAR_3].flags = VAR_0 | (VAR_6 ? VAR_1 : 0);
}
