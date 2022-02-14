
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int (* print_object_filename ) (char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,char***) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int * FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_9 (char**) ;
 int FUNC_10 (char*) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_11 (char**) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int VAR_8 ;

__attribute__((used)) static bfd_boolean
FUNC_14 (char *VAR_9)
{
  bfd_boolean VAR_10 = VAR_1;
  bfd *VAR_11;
  char **VAR_12;

  if (FUNC_10 (VAR_9) < 1)
    return VAR_0;

  VAR_11 = FUNC_6 (VAR_9, VAR_8);
  if (VAR_11 == ((void*)0))
    {
      FUNC_5 (VAR_9);
      return VAR_0;
    }

  if (FUNC_0 (VAR_11, VAR_2))
    {
      FUNC_7 (VAR_11);
    }
  else if (FUNC_1 (VAR_11, VAR_4, &VAR_12))
    {
      FUNC_12 (VAR_11);
      VAR_5->print_object_filename (VAR_9);
      FUNC_8 (VAR_11, ((void*)0));
    }
  else
    {
      FUNC_5 (VAR_9);
      if (FUNC_4 () == VAR_3)
 {
   FUNC_11 (VAR_12);
   FUNC_9 (VAR_12);
 }
      VAR_10 = VAR_0;
    }

  if (!FUNC_2 (VAR_11))
    FUNC_3 (VAR_9);

  VAR_6 = ((void*)0);
  VAR_7 = ((void*)0);

  return VAR_10;
}
