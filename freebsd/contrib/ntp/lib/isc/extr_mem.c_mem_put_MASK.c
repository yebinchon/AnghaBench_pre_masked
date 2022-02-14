
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg; int (* memfree ) (int ,void*) ;} ;
typedef TYPE_1__ isc__mem_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,int,size_t) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static inline void
FUNC_4(isc__mem_t *VAR_0, void *VAR_1, size_t VAR_2) {






 FUNC_1(VAR_2);

 (VAR_0->memfree)(VAR_0->arg, VAR_1);
}
