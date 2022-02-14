
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ifaddrs; int * proc; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(isc_interfaceiter_t *VAR_0) {


 if (VAR_0->proc != ((void*)0))
  FUNC_0(VAR_0->proc);
 VAR_0->proc = ((void*)0);

 if (VAR_0->ifaddrs)
  FUNC_1(VAR_0->ifaddrs);
 VAR_0->ifaddrs = ((void*)0);
}
