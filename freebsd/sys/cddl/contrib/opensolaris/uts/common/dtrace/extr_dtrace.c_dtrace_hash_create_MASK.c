
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_hashbucket_t ;
struct TYPE_3__ {uintptr_t dth_stroffs; uintptr_t dth_nextoffs; uintptr_t dth_prevoffs; int dth_size; int dth_mask; void* dth_tab; } ;
typedef TYPE_1__ dtrace_hash_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static dtrace_hash_t *
FUNC_1(uintptr_t VAR_1, uintptr_t VAR_2, uintptr_t VAR_3)
{
 dtrace_hash_t *VAR_4 = FUNC_0(sizeof (dtrace_hash_t), VAR_0);

 VAR_4->dth_stroffs = VAR_1;
 VAR_4->dth_nextoffs = VAR_2;
 VAR_4->dth_prevoffs = VAR_3;

 VAR_4->dth_size = 1;
 VAR_4->dth_mask = VAR_4->dth_size - 1;

 VAR_4->dth_tab = FUNC_0(VAR_4->dth_size *
     sizeof (dtrace_hashbucket_t *), VAR_0);

 return (VAR_4);
}
