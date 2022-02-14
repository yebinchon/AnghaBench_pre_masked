
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct TYPE_2__ {int fp0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct type*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4 (int VAR_5, struct type *VAR_6)
{
  return (VAR_2 == VAR_0
   && FUNC_3 (VAR_4, VAR_5) == 4
   && (VAR_5 % VAR_1) >= FUNC_2 (VAR_4)->fp0
   && (VAR_5 % VAR_1) < FUNC_2 (VAR_4)->fp0 + 32
   && FUNC_0 (VAR_6) == VAR_3 && FUNC_1 (VAR_6) == 8);
}
