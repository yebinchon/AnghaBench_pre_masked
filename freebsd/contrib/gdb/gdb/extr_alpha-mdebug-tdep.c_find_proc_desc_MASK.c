
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct block {int dummy; } ;
typedef TYPE_2__* alpha_extra_func_info_t ;
struct TYPE_4__ {int framereg; } ;
struct TYPE_5__ {TYPE_1__ pdr; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct block*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 struct block* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *,scalar_t__*,int *) ;
 struct symbol* FUNC_4 (int ,struct block*,int ,int ,int *) ;

__attribute__((used)) static alpha_extra_func_info_t
FUNC_5 (CORE_ADDR VAR_2)
{
  struct block *VAR_3 = FUNC_2 (VAR_2);
  alpha_extra_func_info_t VAR_4 = ((void*)0);
  struct symbol *VAR_5 = ((void*)0);

  if (VAR_3)
    {
      CORE_ADDR VAR_6;
      FUNC_3 (VAR_2, ((void*)0), &VAR_6, ((void*)0));

      if (VAR_6 > FUNC_0 (VAR_3))



 VAR_5 = ((void*)0);
      else
 VAR_5 = FUNC_4 (VAR_1, VAR_3, VAR_0, 0, ((void*)0));
    }

  if (VAR_5)
    {
      VAR_4 = (alpha_extra_func_info_t) FUNC_1 (VAR_5);



      if (VAR_4->pdr.framereg == -1)
 VAR_4 = ((void*)0);
    }

  return VAR_4;
}
