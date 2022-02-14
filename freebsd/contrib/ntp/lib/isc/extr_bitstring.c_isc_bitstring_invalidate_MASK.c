
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lsb0; scalar_t__ size; scalar_t__ length; int * data; scalar_t__ magic; } ;
typedef TYPE_1__ isc_bitstring_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(isc_bitstring_t *VAR_1) {





 FUNC_0(FUNC_1(VAR_1));

 VAR_1->magic = 0;
 VAR_1->data = ((void*)0);
 VAR_1->length = 0;
 VAR_1->size = 0;
 VAR_1->lsb0 = VAR_0;
}
