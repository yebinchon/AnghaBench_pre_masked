
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
typedef int pmap_t ;
struct TYPE_6__ {int pv_list; } ;
struct TYPE_5__ {TYPE_4__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(pmap_t VAR_3, vm_page_t VAR_4, vm_offset_t VAR_5)
{

 FUNC_2(&VAR_2, VAR_1);
 FUNC_1(&VAR_4->md, VAR_3, VAR_5);
 if (FUNC_0(&VAR_4->md.pv_list))
  FUNC_3(VAR_4, VAR_0);
}
