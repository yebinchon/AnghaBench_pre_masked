
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pmap_t ;
struct TYPE_9__ {scalar_t__ pindex; int psind; int object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,TYPE_1__*,int ,struct rwlock**) ;
 TYPE_1__* FUNC_6 (int ,scalar_t__,TYPE_1__*,int ,TYPE_1__*,struct rwlock**) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct rwlock*) ;

void
FUNC_10(pmap_t VAR_4, vm_offset_t VAR_5, vm_offset_t VAR_6,
    vm_page_t VAR_7, vm_prot_t VAR_8)
{
 struct rwlock *VAR_9;
 vm_offset_t VAR_10;
 vm_page_t VAR_11, VAR_12;
 vm_pindex_t VAR_13, VAR_14;

 FUNC_3(VAR_7->object);

 VAR_14 = FUNC_4(VAR_6 - VAR_5);
 VAR_12 = ((void*)0);
 VAR_11 = VAR_7;
 VAR_9 = ((void*)0);
 FUNC_0(VAR_4);
 while (VAR_11 != ((void*)0) && (VAR_13 = VAR_11->pindex - VAR_7->pindex) < VAR_14) {
  VAR_10 = VAR_5 + FUNC_8(VAR_13);
  if ((VAR_10 & VAR_0) == 0 && VAR_10 + VAR_1 <= VAR_6 &&
      VAR_11->psind == 1 && FUNC_7(VAR_4) &&
      FUNC_5(VAR_4, VAR_10, VAR_11, VAR_8, &VAR_9))
   VAR_11 = &VAR_11[VAR_1 / VAR_2 - 1];
  else
   VAR_12 = FUNC_6(VAR_4, VAR_10, VAR_11, VAR_8, VAR_12,
       &VAR_9);
  VAR_11 = FUNC_2(VAR_11, VAR_3);
 }
 if (VAR_9 != ((void*)0))
  FUNC_9(VAR_9);
 FUNC_1(VAR_4);
}
