
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_8__ {unsigned int length; int base; } ;
typedef TYPE_1__ isc_region_t ;
struct TYPE_9__ {unsigned int used; } ;
typedef TYPE_2__ isc_buffer_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (TYPE_2__*) ;
 unsigned char* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (unsigned char*,int ,unsigned int) ;

isc_result_t
FUNC_5(isc_buffer_t *VAR_2, const isc_region_t *VAR_3) {
 unsigned char *VAR_4;
 unsigned int VAR_5;

 FUNC_1(FUNC_0(VAR_2));
 FUNC_1(VAR_3 != ((void*)0));




 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_2(VAR_2);
 if (VAR_3->length > VAR_5)
  return (VAR_0);
 FUNC_4(VAR_4, VAR_3->base, VAR_3->length);
 VAR_2->used += VAR_3->length;

 return (VAR_1);
}
