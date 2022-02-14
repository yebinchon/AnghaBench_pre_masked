
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd ;


 size_t VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 size_t FUNC_1 (char*,int ,int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,struct stat*) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int,size_t,int ) ;
 int FUNC_9 (char*,char*) ;
 int VAR_3 ;
 char* FUNC_10 (int ) ;
 scalar_t__ VAR_4 ;
 char* FUNC_11 (size_t) ;

__attribute__((used)) static void
FUNC_12 (bfd *VAR_5)
{
  size_t VAR_6 = 0;
  char *VAR_7 = FUNC_11 (VAR_0);
  struct stat VAR_8;
  size_t VAR_9;
  if (FUNC_5 (VAR_5, &VAR_8) != 0)

    FUNC_6 (FUNC_0("internal stat error on %s"), FUNC_2 (VAR_5));

  if (VAR_4)

    FUNC_9 (FUNC_0("\n<%s>\n\n"), FUNC_2 (VAR_5));

  FUNC_4 (VAR_5, (file_ptr) 0, VAR_1);

  VAR_9 = VAR_8.st_size;
  while (VAR_6 < VAR_9)
    {

      size_t VAR_10;
      size_t VAR_11 = VAR_9 - VAR_6;
      if (VAR_11 > VAR_0)
 VAR_11 = VAR_0;

      VAR_10 = FUNC_1 (VAR_7, (bfd_size_type) VAR_11, VAR_5);
      if (VAR_10 != VAR_11)

 FUNC_6 (FUNC_0("%s is not a valid archive"),
        FUNC_2 (FUNC_3 (VAR_5)));




      if ((size_t) FUNC_8 (VAR_7, 1, VAR_10, VAR_3) != VAR_10)
 FUNC_6 ("stdout: %s", FUNC_10 (VAR_2));
      VAR_6 += VAR_11;
    }
  FUNC_7 (VAR_7);
}
