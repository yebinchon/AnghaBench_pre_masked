
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {unsigned int n_bits; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline bool
FUNC_2 (tree VAR_1)
{
  unsigned VAR_2 = FUNC_0 (VAR_1);
  return VAR_2 < VAR_0->n_bits && FUNC_1 (VAR_0, VAR_2);
}
