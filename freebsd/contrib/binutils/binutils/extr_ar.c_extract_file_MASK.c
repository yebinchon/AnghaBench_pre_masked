
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; int st_mtime; int st_atime; int st_mode; } ;
typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*,int ,int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,struct stat*) ;
 int FUNC_6 (char*,int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,int,size_t,int *) ;
 int * VAR_4 ;
 char* VAR_5 ;
 int FUNC_12 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (int) ;
 char* FUNC_17 (size_t) ;

void
FUNC_18 (bfd *VAR_8)
{
  FILE *VAR_9;
  char *VAR_10 = FUNC_17 (VAR_0);
  size_t VAR_11, VAR_12;
  size_t VAR_13 = 0;
  size_t VAR_14;
  struct stat VAR_15;

  if (FUNC_5 (VAR_8, &VAR_15) != 0)

    FUNC_7 (FUNC_0("internal stat error on %s"), FUNC_2 (VAR_8));
  VAR_14 = VAR_15.st_size;

  if (VAR_7)
    FUNC_13 ("x - %s\n", FUNC_2 (VAR_8));

  FUNC_4 (VAR_8, (file_ptr) 0, VAR_2);

  VAR_9 = ((void*)0);
  if (VAR_14 == 0)
    {

      VAR_5 = FUNC_2 (VAR_8);

      VAR_9 = FUNC_9 (FUNC_2 (VAR_8), VAR_1);
      if (VAR_9 == ((void*)0))
 {
   FUNC_12 (FUNC_2 (VAR_8));
   FUNC_16 (1);
 }

      VAR_4 = VAR_9;
    }
  else
    while (VAR_13 < VAR_14)
      {
 VAR_12 = VAR_14 - VAR_13;
 if (VAR_12 > VAR_0)
   VAR_12 = VAR_0;

 VAR_11 = FUNC_1 (VAR_10, (bfd_size_type) VAR_12, VAR_8);
 if (VAR_11 != VAR_12)

   FUNC_7 (FUNC_0("%s is not a valid archive"),
   FUNC_2 (FUNC_3 (VAR_8)));


 if (VAR_9 == ((void*)0))
   {

     VAR_5 = FUNC_2 (VAR_8);

     VAR_9 = FUNC_9 (FUNC_2 (VAR_8), VAR_1);
     if (VAR_9 == ((void*)0))
       {
  FUNC_12 (FUNC_2 (VAR_8));
  FUNC_16 (1);
       }

     VAR_4 = VAR_9;
   }




 if ((size_t) FUNC_11 (VAR_10, 1, VAR_11, VAR_9) != VAR_11)
   FUNC_7 ("%s: %s", VAR_5, FUNC_15 (VAR_3));
 VAR_13 += VAR_12;
      }

  if (VAR_9 != ((void*)0))
    FUNC_8 (VAR_9);

  VAR_4 = ((void*)0);
  VAR_5 = ((void*)0);

  FUNC_6 (FUNC_2 (VAR_8), VAR_15.st_mode);

  if (VAR_6)
    {


      VAR_15.st_atime = VAR_15.st_mtime;
      FUNC_14 (FUNC_2 (VAR_8), &VAR_15);
    }

  FUNC_10 (VAR_10);
}
