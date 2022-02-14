
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct ps_prochandle {int dummy; } ;
struct TYPE_9__ {int pr_vaddr; } ;
typedef TYPE_1__ prmap_t ;
struct TYPE_10__ {int * dt_vector; } ;
typedef TYPE_2__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct ps_prochandle*,int ) ;
 struct ps_prochandle* FUNC_1 (TYPE_2__*,int ,int,int ) ;
 int FUNC_2 (TYPE_2__*,struct ps_prochandle*) ;
 int FUNC_3 (TYPE_2__*,struct ps_prochandle*) ;
 int FUNC_4 (TYPE_2__*,struct ps_prochandle*) ;

__attribute__((used)) static void
FUNC_5(dtrace_hdl_t *VAR_2, uint64_t *VAR_3)
{
 uint64_t VAR_4 = VAR_3[0];
 uint64_t *VAR_5 = &VAR_3[1];
 struct ps_prochandle *VAR_6;
 const prmap_t *VAR_7;

 if (VAR_2->dt_vector != ((void*)0))
  return;

 if ((VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_1 | VAR_0, 0)) == ((void*)0))
  return;

 FUNC_2(VAR_2, VAR_6);

 if ((VAR_7 = FUNC_0(VAR_6, *VAR_5)) != ((void*)0))
  *VAR_5 = VAR_7->pr_vaddr;

 FUNC_4(VAR_2, VAR_6);
 FUNC_3(VAR_2, VAR_6);
}
