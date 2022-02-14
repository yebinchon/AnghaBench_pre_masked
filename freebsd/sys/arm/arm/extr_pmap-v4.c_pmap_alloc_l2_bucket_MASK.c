
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_short ;
struct l2_dtable {scalar_t__ l2_occupancy; struct l2_bucket* l2_bucket; } ;
struct l2_bucket {int l2b_l1idx; struct l2_dtable* l2b_kva; int l2b_phys; } ;
typedef struct l2_dtable pt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_6__ {struct l2_dtable** pm_l2; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (struct l2_dtable*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct l2_dtable* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct l2_dtable*) ;
 int FUNC_12 (struct l2_dtable*) ;

__attribute__((used)) static struct l2_bucket *
FUNC_13(pmap_t VAR_5, vm_offset_t VAR_6)
{
 struct l2_dtable *VAR_7;
 struct l2_bucket *VAR_8;
 u_short VAR_9;

 VAR_9 = FUNC_0(VAR_6);

 FUNC_3(VAR_5);
 FUNC_7(&VAR_4, VAR_1);
 if ((VAR_7 = VAR_5->pm_l2[FUNC_2(VAR_9)]) == ((void*)0)) {





  FUNC_5(VAR_5);
  FUNC_9(&VAR_4);
  if ((VAR_7 = FUNC_10(VAR_2, VAR_0)) == ((void*)0)) {
   FUNC_8(&VAR_4);
   FUNC_4(VAR_5);
   return (((void*)0));
  }
  FUNC_8(&VAR_4);
  FUNC_4(VAR_5);
  if (VAR_5->pm_l2[FUNC_2(VAR_9)] != ((void*)0)) {




   FUNC_11(VAR_2, VAR_7);
   VAR_7 = VAR_5->pm_l2[FUNC_2(VAR_9)];
  } else {
   FUNC_6(VAR_7, sizeof(*VAR_7));



   VAR_5->pm_l2[FUNC_2(VAR_9)] = VAR_7;
  }
 }

 VAR_8 = &VAR_7->l2_bucket[FUNC_1(VAR_9)];




 if (VAR_8->l2b_kva == ((void*)0)) {
  pt_entry_t *VAR_10;





  VAR_7->l2_occupancy++;
  FUNC_5(VAR_5);
  FUNC_9(&VAR_4);
  VAR_10 = FUNC_10(VAR_3, VAR_0);
  FUNC_8(&VAR_4);
  FUNC_4(VAR_5);
  if (VAR_8->l2b_kva != ((void*)0)) {

   VAR_7->l2_occupancy--;
   FUNC_11(VAR_3, VAR_10);
   return (VAR_8);
  }
  VAR_8->l2b_phys = FUNC_12(VAR_10);
  if (VAR_10 == ((void*)0)) {





   VAR_7->l2_occupancy--;
   if (VAR_7->l2_occupancy == 0) {
    VAR_5->pm_l2[FUNC_2(VAR_9)] = ((void*)0);
    FUNC_11(VAR_2, VAR_7);
   }
   return (((void*)0));
  }

  VAR_8->l2b_kva = VAR_10;
  VAR_8->l2b_l1idx = VAR_9;
 }

 return (VAR_8);
}
