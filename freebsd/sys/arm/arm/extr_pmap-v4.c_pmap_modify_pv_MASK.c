
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_int ;
struct TYPE_8__ {int pvh_attrs; } ;
struct vm_page {TYPE_1__ md; } ;
struct pv_entry {int pv_flags; } ;
typedef TYPE_3__* pmap_t ;
struct TYPE_9__ {int wired_count; } ;
struct TYPE_10__ {TYPE_2__ pm_stats; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pv_entry* FUNC_1 (struct vm_page*,TYPE_3__*,int ) ;
 int FUNC_2 (struct vm_page*,TYPE_3__*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static u_int
FUNC_4(struct vm_page *VAR_6, pmap_t VAR_7, vm_offset_t VAR_8,
    u_int VAR_9, u_int VAR_10)
{
 struct pv_entry *VAR_11;
 u_int VAR_12, VAR_13;

 FUNC_0(VAR_7);
 FUNC_3(&VAR_5, VAR_4);
 if ((VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8)) == ((void*)0))
  return (0);





 if (VAR_9 & (VAR_1 | VAR_0))
  VAR_6->md.pvh_attrs |= VAR_10 & (VAR_1 | VAR_0);

 VAR_13 = VAR_11->pv_flags;
 VAR_11->pv_flags = VAR_12 = (VAR_13 & ~VAR_9) | VAR_10;

 if ((VAR_12 ^ VAR_13) & VAR_2) {
  if (VAR_12 & VAR_2)
   ++VAR_7->pm_stats.wired_count;
  else
   --VAR_7->pm_stats.wired_count;
 }

 if ((VAR_12 ^ VAR_13) & VAR_3)
  FUNC_2(VAR_6, VAR_7, 0);

 return (VAR_13);
}
