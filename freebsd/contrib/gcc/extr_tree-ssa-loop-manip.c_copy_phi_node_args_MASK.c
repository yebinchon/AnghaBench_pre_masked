
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;


 TYPE_1__* FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (unsigned VAR_2)
{
  unsigned VAR_3;

  for (VAR_3 = VAR_2; VAR_3 < (unsigned) VAR_1; VAR_3++)
    FUNC_0 (VAR_3)->flags |= VAR_0;

  for (VAR_3 = VAR_2; VAR_3 < (unsigned) VAR_1; VAR_3++)
    FUNC_1 (FUNC_0 (VAR_3));

  for (VAR_3 = VAR_2; VAR_3 < (unsigned) VAR_1; VAR_3++)
    FUNC_0 (VAR_3)->flags &= ~VAR_0;
}
