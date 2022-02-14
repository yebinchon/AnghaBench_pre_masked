
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct loop {int dummy; } ;
struct ivopts_data {struct loop* current_loop; } ;
struct TYPE_4__ {void* step; void* base; } ;
typedef TYPE_1__ affine_iv ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (struct loop*,int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_5 (struct ivopts_data *VAR_3, tree VAR_4, affine_iv *VAR_5)
{
  tree VAR_6;
  struct loop *VAR_7 = VAR_3->current_loop;

  VAR_5->base = VAR_1;
  VAR_5->step = VAR_1;

  if (FUNC_0 (VAR_4) != VAR_0)
    return 0;

  VAR_6 = FUNC_1 (VAR_4, 0);
  if (FUNC_0 (VAR_6) != VAR_2)
    return 0;

  if (!FUNC_4 (VAR_7, VAR_4, FUNC_1 (VAR_4, 1), VAR_5, 1))
    return 0;
  VAR_5->base = FUNC_3 (VAR_5->base);

  if (FUNC_2 (VAR_5->base)
      || FUNC_2 (VAR_5->step))
    return 0;

  return 1;
}
