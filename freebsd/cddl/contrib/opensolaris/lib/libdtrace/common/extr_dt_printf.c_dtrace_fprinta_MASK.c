
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_6__ {scalar_t__ dtrd_uarg; scalar_t__ dtrd_action; scalar_t__ dtrd_offset; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
typedef int dtrace_probedata_t ;
typedef int dtrace_hdl_t ;
typedef int dtrace_aggvarid_t ;
struct TYPE_7__ {scalar_t__ pfw_err; int pfw_aid; int * pfw_fp; void* pfw_argv; } ;
typedef TYPE_2__ dt_pfwalk_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int,int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ,TYPE_2__*) ;

int
FUNC_4(dtrace_hdl_t *VAR_3, FILE *VAR_4, void *VAR_5,
    const dtrace_probedata_t *VAR_6, const dtrace_recdesc_t *VAR_7,
    uint_t VAR_8, const void *VAR_9, size_t VAR_10)
{
 dt_pfwalk_t VAR_11;
 int VAR_12, VAR_13 = 0;
 dtrace_aggvarid_t *VAR_14;

 VAR_14 = FUNC_0(VAR_8 * sizeof (dtrace_aggvarid_t));






 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  const dtrace_recdesc_t *VAR_15 = &VAR_7[VAR_12];

  if (VAR_15->dtrd_uarg != VAR_7->dtrd_uarg)
   break;

  if (VAR_15->dtrd_action != VAR_7->dtrd_action)
   return (FUNC_1(VAR_3, VAR_0));

  VAR_14[VAR_13++] =

      *((dtrace_aggvarid_t *)((caddr_t)VAR_9 + VAR_15->dtrd_offset));
 }

 if (VAR_13 == 0)
  return (FUNC_1(VAR_3, VAR_0));

 VAR_11.pfw_argv = VAR_5;
 VAR_11.pfw_fp = VAR_4;
 VAR_11.pfw_err = 0;

 if (VAR_13 == 1) {
  VAR_11.pfw_aid = VAR_14[0];

  if (FUNC_3(VAR_3,
      VAR_1, &VAR_11) == -1 || VAR_11.pfw_err != 0)
   return (-1);
 } else {
  if (FUNC_2(VAR_3, VAR_14, VAR_13,
      VAR_2, &VAR_11) == -1 || VAR_11.pfw_err != 0)
   return (-1);
 }

 return (VAR_12);
}
