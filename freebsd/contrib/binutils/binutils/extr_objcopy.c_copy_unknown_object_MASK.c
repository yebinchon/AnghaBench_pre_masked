
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {long st_size; int st_mode; } ;
typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,struct stat*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,char*) ;
 scalar_t__ VAR_4 ;
 char* FUNC_12 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (bfd *VAR_5, bfd *VAR_6)
{
  char *VAR_7;
  int VAR_8;
  long VAR_9;
  long VAR_10;
  struct stat VAR_11;

  if (FUNC_7 (VAR_5, &VAR_11) != 0)
    {
      FUNC_5 (FUNC_3 (VAR_5));
      return VAR_1;
    }

  VAR_10 = VAR_11.st_size;
  if (VAR_10 < 0)
    {
      FUNC_10 (FUNC_0("stat returns negative size for `%s'"),
   FUNC_3 (VAR_5));
      return VAR_1;
    }

  if (FUNC_6 (VAR_5, (file_ptr) 0, VAR_2) != 0)
    {
      FUNC_5 (FUNC_3 (VAR_5));
      return VAR_1;
    }

  if (VAR_4)
    FUNC_11 (FUNC_0("copy from `%s' [unknown] to `%s' [unknown]\n"),
     FUNC_3 (VAR_5), FUNC_4 (VAR_6));

  VAR_7 = FUNC_12 (VAR_0);
  VAR_9 = 0;
  while (VAR_9 < VAR_10)
    {
      VAR_8 = VAR_10 - VAR_9;
      if (VAR_8 > VAR_0)
 VAR_8 = VAR_0;

      if (FUNC_1 (VAR_7, (bfd_size_type) VAR_8, VAR_5)
   != (bfd_size_type) VAR_8)
 {
   FUNC_5 (FUNC_3 (VAR_5));
   FUNC_9 (VAR_7);
   return VAR_1;
 }

      if (FUNC_2 (VAR_7, (bfd_size_type) VAR_8, VAR_6)
   != (bfd_size_type) VAR_8)
 {
   FUNC_5 (FUNC_4 (VAR_6));
   FUNC_9 (VAR_7);
   return VAR_1;
 }

      VAR_9 += VAR_8;
    }

  FUNC_8 (FUNC_4 (VAR_6), VAR_11.st_mode);
  FUNC_9 (VAR_7);
  return VAR_3;
}
