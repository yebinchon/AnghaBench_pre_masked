
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int file_ptr ;
typedef int bfd_target ;
typedef int bfd_size_type ;
struct TYPE_7__ {int const* xvec; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static const bfd_target *
FUNC_6 (bfd *VAR_2)
{
  char VAR_3[4];

  FUNC_4 ();

  if (FUNC_2 (VAR_2, (file_ptr) 0, VAR_0) != 0
      || FUNC_1 (VAR_3, (bfd_size_type) 4, VAR_2) != 4)
    return ((void*)0);

  if (VAR_3[0] != '%' || !FUNC_0 (VAR_3[1]) || !FUNC_0 (VAR_3[2]) || !FUNC_0 (VAR_3[3]))
    return ((void*)0);

  FUNC_5 (VAR_2);

  if (!FUNC_3 (VAR_2, VAR_1))
    return ((void*)0);

  return VAR_2->xvec;
}
