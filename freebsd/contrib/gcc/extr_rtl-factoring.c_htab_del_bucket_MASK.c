
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* p_hash_bucket ;
struct TYPE_3__ {scalar_t__ seq_candidates; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_0)
{
  p_hash_bucket VAR_1 = (p_hash_bucket) VAR_0;

  if (VAR_1->seq_candidates)
    FUNC_1 (VAR_1->seq_candidates);

  FUNC_0 (VAR_1);
}
