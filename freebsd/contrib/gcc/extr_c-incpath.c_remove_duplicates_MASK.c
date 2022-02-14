
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_dev; int st_ino; int st_mode; } ;
struct cpp_dir {scalar_t__ dev; scalar_t__ construct; struct cpp_dir* next; int ino; int name; scalar_t__ user_supplied_p; } ;
typedef int cpp_reader ;
struct TYPE_3__ {scalar_t__ warn_missing_include_dirs; } ;
typedef TYPE_1__ cpp_options ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,char*,int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct cpp_dir*,int) ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;

__attribute__((used)) static struct cpp_dir *
FUNC_8 (cpp_reader *VAR_8, struct cpp_dir *VAR_9,
     struct cpp_dir *VAR_10, struct cpp_dir *VAR_11,
     int VAR_12)
{
  struct cpp_dir **VAR_13, *VAR_14, *VAR_15;
  struct stat VAR_16;

  for (VAR_13 = &VAR_9; *VAR_13; )
    {
      int VAR_17 = VAR_6;

      VAR_15 = *VAR_13;

      if (FUNC_7 (VAR_15->name, &VAR_16))
 {

   if (VAR_7 != VAR_2)
     FUNC_3 (VAR_8, VAR_0, VAR_15->name);
   else
     {

       cpp_options *VAR_18 = FUNC_5 (VAR_8);
       if (VAR_18->warn_missing_include_dirs && VAR_15->user_supplied_p)
  FUNC_3 (VAR_8, VAR_1, VAR_15->name);
       VAR_17 = VAR_5;
     }
 }
      else if (!FUNC_2 (VAR_16.st_mode))
 FUNC_4 (VAR_8, VAR_0, 0, 0,
        "%s: not a directory", VAR_15->name);
      else
 {
   FUNC_0 (VAR_15->ino, VAR_16.st_ino);
   VAR_15->dev = VAR_16.st_dev;


   VAR_17 = VAR_4;
   for (VAR_14 = VAR_10; VAR_14; VAR_14 = VAR_14->next)
    if (FUNC_1 (VAR_14->ino, VAR_15->ino) && VAR_14->dev == VAR_15->dev
        && VAR_15->construct == VAR_14->construct)
       break;

   if (!VAR_14)
     {

       VAR_17 = VAR_3;
       for (VAR_14 = VAR_9; VAR_14 != VAR_15; VAR_14 = VAR_14->next)
        if (FUNC_1 (VAR_15->ino, VAR_14->ino) && VAR_15->dev == VAR_14->dev
     && VAR_15->construct == VAR_14->construct)
    break;

       if (VAR_14 == VAR_15

    && !(VAR_15->next == ((void*)0) && VAR_11
         && FUNC_1 (VAR_15->ino, VAR_11->ino)
        && VAR_15->dev == VAR_11->dev
        && VAR_15->construct == VAR_11->construct))
  {

    VAR_13 = &VAR_15->next;
    continue;
  }
     }
 }


      *VAR_13 = VAR_15->next;
      FUNC_6 (VAR_15, VAR_12 ? VAR_17: VAR_6);
    }

  *VAR_13 = VAR_11;
  return VAR_9;
}
