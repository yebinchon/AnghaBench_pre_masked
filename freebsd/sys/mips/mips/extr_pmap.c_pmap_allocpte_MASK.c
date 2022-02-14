
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
typedef int u_int ;
typedef int pmap_t ;
typedef int * pd_entry_t ;
struct TYPE_5__ {int ref_count; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,unsigned int,int) ;
 int ** FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static vm_page_t
FUNC_5(pmap_t VAR_1, vm_offset_t VAR_2, u_int VAR_3)
{
 unsigned VAR_4;
 pd_entry_t *VAR_5;
 vm_page_t VAR_6;




 VAR_4 = FUNC_4(VAR_2);
retry:



 VAR_5 = FUNC_3(VAR_1, VAR_2);





 if (VAR_5 != ((void*)0) && *VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_1(FUNC_0(*VAR_5));
  VAR_6->ref_count++;
 } else {




  VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_3);
  if (VAR_6 == ((void*)0) && (VAR_3 & VAR_0) == 0)
   goto retry;
 }
 return (VAR_6);
}
