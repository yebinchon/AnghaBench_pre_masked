
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
struct TYPE_2__ {scalar_t__ td_pinned; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int*,int ,struct spglist*) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static bool
FUNC_5(pmap_t VAR_6, vm_offset_t VAR_7, vm_offset_t VAR_8,
    struct spglist *VAR_9)
{
 pt_entry_t *VAR_10;
 bool VAR_11;

 FUNC_4(&VAR_5, VAR_3);
 FUNC_0(VAR_4->td_pinned > 0, ("curthread not pinned"));
 FUNC_1(VAR_6, VAR_0);
 VAR_11 = 0;
 for (VAR_10 = FUNC_2(VAR_6, VAR_7); VAR_7 != VAR_8; VAR_10++,
     VAR_7 += VAR_1) {
  if (*VAR_10 == 0)
   continue;





  if ((*VAR_10 & VAR_2) == 0)
   VAR_11 = 1;

  if (FUNC_3(VAR_6, VAR_10, VAR_7, VAR_9))
   break;
 }
 return (VAR_11);
}
