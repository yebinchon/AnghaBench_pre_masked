
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_5->flags & VAR_0)
    {
      int VAR_10 = FUNC_0 () + 1;

      VAR_8 = FUNC_1 (VAR_8, VAR_10,
     VAR_7, sizeof (*VAR_8));
      VAR_7 = VAR_10;
    }

  if (VAR_9 != ((void*)0))
    {
      int VAR_11 = FUNC_0 () + 1;

      VAR_9 = FUNC_1 (VAR_9, VAR_11, VAR_4, 1);

      if (VAR_6 == VAR_1)
 {
   VAR_3 = FUNC_1 (VAR_3, VAR_11, VAR_4,
         sizeof (int));
   VAR_2 = FUNC_1 (VAR_2, VAR_11, VAR_4,
      sizeof (int));
 }

      VAR_4 = VAR_11;
    }
}
