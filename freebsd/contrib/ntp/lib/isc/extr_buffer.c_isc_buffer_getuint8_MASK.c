
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ isc_uint8_t ;
struct TYPE_5__ {int used; int current; } ;
typedef TYPE_1__ isc_buffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 unsigned char* FUNC_2 (TYPE_1__*) ;

isc_uint8_t
FUNC_3(isc_buffer_t *VAR_0) {
 unsigned char *VAR_1;
 isc_uint8_t VAR_2;





 FUNC_1(FUNC_0(VAR_0));
 FUNC_1(VAR_0->used - VAR_0->current >= 1);

 VAR_1 = FUNC_2(VAR_0);
 VAR_0->current += 1;
 VAR_2 = ((isc_uint8_t)(VAR_1[0]));

 return (VAR_2);
}
