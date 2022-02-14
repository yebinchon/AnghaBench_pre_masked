
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int sh_phys_max_off; int sh_pool_create_len; } ;
typedef TYPE_1__ spa_history_phys_t ;



__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_0, spa_history_phys_t *VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = VAR_1->sh_phys_max_off - VAR_1->sh_pool_create_len;
 return ((VAR_0 - VAR_1->sh_pool_create_len) % VAR_2
     + VAR_1->sh_pool_create_len);
}
