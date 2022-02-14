
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ecore_hwfn {scalar_t__ p_dev; } ;
struct TYPE_7__ {TYPE_1__* sriov_task; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (TYPE_2__*,struct ecore_hwfn*) ;
 int FUNC_3 (TYPE_2__*,struct ecore_hwfn*) ;
 int FUNC_4 (TYPE_2__*,struct ecore_hwfn*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, int VAR_4)
{
 struct ecore_hwfn *VAR_5;
 qlnx_host_t *VAR_6;
 int VAR_7;

 VAR_5 = VAR_3;

 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = (qlnx_host_t *)(VAR_5->p_dev);

 if ((VAR_7 = FUNC_1(VAR_5)) == -1)
  return;

 if (FUNC_0(&VAR_6->sriov_task[VAR_7].flags,
  VAR_2))
  FUNC_4(VAR_6, VAR_5);

 if (FUNC_0(&VAR_6->sriov_task[VAR_7].flags,
  VAR_1))
  FUNC_3(VAR_6, VAR_5);

 if (FUNC_0(&VAR_6->sriov_task[VAR_7].flags,
  VAR_0))
  FUNC_2(VAR_6, VAR_5);

 return;
}
