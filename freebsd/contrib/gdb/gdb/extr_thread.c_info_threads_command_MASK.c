
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int ptid; int num; struct thread_info* next; } ;
struct frame_info {int dummy; } ;
typedef int ptid_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct frame_info* FUNC_1 (int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct frame_info*) ;
 int FUNC_11 (struct frame_info*) ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (struct thread_info*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct thread_info* VAR_2 ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18 (char *VAR_3, int VAR_4)
{
  struct thread_info *VAR_5;
  ptid_t VAR_6;
  struct frame_info *VAR_7;
  int VAR_8 = FUNC_2 (FUNC_3 ());
  int VAR_9;
  char *VAR_10;



  if (FUNC_4 (VAR_0) && VAR_8 < 0)
    FUNC_0 ("No frame.");

  FUNC_7 ();
  FUNC_14 ();
  VAR_6 = VAR_1;
  for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next)
    {
      if (FUNC_8 (VAR_5->ptid, VAR_6))
 FUNC_6 ("* ");
      else
 FUNC_6 ("  ");




      FUNC_6 ("%d %s", VAR_5->num, FUNC_15 (VAR_5->ptid));


      VAR_10 = FUNC_13 (VAR_5);
      if (VAR_10)
 FUNC_6 (" (%s)", VAR_10);
      FUNC_9 ("  ");

      FUNC_12 (VAR_5->ptid);
      FUNC_5 (FUNC_3 (), -1, 0);
    }

  FUNC_12 (VAR_6);







  VAR_9 = VAR_8;
  VAR_7 = FUNC_1 (FUNC_3 (), &VAR_9);
  if (VAR_9 != 0)
    {

      FUNC_17 ("Couldn't restore frame in current thread, at frame 0");
      FUNC_5 (FUNC_3 (), -1, 0);
    }
  else
    {
      FUNC_10 (VAR_7);
    }


  FUNC_11 (VAR_7);
}
