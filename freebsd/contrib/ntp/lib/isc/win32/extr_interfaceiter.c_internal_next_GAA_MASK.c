
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_7__ {TYPE_1__* ipaaCur; TYPE_2__* ipuaCur; } ;
typedef TYPE_3__ isc_interfaceiter_t ;
struct TYPE_6__ {struct TYPE_6__* Next; } ;
struct TYPE_5__ {TYPE_2__* FirstUnicastAddress; struct TYPE_5__* Next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static isc_result_t
FUNC_1(isc_interfaceiter_t *VAR_3) {
 FUNC_0(VAR_2);
 if (((void*)0) == VAR_3->ipaaCur)
  return (VAR_0);
 if (((void*)0) == VAR_3->ipuaCur)
  VAR_3->ipuaCur = VAR_3->ipaaCur->FirstUnicastAddress;
 else
  VAR_3->ipuaCur = VAR_3->ipuaCur->Next;
 while (((void*)0) == VAR_3->ipuaCur) {
  VAR_3->ipaaCur = VAR_3->ipaaCur->Next;
  if (((void*)0) == VAR_3->ipaaCur)
   return (VAR_0);
  VAR_3->ipuaCur = VAR_3->ipaaCur->FirstUnicastAddress;
 }
 return (VAR_1);
}
