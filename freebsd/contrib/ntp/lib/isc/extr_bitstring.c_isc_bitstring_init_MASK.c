
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_boolean_t ;
struct TYPE_3__ {unsigned char* data; unsigned int length; unsigned int size; int lsb0; int magic; } ;
typedef TYPE_1__ isc_bitstring_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(isc_bitstring_t *VAR_1, unsigned char *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4, isc_boolean_t VAR_5)
{







 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 <= VAR_4);

 VAR_1->magic = VAR_0;
 VAR_1->data = VAR_2;
 VAR_1->length = VAR_3;
 VAR_1->size = VAR_4;
 VAR_1->lsb0 = VAR_5;
}
