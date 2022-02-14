
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_6__ {TYPE_1__* pos; } ;
typedef TYPE_2__ isc_interfaceiter_t ;
struct TYPE_5__ {struct TYPE_5__* ifa_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static isc_result_t
FUNC_1(isc_interfaceiter_t *VAR_3) {

 if (VAR_3->pos != ((void*)0))
  VAR_3->pos = VAR_3->pos->ifa_next;
 if (VAR_3->pos == ((void*)0)) {

  if (!VAR_2)
   return (FUNC_0(VAR_3));

  return (VAR_0);
 }

 return (VAR_1);
}
