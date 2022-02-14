
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_5__ {int sin; int sin6; } ;
struct TYPE_6__ {int bitlen; int family; int refcount; TYPE_1__ add; } ;
typedef TYPE_2__ isc_prefix_t ;
typedef int isc_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,void*,int) ;

__attribute__((used)) static isc_result_t
FUNC_4(isc_mem_t *VAR_6, isc_prefix_t **VAR_7, int VAR_8, void *VAR_9,
     int VAR_10)
{
 isc_prefix_t *VAR_11;

 FUNC_0(VAR_7 != ((void*)0));

 if (VAR_8 != VAR_1 && VAR_8 != VAR_0 && VAR_8 != VAR_2)
  return (VAR_4);

 VAR_11 = FUNC_1(VAR_6, sizeof(isc_prefix_t));
 if (VAR_11 == ((void*)0))
  return (VAR_3);

 if (VAR_8 == VAR_1) {
  VAR_11->bitlen = (VAR_10 >= 0) ? VAR_10 : 128;
  FUNC_3(&VAR_11->add.sin6, VAR_9, 16);
 } else {

  VAR_11->bitlen = (VAR_10 >= 0) ? VAR_10 : 32;
  FUNC_3(&VAR_11->add.sin, VAR_9, 4);
 }

 VAR_11->family = VAR_8;

 FUNC_2(&VAR_11->refcount, 1);

 *VAR_7 = VAR_11;
 return (VAR_5);
}
