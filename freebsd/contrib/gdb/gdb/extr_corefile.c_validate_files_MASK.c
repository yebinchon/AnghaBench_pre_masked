
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;

void
FUNC_3 (void)
{
  if (VAR_1 && VAR_0)
    {
      if (!FUNC_1 (VAR_0, VAR_1))
 FUNC_2 ("core file may not match specified executable file.");
      else if (FUNC_0 (VAR_1) > FUNC_0 (VAR_0))
 FUNC_2 ("exec file is newer than core file.");
    }
}
