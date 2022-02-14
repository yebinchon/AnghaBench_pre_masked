
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int iv_candidates; } ;
struct iv_cand {int dummy; } ;


 struct iv_cand* FUNC_0 (int ,int ,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static inline struct iv_cand *
FUNC_1 (struct ivopts_data *VAR_1, unsigned VAR_2)
{
  return FUNC_0 (VAR_0, VAR_1->iv_candidates, VAR_2);
}
