
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int*,scalar_t__,int ,struct spglist*,struct rwlock**) ;

__attribute__((used)) static bool
FUNC_5(pmap_t VAR_2, vm_offset_t VAR_3, vm_offset_t VAR_4,
    pd_entry_t *VAR_5, struct spglist *VAR_6, struct rwlock **VAR_7)
{
 pt_entry_t VAR_8, *VAR_9;
 vm_offset_t VAR_10;
 bool VAR_11;

 FUNC_0(VAR_2, VAR_0);
 VAR_8 = FUNC_1(VAR_2);
 VAR_11 = 0;
 VAR_10 = VAR_4;
 for (VAR_9 = FUNC_3(VAR_5, VAR_3); VAR_3 != VAR_4; VAR_9++,
     VAR_3 += VAR_1) {
  if (*VAR_9 == 0) {
   if (VAR_10 != VAR_4) {
    FUNC_2(VAR_2, VAR_10, VAR_3);
    VAR_10 = VAR_4;
   }
   continue;
  }
  if ((*VAR_9 & VAR_8) == 0)
   VAR_11 = 1;
  else if (VAR_10 == VAR_4)
   VAR_10 = VAR_3;
  if (FUNC_4(VAR_2, VAR_9, VAR_3, *VAR_5, VAR_6, VAR_7)) {
   VAR_3 += VAR_1;
   break;
  }
 }
 if (VAR_10 != VAR_4)
  FUNC_2(VAR_2, VAR_10, VAR_3);
 return (VAR_11);
}
