
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int grant_ref_t ;
typedef int domid_t ;
struct TYPE_2__ {unsigned long frame; int flags; int domid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 () ;

int
FUNC_3(domid_t VAR_3, unsigned long VAR_4, int VAR_5,
 grant_ref_t *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(1, &VAR_8);

 if (FUNC_0(VAR_7))
  return (VAR_7);

 VAR_2[VAR_8].frame = VAR_4;
 VAR_2[VAR_8].domid = VAR_3;
 FUNC_2();
 VAR_2[VAR_8].flags = VAR_0 | (VAR_5 ? VAR_1 : 0);

 if (VAR_6)
  *VAR_6 = VAR_8;

 return (0);
}
