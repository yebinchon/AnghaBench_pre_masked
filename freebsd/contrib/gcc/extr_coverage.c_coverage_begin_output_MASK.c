
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ line; int file; } ;
typedef TYPE_1__ expanded_location ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,int ) ;
 TYPE_1__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ) ;
 unsigned long FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

int
FUNC_12 (void)
{
  if (VAR_9)
    return 0;

  if (!VAR_5)
    {
      expanded_location VAR_10
 = FUNC_5 (FUNC_1 (VAR_6));
      unsigned long VAR_11;

      if (!VAR_4)
 {
   if (!FUNC_7 (VAR_3, -1))
     FUNC_4 ("cannot open %s", VAR_3);
   else
     {
       FUNC_11 (VAR_0);
       FUNC_11 (VAR_2);
       FUNC_11 (VAR_8);
     }
   VAR_4 = 1;
 }


      VAR_11 = FUNC_10 (VAR_1);
      FUNC_11 (VAR_7 + 1);
      FUNC_11 (FUNC_3 ());
      FUNC_9 (FUNC_2
    (FUNC_0 (VAR_6)));
      FUNC_9 (VAR_10.file);
      FUNC_11 (VAR_10.line);
      FUNC_8 (VAR_11);

      VAR_5 = 1;
    }
  return !FUNC_6 ();
}
