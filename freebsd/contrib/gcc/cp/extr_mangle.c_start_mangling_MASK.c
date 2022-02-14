
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int need_abi_warning; int entity; } ;
struct TYPE_3__ {int stack; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_2 (const tree VAR_5, const bool VAR_6)
{
  VAR_0.entity = VAR_5;
  VAR_0.need_abi_warning = 0;
  if (!VAR_6)
    {
      FUNC_1 (&VAR_4, VAR_3);
      VAR_2 = &VAR_4;
      VAR_3 = FUNC_0 (&VAR_4, 0);
    }
  else
    VAR_2 = &VAR_1->stack;
}
