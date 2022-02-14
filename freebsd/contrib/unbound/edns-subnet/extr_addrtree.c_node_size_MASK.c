
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrtree {int (* sizefunc ) (scalar_t__) ;} ;
struct addrnode {scalar_t__ elem; TYPE_1__* parent_edge; } ;
struct TYPE_2__ {size_t len; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline size_t
FUNC_1(const struct addrtree *VAR_0, const struct addrnode *VAR_1)
{
 return sizeof *VAR_1 + sizeof *VAR_1->parent_edge + VAR_1->parent_edge->len +
  (VAR_1->elem?VAR_0->sizefunc(VAR_1->elem):0);
}
