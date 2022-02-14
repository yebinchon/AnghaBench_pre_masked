
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_uint64_t ;
typedef scalar_t__ isc_uint32_t ;
typedef scalar_t__ isc_uint16_t ;
struct TYPE_6__ {scalar_t__ used; scalar_t__ length; } ;
typedef TYPE_1__ isc_buffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int) ;

void
FUNC_4(isc_buffer_t *VAR_0, isc_uint64_t VAR_1) {
 isc_uint16_t VAR_2;
 isc_uint32_t VAR_3;

 FUNC_3(FUNC_0(VAR_0));
 FUNC_3(VAR_0->used + 6 <= VAR_0->length);

 VAR_2 = (isc_uint16_t)(VAR_1 >> 32);
 VAR_3 = (isc_uint32_t)(VAR_1 & 0xFFFFFFFF);
 FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_0, VAR_3);
}
