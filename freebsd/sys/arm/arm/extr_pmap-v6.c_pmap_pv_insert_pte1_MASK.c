
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_int ;
struct md_page {int pv_list; } ;
typedef TYPE_1__* pv_entry_t ;
typedef int pt1_entry_t ;
typedef int pmap_t ;
struct TYPE_4__ {int pv_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 struct md_page* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static bool
FUNC_5(pmap_t VAR_6, vm_offset_t VAR_7, pt1_entry_t VAR_8, u_int VAR_9)
{
 struct md_page *VAR_10;
 pv_entry_t VAR_11;
 bool VAR_12;

 FUNC_4(&VAR_5, VAR_1);
 VAR_12 = (VAR_9 & VAR_0) != 0;
 if ((VAR_12 && VAR_2 >= VAR_3) ||
     (VAR_11 = FUNC_1(VAR_6, VAR_12)) == ((void*)0))
  return (0);
 VAR_11->pv_va = VAR_7;
 VAR_10 = FUNC_2(FUNC_3(VAR_8));
 FUNC_0(&VAR_10->pv_list, VAR_11, VAR_4);
 return (1);
}
