
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_2__ {int (* print_archive_member ) (int ,int ) ;int (* print_archive_filename ) (int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,char***) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_9 (char**) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_10 (char**) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void
FUNC_15 (bfd *VAR_7)
{
  bfd *VAR_8 = ((void*)0);
  bfd *VAR_9 = ((void*)0);
  char **VAR_10;

  VAR_3->print_archive_filename (FUNC_5 (VAR_7));

  if (VAR_6)
    FUNC_11 (VAR_7);

  for (;;)
    {
      FUNC_0 (1);

      VAR_8 = FUNC_7 (VAR_7, VAR_8);

      if (VAR_8 == ((void*)0))
 {
   if (FUNC_4 () != VAR_1)
     FUNC_3 (FUNC_5 (VAR_7));
   break;
 }

      if (FUNC_1 (VAR_8, VAR_2, &VAR_10))
 {
   FUNC_12 (VAR_8);
   VAR_3->print_archive_member (FUNC_5 (VAR_7),
     FUNC_5 (VAR_8));
   FUNC_8 (VAR_8, VAR_7);
 }
      else
 {
   FUNC_6 (FUNC_5 (VAR_8));
   if (FUNC_4 () == VAR_0)
     {
       FUNC_10 (VAR_10);
       FUNC_9 (VAR_10);
     }
 }

      if (VAR_9 != ((void*)0))
 {
   FUNC_2 (VAR_9);
   VAR_4 = ((void*)0);
   VAR_5 = ((void*)0);
 }
      VAR_9 = VAR_8;
    }

  if (VAR_9 != ((void*)0))
    {
      FUNC_2 (VAR_9);
      VAR_4 = ((void*)0);
      VAR_5 = ((void*)0);
    }
}
