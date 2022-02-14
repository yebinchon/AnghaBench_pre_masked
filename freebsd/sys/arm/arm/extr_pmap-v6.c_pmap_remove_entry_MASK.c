
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct md_page {int pv_list; } ;
typedef int pmap_t ;
struct TYPE_7__ {int pv_list; } ;
struct TYPE_6__ {int flags; TYPE_4__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 struct md_page* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_6(pmap_t VAR_4, vm_page_t VAR_5, vm_offset_t VAR_6)
{
 struct md_page *VAR_7;

 FUNC_4(&VAR_3, VAR_2);
 FUNC_3(&VAR_5->md, VAR_4, VAR_6);
 if (FUNC_0(&VAR_5->md.pv_list) && (VAR_5->flags & VAR_1) == 0) {
  VAR_7 = FUNC_2(FUNC_1(VAR_5));
  if (FUNC_0(&VAR_7->pv_list))
   FUNC_5(VAR_5, VAR_0);
 }
}
