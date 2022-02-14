
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_socket_t ;
struct TYPE_6__ {int (* getfd ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

int
FUNC_3(isc_socket_t *VAR_0) {
 FUNC_1(FUNC_0(VAR_0));

 return(VAR_0->methods->getfd(VAR_0));
}
