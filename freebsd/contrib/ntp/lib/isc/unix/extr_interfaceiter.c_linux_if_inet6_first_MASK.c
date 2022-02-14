
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid; int * proc; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(isc_interfaceiter_t *VAR_1) {
 if (VAR_1->proc != ((void*)0)) {
  FUNC_1(VAR_1->proc);
  (void)FUNC_0(VAR_1);
 } else
  VAR_1->valid = VAR_0;
}
