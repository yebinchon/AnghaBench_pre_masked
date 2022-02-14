
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {scalar_t__ (* type_for_mode ) (int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static tree
FUNC_5 (int VAR_6)
{
  if (!VAR_2)
    VAR_2 = VAR_1.types.type_for_mode (VAR_5, 1);
  else if (VAR_3 == VAR_6)
    {
      FUNC_2 (FUNC_0 (VAR_4) == VAR_0);
      return VAR_4;
    }



  VAR_3 = VAR_6;
  VAR_4 = FUNC_4 (VAR_6,
          FUNC_1 (VAR_2,
        VAR_6));
  return VAR_4;
}
