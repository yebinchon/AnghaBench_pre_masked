
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int file_ptr ;
typedef int bfd_target ;
typedef int bfd_size_type ;
typedef char bfd_byte ;
struct TYPE_9__ {void* any; } ;
struct TYPE_10__ {int const* xvec; TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 unsigned int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static const bfd_target *
FUNC_10 (bfd *VAR_3)
{
  void * VAR_4;
  bfd_byte VAR_5[9];
  unsigned int VAR_6;
  unsigned int VAR_7;

  FUNC_7 ();

  if (FUNC_5 (VAR_3, (file_ptr) 0, VAR_0) != 0)
    return ((void*)0);
  if (FUNC_2 (VAR_5, (bfd_size_type) 9, VAR_3) != 9)
    {
      if (FUNC_3 () == VAR_1)
 FUNC_6 (VAR_2);
      return ((void*)0);
    }

  if (VAR_5[0] != ':')
    {
      FUNC_6 (VAR_2);
      return ((void*)0);
    }

  for (VAR_6 = 1; VAR_6 < 9; VAR_6++)
    {
      if (! FUNC_1 (VAR_5[VAR_6]))
 {
   FUNC_6 (VAR_2);
   return ((void*)0);
 }
    }

  VAR_7 = FUNC_0 (VAR_5 + 7);
  if (VAR_7 > 5)
    {
      FUNC_6 (VAR_2);
      return ((void*)0);
    }


  VAR_4 = VAR_3->tdata.any;
  if (! FUNC_8 (VAR_3) || ! FUNC_9 (VAR_3))
    {
      if (VAR_3->tdata.any != VAR_4 && VAR_3->tdata.any != ((void*)0))
 FUNC_4 (VAR_3, VAR_3->tdata.any);
      VAR_3->tdata.any = VAR_4;
      return ((void*)0);
    }

  return VAR_3->xvec;
}
