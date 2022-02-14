
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_7__ {int result; TYPE_1__* buf6; scalar_t__ pos6; } ;
typedef TYPE_2__ isc_interfaceiter_t ;
struct TYPE_6__ {scalar_t__ iAddressCount; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

isc_result_t
FUNC_3(isc_interfaceiter_t *VAR_3) {
 FUNC_0(FUNC_1(VAR_3));
 FUNC_0(VAR_2);
 if (!VAR_1 && VAR_3->buf6 != ((void*)0))
  VAR_3->pos6 = VAR_3->buf6->iAddressCount + 1;
 VAR_3->result = VAR_0;
 return (FUNC_2(VAR_3));
}
