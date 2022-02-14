
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {unsigned int refs; int lock; } ;
typedef TYPE_1__ isc_refcount_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

isc_result_t
FUNC_2(isc_refcount_t *VAR_1, unsigned int VAR_2) {
 FUNC_0(VAR_1 != ((void*)0));

 VAR_1->refs = VAR_2;



 return (VAR_0);

}
