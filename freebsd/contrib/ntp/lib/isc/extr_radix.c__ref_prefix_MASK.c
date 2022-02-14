
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_5__ {scalar_t__ family; int bitlen; int refcount; int add; } ;
typedef TYPE_1__ isc_prefix_t ;
typedef int isc_mem_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__**,scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static isc_result_t
FUNC_5(isc_mem_t *VAR_4, isc_prefix_t **VAR_5, isc_prefix_t *VAR_6) {
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0((VAR_6->family == VAR_0 && VAR_6->bitlen <= 32) ||
        (VAR_6->family == VAR_1 && VAR_6->bitlen <= 128) ||
        (VAR_6->family == VAR_2 && VAR_6->bitlen == 0));
 FUNC_1(VAR_5 != ((void*)0) && *VAR_5 == ((void*)0));






 if (FUNC_3(&VAR_6->refcount) == 0) {
  isc_result_t VAR_7;
  VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6->family,
      &VAR_6->add, VAR_6->bitlen);
  return VAR_7;
 }

 FUNC_4(&VAR_6->refcount, ((void*)0));

 *VAR_5 = VAR_6;
 return (VAR_3);
}
