
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_cbdata {int dummy; } ;
typedef int smp_engine_t ;
typedef int ib_portid_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int ,int ,void*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(smp_engine_t * VAR_2, ib_portid_t * VAR_3,
      struct ni_cbdata * VAR_4)
{
 FUNC_0("Query Node Info; %s\n", FUNC_2(VAR_3));
 return FUNC_1(VAR_2, VAR_3, VAR_0, 0,
    VAR_1, (void *)VAR_4);
}
