
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_2__ {unsigned long extended_names_size; char* extended_names; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static char *
FUNC_3 (bfd *VAR_2, const char *VAR_3)
{
  unsigned long VAR_4 = 0;



  VAR_1 = 0;

  VAR_4 = FUNC_2 (VAR_3 + 1, ((void*)0), 10);
  if (VAR_1 != 0 || VAR_4 >= FUNC_0 (VAR_2)->extended_names_size)
    {
      FUNC_1 (VAR_0);
      return ((void*)0);
    }

  return FUNC_0 (VAR_2)->extended_names + VAR_4;
}
