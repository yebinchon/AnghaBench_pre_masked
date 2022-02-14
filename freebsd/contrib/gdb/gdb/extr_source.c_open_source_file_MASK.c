
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {char* fullname; char const* dirname; char const* filename; TYPE_1__* objfile; } ;
struct TYPE_2__ {int md; } ;


 char const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_2 ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,char const*,int ,int ,char**) ;
 char const* VAR_3 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;

int
FUNC_12 (struct symtab *VAR_4)
{
  char *VAR_5 = VAR_3;
  const char *VAR_6;
  int VAR_7;
  char *VAR_8;


  if (VAR_4->fullname)
    {
      VAR_7 = FUNC_3 (VAR_4->fullname, VAR_1);
      if (VAR_7 >= 0)
 return VAR_7;

      FUNC_11 (VAR_4->objfile->md, VAR_4->fullname);
      VAR_4->fullname = ((void*)0);
    }

  if (VAR_4->dirname != ((void*)0))
    {




      VAR_6 = (char *) FUNC_9 (VAR_3, "$cdir");
      if (VAR_6 && (VAR_6 == VAR_5 || VAR_6[-1] == VAR_0)
   && (VAR_6[5] == VAR_0 || VAR_6[5] == '\0'))
 {
   int VAR_9;

   VAR_5 = (char *)
     FUNC_0 (FUNC_7 (VAR_3) + 1 + FUNC_7 (VAR_4->dirname) + 1);
   VAR_9 = VAR_6 - VAR_3;
   FUNC_8 (VAR_5, VAR_3, VAR_9);
   FUNC_6 (VAR_5 + VAR_9, VAR_4->dirname);
   FUNC_5 (VAR_5 + VAR_9, VAR_3 + VAR_9 + 5);
 }
    }

  VAR_7 = FUNC_4 (VAR_5, 0, VAR_4->filename, VAR_1, 0, &VAR_4->fullname);
  if (VAR_7 < 0)
    {

      VAR_6 = FUNC_1 (VAR_4->filename);
      if (VAR_6 != VAR_4->filename)
 VAR_7 = FUNC_4 (VAR_5, 0, VAR_6, VAR_1, 0, &VAR_4->fullname);
    }

  if (VAR_7 >= 0)
    {
      VAR_8 = VAR_4->fullname;
      VAR_4->fullname = FUNC_2 (VAR_4->objfile->md, VAR_4->fullname);
      FUNC_10 (VAR_8);
    }
  return VAR_7;
}
