
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int ,struct rwlock**) ;
 int FUNC_2 (int ,int*,int ,struct rwlock**) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static vm_page_t
FUNC_6(pmap_t VAR_2, vm_offset_t VAR_3, struct rwlock **VAR_4)
{
 vm_pindex_t VAR_5;
 pd_entry_t *VAR_6, VAR_7;
 vm_page_t VAR_8;

 VAR_7 = FUNC_5(VAR_2);




 VAR_5 = FUNC_4(VAR_3);
retry:



 VAR_6 = FUNC_3(VAR_2, VAR_3);





 if (VAR_6 != ((void*)0) && (*VAR_6 & (VAR_1 | VAR_7)) == (VAR_1 | VAR_7)) {
  if (!FUNC_2(VAR_2, VAR_6, VAR_3, VAR_4)) {




   VAR_6 = ((void*)0);
  }
 }





 if (VAR_6 != ((void*)0) && (*VAR_6 & VAR_7) != 0) {
  VAR_8 = FUNC_0(*VAR_6 & VAR_0);
  VAR_8->ref_count++;
 } else {




  VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_4);
  if (VAR_8 == ((void*)0) && VAR_4 != ((void*)0))
   goto retry;
 }
 return (VAR_8);
}
