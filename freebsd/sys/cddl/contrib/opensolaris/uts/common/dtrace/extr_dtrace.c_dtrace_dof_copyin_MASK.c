
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int hdr ;
struct TYPE_7__ {int dofh_loadsz; } ;
typedef TYPE_1__ dof_hdr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (void*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static dof_hdr_t *
FUNC_6(uintptr_t VAR_6, int *VAR_7)
{
 dof_hdr_t VAR_8, *VAR_9;

 FUNC_0(!FUNC_1(&VAR_5));




 if (FUNC_2((void *)VAR_6, &VAR_8, sizeof (VAR_8)) != 0) {
  FUNC_3(((void*)0), "failed to copyin DOF header");
  *VAR_7 = VAR_1;
  return (((void*)0));
 }





 if (VAR_8.dofh_loadsz >= VAR_4) {
  FUNC_3(&VAR_8, "load size exceeds maximum");
  *VAR_7 = VAR_0;
  return (((void*)0));
 }

 if (VAR_8.dofh_loadsz < sizeof (VAR_8)) {
  FUNC_3(&VAR_8, "invalid load size");
  *VAR_7 = VAR_2;
  return (((void*)0));
 }

 VAR_9 = FUNC_4(VAR_8.dofh_loadsz, VAR_3);

 if (FUNC_2((void *)VAR_6, VAR_9, VAR_8.dofh_loadsz) != 0 ||
     VAR_9->dofh_loadsz != VAR_8.dofh_loadsz) {
  FUNC_5(VAR_9, VAR_8.dofh_loadsz);
  *VAR_7 = VAR_1;
  return (((void*)0));
 }

 return (VAR_9);
}
