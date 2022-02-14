
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int to; int from; } ;
typedef TYPE_1__ reference_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const reference_t * const * VAR_0,
                   const reference_t * const * VAR_1)
{
  const reference_t * VAR_2 = *VAR_0;
  const reference_t * VAR_3 = *VAR_1;

  int VAR_4 = FUNC_0(&VAR_2->from, &VAR_3->from);
  return VAR_4 ? VAR_4 : FUNC_0(&VAR_2->to, &VAR_3->to);
}
