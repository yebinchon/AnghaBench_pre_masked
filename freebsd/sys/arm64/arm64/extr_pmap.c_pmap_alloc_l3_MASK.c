
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,int ,struct rwlock**) ;
 int FUNC_3 (char*,int) ;
 int* FUNC_4 (int*,int ) ;
 int* FUNC_5 (int*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (int ,int ,int*) ;

__attribute__((used)) static vm_page_t
FUNC_9(pmap_t VAR_1, vm_offset_t VAR_2, struct rwlock **VAR_3)
{
 vm_pindex_t VAR_4;
 pd_entry_t *VAR_5, VAR_6;



 vm_page_t VAR_7;
 int VAR_8;




 VAR_4 = FUNC_6(VAR_2);
retry:



 VAR_5 = FUNC_8(VAR_1, VAR_2, &VAR_8);






 switch (VAR_8) {
 case -1:
  break;
 case 0:





  break;
 case 1:





  break;
 case 2:
  VAR_6 = FUNC_7(VAR_5);
  if (VAR_6 != 0) {
   VAR_7 = FUNC_1(VAR_6 & ~VAR_0);
   VAR_7->ref_count++;
   return (VAR_7);
  }
  break;
 default:
  FUNC_3("pmap_alloc_l3: Invalid level %d", VAR_8);
 }




 VAR_7 = FUNC_2(VAR_1, VAR_4, VAR_3);
 if (VAR_7 == ((void*)0) && VAR_3 != ((void*)0))
  goto retry;

 return (VAR_7);
}
