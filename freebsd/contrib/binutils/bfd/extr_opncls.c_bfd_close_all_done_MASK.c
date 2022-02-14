
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {unsigned int st_mode; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_5__ {scalar_t__ direction; int flags; int filename; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;
 unsigned int FUNC_4 (unsigned int) ;
 scalar_t__ VAR_4 ;

bfd_boolean
FUNC_5 (bfd *VAR_5)
{
  bfd_boolean VAR_6;

  VAR_6 = FUNC_1 (VAR_5);



  if (VAR_6
      && VAR_5->direction == VAR_4
      && VAR_5->flags & VAR_0)
    {
      struct stat VAR_7;

      if (FUNC_3 (VAR_5->filename, &VAR_7) == 0)
 {
   unsigned int VAR_8 = FUNC_4 (0);

   FUNC_4 (VAR_8);
   FUNC_2 (VAR_5->filename,
   (0777
    & (VAR_7.st_mode | ((VAR_3 | VAR_1 | VAR_2) &~ VAR_8))));
 }
    }

  FUNC_0 (VAR_5);

  return VAR_6;
}
