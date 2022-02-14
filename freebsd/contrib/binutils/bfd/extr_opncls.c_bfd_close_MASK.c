
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stat {unsigned int st_mode; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_12__ {int flags; scalar_t__ direction; int filename; TYPE_1__* iovec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_11__ {scalar_t__ (* bclose ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 unsigned int FUNC_7 (unsigned int) ;
 scalar_t__ VAR_9 ;

bfd_boolean
FUNC_8 (bfd *VAR_10)
{
  bfd_boolean VAR_11;

  if (FUNC_3 (VAR_10))
    {
      if (! FUNC_1 (VAR_10, VAR_7, (VAR_10)))
 return VAR_2;
    }

  if (! FUNC_0 (VAR_10, VAR_8, (VAR_10)))
    return VAR_2;



  if (!(VAR_10->flags & VAR_0))
    VAR_11 = VAR_10->iovec->bclose (VAR_10);
  else
    VAR_11 = VAR_6;



  if (VAR_11
      && VAR_10->direction == VAR_9
      && VAR_10->flags & VAR_1)
    {
      struct stat VAR_12;

      if (FUNC_5 (VAR_10->filename, &VAR_12) == 0)
 {
   unsigned int VAR_13 = FUNC_7 (0);

   FUNC_7 (VAR_13);
   FUNC_4 (VAR_10->filename,
   (0777
    & (VAR_12.st_mode | ((VAR_5 | VAR_3 | VAR_4) &~ VAR_13))));
 }
    }

  FUNC_2 (VAR_10);

  return VAR_11;
}
