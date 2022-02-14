
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_5__ {scalar_t__ re_end; } ;
struct pmap_pkru_range {scalar_t__ pkru_keyidx; TYPE_1__ pkru_rs_el; } ;
typedef TYPE_2__* pmap_t ;
struct TYPE_6__ {scalar_t__ pm_type; int pm_pkru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct pmap_pkru_range* FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(pmap_t VAR_6, vm_offset_t VAR_7, vm_offset_t VAR_8)
{
 struct pmap_pkru_range *VAR_9, *VAR_10;
 vm_offset_t VAR_11;

 FUNC_1(VAR_6, VAR_1);
 if (VAR_6->pm_type != VAR_3 ||
     (VAR_5 & VAR_0) == 0 ||
     VAR_7 >= VAR_4)
  return (1);
 FUNC_0(VAR_8 <= VAR_4);
 for (VAR_11 = VAR_7, VAR_10 = ((void*)0); VAR_11 < VAR_8;) {
  VAR_9 = FUNC_2(&VAR_6->pm_pkru, VAR_11);
  if ((VAR_9 == ((void*)0)) ^ (VAR_10 == ((void*)0)))
   return (0);
  if (VAR_9 == ((void*)0)) {
   VAR_11 += VAR_2;
   continue;
  }
  if (VAR_10->pkru_keyidx != VAR_9->pkru_keyidx)
   return (0);
  VAR_11 = VAR_9->pkru_rs_el.re_end;
 }
 return (1);
}
