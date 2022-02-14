
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {scalar_t__ e_machine; unsigned long e_flags; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_7)
{
  unsigned int VAR_8 = VAR_4;

  if (FUNC_1(VAR_7)->e_machine == VAR_1)
    {
      unsigned long VAR_9 = FUNC_1 (VAR_7)->e_flags & VAR_0;

      switch (VAR_9)
 {
 case 131:
   VAR_8 = VAR_3;
   break;
 default:
 case 130:
   VAR_8 = VAR_4;
   break;
 case 129:
   VAR_8 = VAR_5;
   break;
 case 128:
   VAR_8 = VAR_6;
   break;
 }
    }
  return FUNC_0 (VAR_7, VAR_2, VAR_8);
}
