
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int references; } ;
typedef TYPE_1__ isc_socket_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(isc_socket_t *VAR_0, isc_socket_t **VAR_1) {
 FUNC_2(FUNC_4(VAR_0));
 FUNC_2(VAR_1 != ((void*)0) && *VAR_1 == ((void*)0));

 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0);
 VAR_0->references++;
 FUNC_3(&VAR_0->lock);

 *VAR_1 = VAR_0;
}
