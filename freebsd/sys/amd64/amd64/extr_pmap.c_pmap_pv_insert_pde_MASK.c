
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_int ;
struct rwlock {int dummy; } ;
struct md_page {int pv_gen; int pv_list; } ;
typedef TYPE_1__* pv_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_4__ {int pv_va; } ;


 int FUNC_0 (struct rwlock**,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ,struct rwlock**) ;
 struct md_page* FUNC_4 (int) ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_5(pmap_t VAR_4, vm_offset_t VAR_5, pd_entry_t VAR_6, u_int VAR_7,
    struct rwlock **VAR_8)
{
 struct md_page *VAR_9;
 pv_entry_t VAR_10;
 vm_paddr_t VAR_11;

 FUNC_1(VAR_4, VAR_0);

 if ((VAR_10 = FUNC_3(VAR_4, (VAR_7 & VAR_2) != 0 ?
     ((void*)0) : VAR_8)) == ((void*)0))
  return (0);
 VAR_10->pv_va = VAR_5;
 VAR_11 = VAR_6 & VAR_1;
 FUNC_0(VAR_8, VAR_11);
 VAR_9 = FUNC_4(VAR_11);
 FUNC_2(&VAR_9->pv_list, VAR_10, VAR_3);
 VAR_9->pv_gen++;
 return (1);
}
