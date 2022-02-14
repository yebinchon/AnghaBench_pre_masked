
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_5__ {scalar_t__ used; scalar_t__ length; } ;
typedef TYPE_1__ isc_buffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;

void
FUNC_3(isc_buffer_t *VAR_0, isc_uint32_t VAR_1) {
 FUNC_2(FUNC_0(VAR_0));
 FUNC_2(VAR_0->used + 3 <= VAR_0->length);

 FUNC_1(VAR_0, VAR_1);
}
