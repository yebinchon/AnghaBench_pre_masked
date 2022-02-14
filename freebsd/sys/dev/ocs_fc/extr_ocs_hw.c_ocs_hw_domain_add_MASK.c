
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_8__ {scalar_t__ override_fcfi; } ;
struct TYPE_9__ {size_t first_domain_idx; size_t* fcf_index_fcfi; int os; TYPE_3__** domains; TYPE_1__ workaround; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_10__ {size_t fcf_indicator; size_t fcf; } ;
typedef TYPE_3__ ocs_domain_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,char*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int ,char*,size_t,size_t) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_5, ocs_domain_t *VAR_6)
{
 int32_t VAR_7 = VAR_0;
 uint16_t VAR_8 = VAR_4;

 if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0))) {
  FUNC_1(((void*)0), "bad parameter hw=%p domain=%p\n",
    VAR_5, VAR_6);
  return VAR_0;
 }

 VAR_8 = VAR_6->fcf_indicator;

 if (VAR_8 < VAR_2) {
  uint16_t VAR_9 = VAR_4;

  FUNC_0(VAR_5->os, "adding domain %p @ %#x\n",
    VAR_6, VAR_8);
  VAR_5->domains[VAR_8] = VAR_6;


  if (VAR_5->workaround.override_fcfi) {
   if (VAR_5->first_domain_idx < 0) {
    VAR_5->first_domain_idx = VAR_8;
   }
  }

  VAR_9 = VAR_6->fcf;

  if (VAR_9 < VAR_3) {
   FUNC_0(VAR_5->os, "adding map of FCF index %d to FCFI %d\n",
          VAR_9, VAR_8);
   VAR_5->fcf_index_fcfi[VAR_9] = VAR_8;
   VAR_7 = VAR_1;
  } else {
   FUNC_2(VAR_5->os, "FCF index %d out of range (max %d)\n",
         VAR_9, VAR_3);
   VAR_5->domains[VAR_8] = ((void*)0);
  }
 } else {
  FUNC_2(VAR_5->os, "FCFI %#x out of range (max %#x)\n",
    VAR_8, VAR_2);
 }

 return VAR_7;
}
