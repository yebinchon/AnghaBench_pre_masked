
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_onexit_t ;
typedef scalar_t__ minor_t ;
typedef int file_t ;
typedef int cap_rights_t ;
struct TYPE_2__ {int * td_fpop; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (void**) ;
 int * FUNC_2 (int,int *) ;
 int FUNC_3 (scalar_t__,int **) ;

int
FUNC_4(int VAR_3, minor_t *VAR_4)
{
 file_t *VAR_5, *VAR_6;
 zfs_onexit_t *VAR_7;
 cap_rights_t VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_5 = FUNC_2(VAR_3, &VAR_1);
 if (VAR_5 == ((void*)0))
  return (FUNC_0(VAR_0));

 VAR_6 = VAR_2->td_fpop;
 VAR_2->td_fpop = VAR_5;
 VAR_10 = FUNC_1(&VAR_9);
 if (VAR_10 == 0)
  *VAR_4 = (minor_t)(uintptr_t)VAR_9;
 VAR_2->td_fpop = VAR_6;
 if (VAR_10 != 0)
  return (FUNC_0(VAR_0));
 return (FUNC_3(*VAR_4, &VAR_7));
}
