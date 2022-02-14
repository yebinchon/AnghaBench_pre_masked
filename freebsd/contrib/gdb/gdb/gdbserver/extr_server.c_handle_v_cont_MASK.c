
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_resume {int thread; int leave_stopped; int step; scalar_t__ sig; } ;
typedef int resume_info ;
struct TYPE_2__ {int (* resume ) (struct thread_resume*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct thread_resume*) ;
 struct thread_resume* FUNC_1 (int) ;
 unsigned char FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char,unsigned char) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 void* FUNC_7 (char*,char**,int) ;
 int FUNC_8 (struct thread_resume*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 TYPE_1__* VAR_1 ;

void
FUNC_11 (char *VAR_2, char *VAR_3, unsigned char *VAR_4)
{
  char *VAR_5, *VAR_6;
  int VAR_7 = 0, VAR_8 = 0;
  struct thread_resume *VAR_9, VAR_10;



  VAR_5 = &VAR_2[5];
  while (VAR_5)
    {
      VAR_7++;
      VAR_5++;
      VAR_5 = FUNC_5 (VAR_5, ';');
    }



  VAR_9 = FUNC_1 ((VAR_7 + 1) * sizeof (VAR_9[0]));

  VAR_10.thread = -1;
  VAR_10.leave_stopped = 1;
  VAR_10.step = 0;
  VAR_10.sig = 0;

  VAR_5 = &VAR_2[5];
  VAR_8 = 0;
  while (*VAR_5)
    {
      VAR_5++;

      VAR_9[VAR_8].leave_stopped = 0;

      if (VAR_5[0] == 's' || VAR_5[0] == 'S')
 VAR_9[VAR_8].step = 1;
      else if (VAR_5[0] == 'c' || VAR_5[0] == 'C')
 VAR_9[VAR_8].step = 0;
      else
 goto err;

      if (VAR_5[0] == 'S' || VAR_5[0] == 'C')
 {
   int VAR_11;
   VAR_11 = FUNC_7 (VAR_5 + 1, &VAR_6, 16);
   if (VAR_5 == VAR_6)
     goto err;
   VAR_5 = VAR_6;

   if (!FUNC_10 (VAR_11))
     goto err;
   VAR_9[VAR_8].sig = FUNC_9 (VAR_11);
 }
      else
 {
   VAR_9[VAR_8].sig = 0;
   VAR_5 = VAR_5 + 1;
 }

      if (VAR_5[0] == 0)
 {
   VAR_9[VAR_8].thread = -1;
   VAR_10 = VAR_9[VAR_8];



 }
      else if (VAR_5[0] == ':')
 {
   VAR_9[VAR_8].thread = FUNC_7 (VAR_5 + 1, &VAR_6, 16);
   if (VAR_5 == VAR_6)
     goto err;
   VAR_5 = VAR_6;
   if (VAR_5[0] != ';' && VAR_5[0] != 0)
     goto err;

   VAR_8++;
 }
    }

  VAR_9[VAR_8] = VAR_10;


  if (VAR_7 == 1 && VAR_9[0].thread != -1)
    VAR_0 = VAR_9[0].thread;
  else
    VAR_0 = -1;
  FUNC_4 (0);

  (*VAR_1->resume) (VAR_9);

  FUNC_0 (VAR_9);

  *VAR_4 = FUNC_2 (VAR_3, 1);
  FUNC_3 (VAR_2, *VAR_3, *VAR_4);
  return;

err:

  FUNC_6 (VAR_2, "");
  FUNC_0 (VAR_9);
  return;
}
