
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgx_softc {int mtx_encls; } ;
struct epc_page {scalar_t__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(struct sgx_softc *VAR_0,
    struct epc_page *VAR_1)
{

 FUNC_0(&VAR_0->mtx_encls);
 FUNC_2((void *)VAR_1->base);
 FUNC_1(&VAR_0->mtx_encls);
}
