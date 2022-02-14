
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {int relax_trip; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_3 (void)
{

  bfd_boolean VAR_2;

  VAR_1.relax_trip = -1;
  do
    {
      VAR_2 = VAR_0;
      VAR_1.relax_trip++;







      FUNC_0 ();



      FUNC_1 ();



      FUNC_2 (&VAR_2, VAR_0);
    }
  while (VAR_2);
}
