
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ulong_t ;
typedef scalar_t__ id_t ;
struct TYPE_7__ {scalar_t__ dt_xlatorid; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_8__ {scalar_t__ pv_xrmax; int * pv_xrefs; } ;
typedef TYPE_2__ dt_provider_t ;


 int FUNC_0 (int *,scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (TYPE_1__*,size_t) ;

int
FUNC_6(dtrace_hdl_t *VAR_0, dt_provider_t *VAR_1, id_t VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_1->pv_xrmax);
 size_t VAR_4 = FUNC_1(VAR_0->dt_xlatorid);

 FUNC_2(VAR_2 >= 0 && VAR_2 < VAR_0->dt_xlatorid);

 if (VAR_4 > VAR_3) {
  ulong_t *VAR_5 = FUNC_5(VAR_0, VAR_4);

  if (VAR_5 == ((void*)0))
   return (-1);

  FUNC_3(VAR_1->pv_xrefs, VAR_5, VAR_3);
  FUNC_4(VAR_0, VAR_1->pv_xrefs);

  VAR_1->pv_xrefs = VAR_5;
  VAR_1->pv_xrmax = VAR_0->dt_xlatorid;
 }

 FUNC_0(VAR_1->pv_xrefs, VAR_2);
 return (0);
}
