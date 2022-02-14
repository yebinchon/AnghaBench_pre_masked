
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ dtrd_action; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
struct TYPE_6__ {scalar_t__ dtpda_data; } ;
typedef TYPE_2__ dtrace_probedata_t ;
typedef scalar_t__ dtrace_actkind_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(const dtrace_probedata_t *VAR_5, const dtrace_recdesc_t *VAR_6, void *VAR_7)
{
 dtrace_actkind_t VAR_8;
 uintptr_t VAR_9;

 if (VAR_6 == ((void*)0)) {




  if (!VAR_3)
   FUNC_0("\n");

  return (VAR_1);
 }

 VAR_8 = VAR_6->dtrd_action;
 VAR_9 = (uintptr_t)VAR_5->dtpda_data;

 if (VAR_8 == VAR_0) {
  VAR_4 = *((uint32_t *)VAR_9);
  return (VAR_1);
 }

 return (VAR_2);
}
