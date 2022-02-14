
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef scalar_t__ pt_entry_t ;
typedef int pmap_t ;
struct TYPE_2__ {scalar_t__ td_pinned; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__*,int ,struct spglist*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(pmap_t VAR_4, vm_offset_t VAR_5, struct spglist *VAR_6)
{
 pt_entry_t *VAR_7;

 FUNC_5(&VAR_3, VAR_1);
 FUNC_0(VAR_2->td_pinned > 0, ("curthread not pinned"));
 FUNC_1(VAR_4, VAR_0);
 if ((VAR_7 = FUNC_3(VAR_4, VAR_5)) == ((void*)0) || *VAR_7 == 0)
  return;
 FUNC_4(VAR_4, VAR_7, VAR_5, VAR_6);
 FUNC_2(VAR_4, VAR_5);
}
