
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_chain {int dummy; } ;
struct umtx_key {scalar_t__ type; size_t hash; } ;


 scalar_t__ VAR_0 ;
 struct umtxq_chain** VAR_1 ;

__attribute__((used)) static inline struct umtxq_chain *
FUNC_0(struct umtx_key *VAR_2)
{

 if (VAR_2->type <= VAR_0)
  return (&VAR_1[1][VAR_2->hash]);
 return (&VAR_1[0][VAR_2->hash]);
}
