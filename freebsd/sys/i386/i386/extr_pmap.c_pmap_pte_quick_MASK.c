
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_2__ {scalar_t__ td_pinned; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int ) ;
 int* FUNC_5 (int ,int ) ;
 int VAR_16 ;
 int FUNC_6 (int *,int ) ;
 int* FUNC_7 (int ) ;

__attribute__((used)) static pt_entry_t *
FUNC_8(pmap_t VAR_17, vm_offset_t VAR_18)
{
 pd_entry_t VAR_19;
 pd_entry_t *VAR_20;

 VAR_20 = FUNC_5(VAR_17, VAR_18);
 if (*VAR_20 & VAR_5)
  return (VAR_20);
 if (*VAR_20 != 0) {

  if (FUNC_4(VAR_17))
   return (FUNC_7(VAR_18));
  FUNC_6(&VAR_16, VAR_13);
  FUNC_0(VAR_15->td_pinned > 0, ("curthread not pinned"));
  VAR_19 = *VAR_20 & VAR_3;
  if ((*VAR_8 & VAR_3) != VAR_19) {
   *VAR_8 = VAR_19 | VAR_6 | VAR_7 | VAR_2 | VAR_4;



   FUNC_3(VAR_1);
   VAR_9++;
  } else







   VAR_12++;
  return (VAR_1 + (FUNC_2(VAR_18) & (VAR_0 - 1)));
 }
 return (0);
}
