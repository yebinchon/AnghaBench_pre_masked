
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int smp_engine_t ;
typedef int ibnd_smp_t ;
struct TYPE_2__ {int nodedesc; } ;
typedef TYPE_1__ ibnd_node_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(smp_engine_t * VAR_1, ibnd_smp_t * VAR_2,
     uint8_t * VAR_3, void *VAR_4)
{
 uint8_t *VAR_5 = VAR_3 + VAR_0;
 ibnd_node_t *VAR_6 = VAR_4;
 FUNC_0(VAR_6->nodedesc, VAR_5, sizeof(VAR_6->nodedesc));
 return 0;
}
