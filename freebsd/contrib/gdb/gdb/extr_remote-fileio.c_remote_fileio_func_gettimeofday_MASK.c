
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct fio_timeval {int dummy; } ;
typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ FUNC_1 (char**,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct timeval*,struct fio_timeval*) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8 (char *VAR_2)
{
  LONGEST VAR_3;
  CORE_ADDR VAR_4;
  int VAR_5, VAR_6;
  struct timeval VAR_7;
  struct fio_timeval VAR_8;


  if (FUNC_1 (&VAR_2, &VAR_3))
    {
      FUNC_2 ();
      return;
    }
  VAR_4 = (CORE_ADDR) VAR_3;

  if (FUNC_1 (&VAR_2, &VAR_3))
    {
      FUNC_2 ();
      return;
    }

  if (VAR_3)
    {
      FUNC_3 (-1, VAR_0);
      return;
    }

  VAR_1 = 1;
  VAR_5 = FUNC_0 (&VAR_7, ((void*)0));

  if (VAR_5 == -1)
    {
      FUNC_4 (-1);
      return;
    }

  if (VAR_4)
    {
      FUNC_6 (&VAR_7, &VAR_8);

      VAR_6 = FUNC_7 (VAR_4, (char *) &VAR_8, sizeof VAR_8);
      if (VAR_6 != sizeof VAR_8)
 {
   FUNC_4 (-1);
   return;
 }
    }
  FUNC_5 (VAR_5);
}
