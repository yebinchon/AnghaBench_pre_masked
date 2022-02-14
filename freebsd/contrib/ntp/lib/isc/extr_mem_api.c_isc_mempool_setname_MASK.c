
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_mempool_t ;
struct TYPE_6__ {int (* setname ) (TYPE_2__*,char const*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char const*) ;

void
FUNC_3(isc_mempool_t *VAR_0, const char *VAR_1) {
 FUNC_1(FUNC_0(VAR_0));

 VAR_0->methods->setname(VAR_0, VAR_1);
}
