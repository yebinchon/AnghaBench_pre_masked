
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread_resume {int thread; scalar_t__ leave_stopped; scalar_t__ sig; scalar_t__ step; } ;
struct thread_info {int dummy; } ;
struct TYPE_5__ {int * tail; int head; } ;
struct TYPE_4__ {scalar_t__ head; scalar_t__ tail; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct thread_resume*) ;
 int FUNC_9 (struct thread_info*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static unsigned char
FUNC_15 (char *VAR_4)
{
  int VAR_5;
  struct thread_info *VAR_6 = ((void*)0);

retry:






  if (VAR_2 > 0)
    {
      VAR_6 = (struct thread_info *) FUNC_10 (&VAR_1,
             VAR_2);


      if (VAR_6 == ((void*)0))
 {
   struct thread_resume VAR_7;
   VAR_7.thread = -1;
   VAR_7.step = VAR_7.sig = VAR_7.leave_stopped = 0;
   FUNC_8 (&VAR_7);
 }
    }

  FUNC_7 ();
  FUNC_14 ();
  VAR_5 = FUNC_9 (VAR_6);
  FUNC_13 ();
  FUNC_6 ();
  if (VAR_1.head == VAR_1.tail)
    {
      if (FUNC_1 (VAR_5))
 {
   FUNC_11 (VAR_3, "\nChild exited with retcode = %x \n", FUNC_0 (VAR_5));
   *VAR_4 = 'W';
   FUNC_5 ();
   FUNC_12 (VAR_0.head);
   VAR_0.head = *(VAR_0.tail = ((void*)0));
   return ((unsigned char) FUNC_0 (VAR_5));
 }
      else if (!FUNC_2 (VAR_5))
 {
   FUNC_11 (VAR_3, "\nChild terminated with signal = %x \n", FUNC_4 (VAR_5));
   *VAR_4 = 'X';
   FUNC_5 ();
   FUNC_12 (VAR_0.head);
   VAR_0.head = *(VAR_0.tail = ((void*)0));
   return ((unsigned char) FUNC_4 (VAR_5));
 }
    }
  else
    {
      if (!FUNC_2 (VAR_5))
 goto retry;
    }

  *VAR_4 = 'T';
  return ((unsigned char) FUNC_3 (VAR_5));
}
