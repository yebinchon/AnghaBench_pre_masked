
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcount; } ;
typedef TYPE_1__ isc_prefix_t ;
typedef int isc_mem_t ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(isc_mem_t *VAR_0, isc_prefix_t *VAR_1) {
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(&VAR_1->refcount, &VAR_2);

 if (VAR_2 <= 0) {
  FUNC_2(&VAR_1->refcount);
  FUNC_0(VAR_0, VAR_1, sizeof(isc_prefix_t));
 }
}
