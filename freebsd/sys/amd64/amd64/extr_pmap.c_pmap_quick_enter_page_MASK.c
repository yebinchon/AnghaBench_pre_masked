
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct TYPE_5__ {int pat_mode; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* FUNC_6 (int ) ;

vm_offset_t
FUNC_7(vm_page_t VAR_8)
{
 vm_paddr_t VAR_9;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 < VAR_4)
  return (FUNC_1(VAR_9));
 FUNC_3(&VAR_7);
 FUNC_0(*FUNC_6(VAR_6) == 0, ("qframe busy"));
 FUNC_5(FUNC_6(VAR_6), VAR_9 | VAR_2 | VAR_3 | VAR_0 |
     VAR_1 | FUNC_4(VAR_5, VAR_8->md.pat_mode, 0));
 return (VAR_6);
}
