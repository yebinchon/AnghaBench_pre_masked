
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 () ;
 int FUNC_3 (long) ;
 scalar_t__ FUNC_4 (char) ;
 long FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_1, int VAR_2)
{
  long VAR_3 = -1, VAR_4;

  if (VAR_1 && *VAR_1)
    {
      while (*VAR_1 && FUNC_4(*VAR_1))
 VAR_1++;

      if (*VAR_1)
 {
   VAR_3 = FUNC_5 (VAR_1);
   if (VAR_3 < 0 || VAR_3 >= 1024)
     FUNC_1 ("Entry %ld is outside valid limits [0..1023].", VAR_3);
 }
    }

  VAR_0 = FUNC_2 ();
  if (!VAR_0)
    FUNC_6 ("Access to Page Directories is not supported on this system.\n");
  else if (VAR_3 >= 0)
    FUNC_0 (FUNC_3 (VAR_3), 1, 1, 0);
  else
    for (VAR_4 = 0; VAR_4 < 1024; VAR_4++)
      FUNC_0 (FUNC_3 (VAR_4), 1, 0, 0);
}
