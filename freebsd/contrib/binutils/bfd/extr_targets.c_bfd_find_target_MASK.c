
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_target ;
struct TYPE_3__ {int const* xvec; int target_defaulted; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int ** VAR_3 ;
 int * FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

const bfd_target *
FUNC_3 (const char *VAR_4, bfd *VAR_5)
{
  const char *VAR_6;
  const bfd_target *VAR_7;

  if (VAR_4 != ((void*)0))
    VAR_6 = VAR_4;
  else
    VAR_6 = FUNC_1 ("GNUTARGET");


  if (VAR_6 == ((void*)0) || FUNC_2 (VAR_6, "default") == 0)
    {
      if (VAR_2[0] != ((void*)0))
 VAR_7 = VAR_2[0];
      else
 VAR_7 = VAR_3[0];
      if (VAR_5)
 {
   VAR_5->xvec = VAR_7;
   VAR_5->target_defaulted = VAR_1;
 }
      return VAR_7;
    }

  if (VAR_5)
    VAR_5->target_defaulted = VAR_0;

  VAR_7 = FUNC_0 (VAR_6);
  if (VAR_7 == ((void*)0))
    return ((void*)0);

  if (VAR_5)
    VAR_5->xvec = VAR_7;
  return VAR_7;
}
