
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_zone {struct dn_fib_node** dz_hash; } ;
struct dn_fib_node {int dummy; } ;
typedef int dn_fib_key_t ;
struct TYPE_2__ {size_t datum; } ;


 TYPE_1__ FUNC_0 (int ,struct dn_zone*) ;

__attribute__((used)) static inline struct dn_fib_node **FUNC_1(dn_fib_key_t VAR_0, struct dn_zone *VAR_1)
{
 return &VAR_1->dz_hash[FUNC_0(VAR_0, VAR_1).datum];
}
