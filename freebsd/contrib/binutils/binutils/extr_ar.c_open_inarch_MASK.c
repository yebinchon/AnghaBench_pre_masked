
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_13__ {struct TYPE_13__* archive_next; } ;
typedef TYPE_1__ bfd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char***) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 () ;
 char* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char const*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_9 (char const*,char const*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (char const*,char const*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (char**) ;
 int FUNC_16 (char**) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,char const*) ;
 int VAR_7 ;
 char const* VAR_8 ;
 int FUNC_19 (char const*) ;
 char* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_20 (char const*,struct stat*) ;
 int VAR_11 ;
 int FUNC_21 (int) ;

bfd *
FUNC_22 (const char *VAR_12, const char *VAR_13)
{
  const char *VAR_14;
  bfd **VAR_15;
  bfd *VAR_16;
  struct stat VAR_17;
  bfd *VAR_18;
  char **VAR_19;

  FUNC_12 (VAR_3);

  VAR_14 = ((void*)0);

  if (FUNC_20 (VAR_12, &VAR_17) != 0)
    {
      if (VAR_6 != VAR_0)
 FUNC_5 (VAR_12);


      if (!VAR_7)
 {
   FUNC_14 (VAR_11, "%s: ", VAR_9);
   FUNC_19 (VAR_12);
   FUNC_17 ();
   return ((void*)0);
 }



      if (VAR_13 != ((void*)0))
 {
   bfd *VAR_20;

   VAR_20 = FUNC_9 (VAR_13, ((void*)0));
   if (VAR_20 != ((void*)0))
     {
       if (FUNC_2 (VAR_20, VAR_5))
  VAR_14 = FUNC_7 (VAR_20);
       (void) FUNC_4 (VAR_20);
     }
 }


      VAR_18 = FUNC_11 (VAR_12, VAR_14);
      if (VAR_18 == ((void*)0)
   || ! FUNC_13 (VAR_18, VAR_1)
   || ! FUNC_4 (VAR_18))
 FUNC_5 (VAR_12);
      else if (!VAR_10)
        FUNC_18 (FUNC_1("creating %s"), VAR_12);


      VAR_8 = VAR_12;
    }

  VAR_18 = FUNC_9 (VAR_12, VAR_14);
  if (VAR_18 == ((void*)0))
    {
    bloser:
      FUNC_5 (VAR_12);
    }

  if (! FUNC_3 (VAR_18, VAR_1, &VAR_19))
    {
      FUNC_8 (VAR_12);
      if (FUNC_6 () == VAR_2)
 {
   FUNC_16 (VAR_19);
   FUNC_15 (VAR_19);
 }
      FUNC_21 (1);
    }

  VAR_15 = &(VAR_18->archive_next);

  for (VAR_16 = FUNC_10 (VAR_18, ((void*)0));
       VAR_16;
       VAR_16 = FUNC_10 (VAR_18, VAR_16))
    {
      FUNC_0 (1);
      *VAR_15 = VAR_16;
      VAR_15 = &VAR_16->archive_next;
    }
  *VAR_15 = (bfd *) ((void*)0);
  if (FUNC_6 () != VAR_4)
    goto bloser;
  return VAR_18;
}
