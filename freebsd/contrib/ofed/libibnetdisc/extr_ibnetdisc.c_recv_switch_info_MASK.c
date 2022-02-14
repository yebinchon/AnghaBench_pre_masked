
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int smp_engine_t ;
typedef int ibnd_smp_t ;
struct TYPE_2__ {int smaenhsp0; int switchinfo; } ;
typedef TYPE_1__ ibnd_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(smp_engine_t * VAR_2, ibnd_smp_t * VAR_3,
       uint8_t * VAR_4, void *VAR_5)
{
 uint8_t *VAR_6 = VAR_4 + VAR_0;
 ibnd_node_t *VAR_7 = VAR_5;
 FUNC_1(VAR_7->switchinfo, VAR_6, sizeof(VAR_7->switchinfo));
 FUNC_0(VAR_7->switchinfo, VAR_1,
    &VAR_7->smaenhsp0);
 return 0;
}
