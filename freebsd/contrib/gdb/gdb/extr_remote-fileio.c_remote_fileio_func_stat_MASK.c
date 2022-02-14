
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct fio_stat {int fst_dev; } ;
typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char**,scalar_t__*) ;
 scalar_t__ FUNC_4 (char**,scalar_t__*,int*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct stat*,struct fio_stat*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__,char*,int) ;
 int VAR_1 ;
 int FUNC_12 (scalar_t__,char*,int) ;
 int FUNC_13 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_14 (char *VAR_2)
{
  CORE_ADDR VAR_3;
  int VAR_4, VAR_5, VAR_6;
  char *VAR_7;
  LONGEST VAR_8;
  struct stat VAR_9;
  struct fio_stat VAR_10;


  if (FUNC_4 (&VAR_2, &VAR_3, &VAR_5))
    {
      FUNC_5 ();
      return;
    }

  VAR_7 = FUNC_2 (VAR_5);
  VAR_6 = FUNC_12 (VAR_3, VAR_7, VAR_5);
  if (VAR_6 != VAR_5)
    {
      FUNC_5 ();
      return;
    }


  if (FUNC_3 (&VAR_2, &VAR_8))
    {
      FUNC_5 ();
      return;
    }
  VAR_3 = (CORE_ADDR) VAR_8;

  VAR_1 = 1;
  VAR_4 = FUNC_13 (VAR_7, &VAR_9);

  if (VAR_4 == -1)
    {
      FUNC_7 (-1);
      return;
    }

  if (!VAR_4 && !FUNC_1 (VAR_9.st_mode) && !FUNC_0 (VAR_9.st_mode))
    {
      FUNC_6 (-1, VAR_0);
      return;
    }
  if (VAR_3)
    {
      FUNC_9 (&VAR_9, &VAR_10);
      FUNC_10 (0, VAR_10.fst_dev);

      VAR_6 = FUNC_11 (VAR_3, (char *) &VAR_10, sizeof VAR_10);
      if (VAR_6 != sizeof VAR_10)
 {
   FUNC_7 (-1);
   return;
 }
    }
  FUNC_8 (VAR_4);
}
