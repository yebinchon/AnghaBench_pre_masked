
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int dn_mtx; int ** dn_free_ranges; scalar_t__ dn_free_txg; TYPE_1__* dn_objset; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_5__ {int os_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 void* FUNC_4 (int ) ;

uint64_t
FUNC_5(dnode_t *VAR_5, uint64_t VAR_6)
{
 void *VAR_7 = FUNC_4(VAR_5->dn_objset->os_spa);
 int VAR_8;

 if (VAR_6 == VAR_0)
  return (VAR_2);





 if (VAR_7 == ((void*)0))
  return (VAR_2);

 if (VAR_5->dn_free_txg)
  return (VAR_3);

 if (VAR_6 == VAR_1)
  return (FUNC_0(VAR_5));

 FUNC_1(&VAR_5->dn_mtx);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_5->dn_free_ranges[VAR_8] != ((void*)0) &&
      FUNC_3(VAR_5->dn_free_ranges[VAR_8], VAR_6, 1))
   break;
 }
 FUNC_2(&VAR_5->dn_mtx);
 return (VAR_8 < VAR_4);
}
