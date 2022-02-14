
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
struct TYPE_10__ {scalar_t__ symcount; int const* xvec; int flags; TYPE_1__ tdata; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static const bfd_target *
FUNC_8 (bfd *VAR_3)
{
  void * VAR_4;
  bfd_byte VAR_5[4];

  FUNC_5 ();

  if (FUNC_3 (VAR_3, (file_ptr) 0, VAR_1) != 0
      || FUNC_1 (VAR_5, (bfd_size_type) 4, VAR_3) != 4)
    return ((void*)0);

  if (VAR_5[0] != 'S' || !FUNC_0 (VAR_5[1]) || !FUNC_0 (VAR_5[2]) || !FUNC_0 (VAR_5[3]))
    {
      FUNC_4 (VAR_2);
      return ((void*)0);
    }

  VAR_4 = VAR_3->tdata.any;
  if (! FUNC_6 (VAR_3) || ! FUNC_7 (VAR_3))
    {
      if (VAR_3->tdata.any != VAR_4 && VAR_3->tdata.any != ((void*)0))
 FUNC_2 (VAR_3, VAR_3->tdata.any);
      VAR_3->tdata.any = VAR_4;
      return ((void*)0);
    }

  if (VAR_3->symcount > 0)
    VAR_3->flags |= VAR_0;

  return VAR_3->xvec;
}
