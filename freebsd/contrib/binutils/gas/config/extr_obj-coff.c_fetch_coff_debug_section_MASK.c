
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int segT ;
struct TYPE_3__ {int section; } ;
typedef TYPE_1__ asymbol ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static segT
FUNC_2 (void)
{
  static segT VAR_1;

  if (!VAR_1)
    {
      const asymbol *VAR_2;

      VAR_2 = FUNC_1 (VAR_0, ((void*)0), 0);
      FUNC_0 (VAR_2 != 0);
      VAR_1 = VAR_2->section;
    }
  return VAR_1;
}
