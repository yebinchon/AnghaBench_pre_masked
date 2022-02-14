
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {int nlines; int* line_charpos; TYPE_1__* objfile; int filename; } ;
struct stat {long st_mtime; scalar_t__ st_size; } ;
struct cleanup {int dummy; } ;
struct TYPE_2__ {int md; scalar_t__ obfd; } ;


 int VAR_0 ;
 long FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cleanup*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,int ,int ) ;
 struct cleanup* FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,char*,int) ;

void
FUNC_11 (struct symtab *VAR_3, int VAR_4)
{
  struct stat VAR_5;
  char *VAR_6, *VAR_7, *VAR_8;
  int VAR_9 = 0;
  int VAR_10 = 1000;
  int *VAR_11;
  long VAR_12 = 0;
  int VAR_13;

  VAR_11 = (int *) FUNC_9 (VAR_3->objfile->md,
       VAR_10 * sizeof (int));
  if (FUNC_2 (VAR_4, &VAR_5) < 0)
    FUNC_6 (VAR_3->filename);

  if (VAR_3 && VAR_3->objfile && VAR_3->objfile->obfd)
    VAR_12 = FUNC_0 (VAR_3->objfile->obfd);
  else if (VAR_1)
    VAR_12 = FUNC_0 (VAR_1);

  if (VAR_12 && VAR_12 < VAR_5.st_mtime)
    {
      FUNC_7 ("Source file is more recent than executable.\n");
    }
  {
    struct cleanup *VAR_14;



    VAR_13 = (int) VAR_5.st_size;



    VAR_6 = (char *) FUNC_8 (VAR_13);
    VAR_14 = FUNC_4 (VAR_2, VAR_6);


    VAR_13 = FUNC_5 (VAR_4, VAR_6, VAR_13);
    if (VAR_13 < 0)
      FUNC_6 (VAR_3->filename);
    VAR_8 = VAR_6 + VAR_13;
    VAR_7 = VAR_6;
    VAR_11[0] = 0;
    VAR_9 = 1;
    while (VAR_7 != VAR_8)
      {
 if (*VAR_7++ == '\n'

     && VAR_7 != VAR_8)
   {
     if (VAR_9 == VAR_10)
       {
  VAR_10 *= 2;
  VAR_11 =
    (int *) FUNC_10 (VAR_3->objfile->md, (char *) VAR_11,
         sizeof (int) * VAR_10);
       }
     VAR_11[VAR_9++] = VAR_7 - VAR_6;
   }
      }
    FUNC_1 (VAR_14);
  }

  VAR_3->nlines = VAR_9;
  VAR_3->line_charpos =
    (int *) FUNC_10 (VAR_3->objfile->md, (char *) VAR_11,
         VAR_9 * sizeof (int));

}
