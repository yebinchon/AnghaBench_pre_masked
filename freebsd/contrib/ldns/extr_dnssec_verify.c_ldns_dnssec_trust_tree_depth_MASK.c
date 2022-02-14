
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t parent_count; struct TYPE_3__** parents; } ;
typedef TYPE_1__ ldns_dnssec_trust_tree ;



size_t
FUNC_0(ldns_dnssec_trust_tree *VAR_0)
{
 size_t VAR_1 = 0;
 size_t VAR_2 = 0;
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->parent_count; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0->parents[VAR_3]);
  if (VAR_2 > VAR_1) {
   VAR_1 = VAR_2;
  }
 }
 return 1 + VAR_1;
}
