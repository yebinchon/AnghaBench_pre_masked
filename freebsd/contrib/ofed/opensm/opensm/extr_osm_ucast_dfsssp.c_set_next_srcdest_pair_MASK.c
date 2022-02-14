
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {size_t num_pairs; int* srcdest_pairs; int max_len; scalar_t__ removed; } ;
typedef TYPE_1__ cdg_link_t ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 int* FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3(cdg_link_t * VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 0, VAR_3 = 2;
 uint32_t *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 if (VAR_0->num_pairs == 0) {
  VAR_0->srcdest_pairs =
      (uint32_t *) FUNC_1(VAR_3 * sizeof(uint32_t));
  VAR_0->srcdest_pairs[VAR_0->num_pairs] = VAR_1;
  VAR_0->max_len = VAR_3;
  VAR_0->removed = 0;
 } else if (VAR_0->num_pairs == VAR_0->max_len) {
  VAR_2 = VAR_0->max_len << 1;
  VAR_4 = (uint32_t *) FUNC_1(VAR_2 * sizeof(uint32_t));
  VAR_4 =
      FUNC_2(VAR_4, VAR_0->srcdest_pairs,
      VAR_0->max_len * sizeof(uint32_t));
  VAR_5 = VAR_0->srcdest_pairs;
  VAR_0->srcdest_pairs = VAR_4;
  VAR_0->srcdest_pairs[VAR_0->num_pairs] = VAR_1;
  FUNC_0(VAR_5);
  VAR_0->max_len = VAR_2;
 } else {
  VAR_0->srcdest_pairs[VAR_0->num_pairs] = VAR_1;
 }
 VAR_0->num_pairs++;
}
