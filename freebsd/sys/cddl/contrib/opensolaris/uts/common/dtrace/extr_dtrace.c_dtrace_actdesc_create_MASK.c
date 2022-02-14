
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ dtrace_actkind_t ;
struct TYPE_4__ {int dtad_refcnt; int * dtad_arg; int * dtad_uarg; int dtad_ntuple; scalar_t__ dtad_kind; } ;
typedef TYPE_1__ dtrace_actdesc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static dtrace_actdesc_t *
FUNC_3(dtrace_actkind_t VAR_3, uint32_t VAR_4,
    uint64_t VAR_5, uint64_t VAR_6)
{
 dtrace_actdesc_t *VAR_7;






 VAR_7 = FUNC_2(sizeof (dtrace_actdesc_t), VAR_2);
 VAR_7->dtad_kind = VAR_3;
 VAR_7->dtad_ntuple = VAR_4;
 VAR_7->dtad_uarg = VAR_5;
 VAR_7->dtad_arg = VAR_6;
 VAR_7->dtad_refcnt = 1;

 return (VAR_7);
}
