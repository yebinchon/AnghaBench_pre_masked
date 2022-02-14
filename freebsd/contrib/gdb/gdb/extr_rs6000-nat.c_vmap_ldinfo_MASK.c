
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct vmap {struct objfile* objfile; int member; int name; struct vmap* nxt; } ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct objfile {char* name; int * obfd; } ;
typedef int LdInfo ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct stat*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct objfile*) ;
 scalar_t__ FUNC_10 (int,struct stat*) ;
 int FUNC_11 (char*) ;
 struct objfile* VAR_0 ;
 int FUNC_12 (struct objfile*) ;
 struct vmap* VAR_1 ;
 int FUNC_13 (struct vmap*,int *,int) ;
 int FUNC_14 (struct vmap*) ;
 int FUNC_15 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_16 (LdInfo *VAR_2)
{
  struct stat VAR_3, VAR_4;
  struct vmap *VAR_5;
  int VAR_6, VAR_7;
  int VAR_8 = 0;
  uint VAR_9;
  int VAR_10 = FUNC_0 ();





  do
    {
      char *VAR_11 = FUNC_3 (VAR_2, VAR_10);
      char *VAR_12 = VAR_11 + FUNC_11 (VAR_11) + 1;
      int VAR_13 = FUNC_2 (VAR_2, VAR_10);

      VAR_7 = 0;

      if (FUNC_10 (VAR_13, &VAR_3) < 0)
 {



   FUNC_15 ("%s (fd=%d) has disappeared, keeping its symbols",
     VAR_11, VAR_13);
   continue;
 }
    retry:
      for (VAR_6 = 0, VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->nxt)
 {
   struct objfile *VAR_14;
   if ((VAR_11[0] == '/' && !FUNC_1 (VAR_11, VAR_5->name))
       || (VAR_12[0] && !FUNC_1 (VAR_12, VAR_5->member)))
     continue;




   VAR_14 = VAR_5->objfile == ((void*)0) ? VAR_0 : VAR_5->objfile;
   if (VAR_14 == ((void*)0)
       || VAR_14->obfd == ((void*)0)
       || FUNC_6 (VAR_14->obfd, &VAR_4) < 0)
     {
       FUNC_15 ("Unable to stat %s, keeping its symbols", VAR_11);
       continue;
     }

   if (VAR_3.st_dev != VAR_4.st_dev || VAR_3.st_ino != VAR_4.st_ino)
     continue;

   if (!VAR_7)
     FUNC_8 (VAR_13);

   ++VAR_6;



   FUNC_13 (VAR_5, VAR_2, VAR_10);


   if (VAR_5->objfile == ((void*)0))
     VAR_8 = 1;


   FUNC_14 (VAR_5);



   if (&FUNC_12 && VAR_5->objfile)
     FUNC_12 (VAR_5->objfile);


 }


      if (!VAR_6 && !VAR_7)
 {
   FUNC_5 (VAR_2);
   ++VAR_7;
   goto retry;
 }
    }
  while ((VAR_9 = FUNC_4 (VAR_2, VAR_10))
  && (VAR_2 = (void *) (VAR_9 + (char *) VAR_2)));





  if (VAR_0 != ((void*)0) && !VAR_8)
    {
      FUNC_15 ("Symbol file %s\nis not mapped; discarding it.\nIf in fact that file has symbols which the mapped files listed by\n\"info files\" lack, you can load symbols with the \"symbol-file\" or\n\"add-symbol-file\" commands (note that you must take care of relocating\nsymbols to the proper address).",




        VAR_0->name);
      FUNC_9 (VAR_0);
      VAR_0 = ((void*)0);
    }
  FUNC_7 ();
}
