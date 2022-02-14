
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_int ;
struct md_page {int pv_list; } ;
typedef TYPE_1__* pv_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_4__ {int pv_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 struct md_page* FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static bool
FUNC_4(pmap_t VAR_7, vm_offset_t VAR_8, pd_entry_t VAR_9, u_int VAR_10)
{
 struct md_page *VAR_11;
 pv_entry_t VAR_12;
 bool VAR_13;

 FUNC_3(&VAR_6, VAR_2);
 VAR_13 = (VAR_10 & VAR_1) != 0;
 if ((VAR_13 && VAR_3 >= VAR_4) ||
     (VAR_12 = FUNC_1(VAR_7, VAR_13)) == ((void*)0))
  return (0);
 VAR_12->pv_va = VAR_8;
 VAR_11 = FUNC_2(VAR_9 & VAR_0);
 FUNC_0(&VAR_11->pv_list, VAR_12, VAR_5);
 return (1);
}
