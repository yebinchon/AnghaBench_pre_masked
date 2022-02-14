
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int flagword ;
typedef int bfd_target ;
struct TYPE_11__ {void* any; } ;
struct TYPE_12__ {int const* xvec; TYPE_1__ tdata; int symcount; scalar_t__ target_defaulted; } ;
typedef TYPE_2__ bfd ;
struct TYPE_13__ {scalar_t__ filepos; int size; scalar_t__ vma; } ;
typedef TYPE_3__ asection ;
struct TYPE_14__ {scalar_t__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_9__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct stat*) ;

__attribute__((used)) static const bfd_target *
FUNC_6 (bfd *VAR_10)
{
  struct stat VAR_11;
  asection *VAR_12;
  flagword VAR_13;

  if (VAR_10->target_defaulted)
    {
      FUNC_4 (VAR_7);
      return ((void*)0);
    }

  VAR_10->symcount = VAR_0;


  if (FUNC_5 (VAR_10, &VAR_11) < 0)
    {
      FUNC_4 (VAR_6);
      return ((void*)0);
    }


  VAR_13 = VAR_1 | VAR_4 | VAR_2 | VAR_3;
  VAR_12 = FUNC_2 (VAR_10, ".data", VAR_13);
  if (VAR_12 == ((void*)0))
    return ((void*)0);
  VAR_12->vma = 0;
  VAR_12->size = VAR_11.st_size;
  VAR_12->filepos = 0;

  VAR_10->tdata.any = (void *) VAR_12;

  if (FUNC_0 (VAR_10) != ((void*)0))
    {
      if ((FUNC_0 (VAR_10)->arch == VAR_5)
          && (VAR_8 != VAR_5))
        FUNC_3 (VAR_10, FUNC_1
      (VAR_8, VAR_9));
    }

  return VAR_10->xvec;
}
