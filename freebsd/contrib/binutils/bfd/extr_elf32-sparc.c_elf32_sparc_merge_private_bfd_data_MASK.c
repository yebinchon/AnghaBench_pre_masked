
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_1__ bfd ;
struct TYPE_13__ {unsigned long e_flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 unsigned long FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned long) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_6 ;
 TYPE_4__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (bfd *VAR_7, bfd *VAR_8)
{
  bfd_boolean VAR_9;
  unsigned long VAR_10;

  static unsigned long VAR_11 = (unsigned long) -1;

  if (FUNC_2 (VAR_7) != VAR_6
      || FUNC_2 (VAR_8) != VAR_6)
    return VAR_3;

  VAR_9 = VAR_2;

  VAR_10 = FUNC_3 (VAR_7);
  if (FUNC_4 (VAR_10))
    {
      VAR_9 = VAR_3;
      FUNC_1)
 (FUNC_0("%B: compiled for a 64 bit system and target is 32 bit"), VAR_7);
    }
  else if ((VAR_7->flags & VAR_0) == 0)
    {
      if (FUNC_3 (VAR_8) < VAR_10)
 FUNC_5 (VAR_8, VAR_4, VAR_10);
    }

  if (((FUNC_7 (VAR_7)->e_flags & VAR_1)
       != VAR_11)
      && VAR_11 != (unsigned long) -1)
    {
      FUNC_1)
 (FUNC_0("%B: linking little endian files with big endian files"), VAR_7);
      VAR_9 = VAR_3;
    }
  VAR_11 = FUNC_7 (VAR_7)->e_flags & VAR_1;

  if (VAR_9)
    {
      FUNC_6 (VAR_5);
      return VAR_2;
    }

  return VAR_3;
}
