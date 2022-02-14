
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct vmap {struct objfile* objfile; int bfd; } ;
struct objfile {int dummy; } ;
struct TYPE_11__ {int filename; } ;
typedef TYPE_1__ bfd ;
typedef int LdInfo ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ) ;
 struct objfile* FUNC_4 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (char*,int ,int) ;
 int FUNC_9 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_10 (char*,int ) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int VAR_4 ;
 struct vmap* FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_13 (char*,int) ;
 int FUNC_14 (char*) ;
 struct vmap* VAR_5 ;
 int FUNC_15 (struct vmap*) ;
 int FUNC_16 (char*,char*,char*,...) ;

__attribute__((used)) static struct vmap *
FUNC_17 (LdInfo *VAR_6)
{
  bfd *VAR_7, *VAR_8;
  char *VAR_9, *VAR_10, *VAR_11;
  struct objfile *VAR_12;
  struct vmap *VAR_13;
  int VAR_14;
  FUNC_0 (VAR_0);





  VAR_11 = FUNC_3 (VAR_6, VAR_0);
  VAR_9 = VAR_11 + FUNC_14 (VAR_11) + 1;
  VAR_9 = FUNC_13 (VAR_9, FUNC_14 (VAR_9));
  VAR_10 = FUNC_13 (VAR_11, FUNC_14 (VAR_11));

  VAR_14 = FUNC_2 (VAR_6, VAR_0);
  if (VAR_14 < 0)


    VAR_7 = FUNC_10 (VAR_10, VAR_4);
  else
    VAR_7 = FUNC_8 (VAR_10, VAR_4, VAR_14);
  if (!VAR_7)
    {
      FUNC_16 ("Could not open `%s' as an executable file: %s",
        VAR_10, FUNC_7 (FUNC_9 ()));
      return ((void*)0);
    }



  if (FUNC_5 (VAR_7, VAR_3))
    VAR_13 = FUNC_12 (VAR_7, 0);

  else if (FUNC_5 (VAR_7, VAR_2))
    {
      VAR_8 = 0;

      while ((VAR_8 = FUNC_11 (VAR_7, VAR_8)))
 if (FUNC_1 (VAR_9, VAR_8->filename))
   break;

      if (!VAR_8)
 {
   FUNC_16 ("\"%s\": member \"%s\" missing.", VAR_10, VAR_9);
   FUNC_6 (VAR_7);
   return ((void*)0);
 }

      if (!FUNC_5 (VAR_8, VAR_3))
 {
   FUNC_16 ("\"%s\": member \"%s\" not in executable format: %s.",
     VAR_10, VAR_9, FUNC_7 (FUNC_9 ()));
   FUNC_6 (VAR_8);
   FUNC_6 (VAR_7);
   return ((void*)0);
 }

      VAR_13 = FUNC_12 (VAR_8, VAR_7);
    }
  else
    {
      FUNC_16 ("\"%s\": not in executable format: %s.",
        VAR_10, FUNC_7 (FUNC_9 ()));
      FUNC_6 (VAR_7);
      return ((void*)0);
    }
  VAR_12 = FUNC_4 (VAR_13->bfd, 0);
  VAR_13->objfile = VAR_12;


  if (VAR_13 == VAR_5 || VAR_1)
    FUNC_15 (VAR_13);
  return VAR_13;
}
