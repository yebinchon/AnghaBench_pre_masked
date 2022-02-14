
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int dummy; } ;
struct hardwire_ttystate {int dummy; } ;
typedef int * serial_ttystate ;


 scalar_t__ FUNC_0 (struct serial*,struct hardwire_ttystate*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static serial_ttystate
FUNC_2 (struct serial *VAR_0)
{
  struct hardwire_ttystate *VAR_1;

  VAR_1 = (struct hardwire_ttystate *) FUNC_1 (sizeof *VAR_1);

  if (FUNC_0 (VAR_0, VAR_1))
    return ((void*)0);

  return (serial_ttystate) VAR_1;
}
