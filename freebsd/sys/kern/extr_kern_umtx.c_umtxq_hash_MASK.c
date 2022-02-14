
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t b; scalar_t__ a; } ;
struct TYPE_4__ {TYPE_1__ both; } ;
struct umtx_key {unsigned int hash; TYPE_2__ info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static inline void
FUNC_0(struct umtx_key *VAR_3)
{
 unsigned VAR_4;

 VAR_4 = (uintptr_t)VAR_3->info.both.a + VAR_3->info.both.b;
 VAR_3->hash = ((VAR_4 * VAR_0) >> VAR_2) % VAR_1;
}
