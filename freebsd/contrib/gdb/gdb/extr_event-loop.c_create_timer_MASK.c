
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int timer_handler_func ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct gdb_timer {int timer_id; struct gdb_timer* next; TYPE_1__ when; int client_data; int * proc; } ;
typedef int gdb_timer ;
typedef int gdb_client_data ;
struct TYPE_6__ {scalar_t__ timeout_valid; } ;
struct TYPE_5__ {int num_timers; struct gdb_timer* first_timer; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2 (int VAR_2, timer_handler_func * VAR_3, gdb_client_data VAR_4)
{
  struct gdb_timer *VAR_5, *VAR_6, *VAR_7;
  struct timeval VAR_8, VAR_9;


  VAR_9.tv_sec = VAR_2 / 1000;

  VAR_9.tv_usec = (VAR_2 % 1000) * 1000;

  FUNC_0 (&VAR_8, ((void*)0));

  VAR_5 = (struct gdb_timer *) FUNC_1 (sizeof (gdb_timer));
  VAR_5->when.tv_sec = VAR_8.tv_sec + VAR_9.tv_sec;
  VAR_5->when.tv_usec = VAR_8.tv_usec + VAR_9.tv_usec;

  if (VAR_5->when.tv_usec >= 1000000)
    {
      VAR_5->when.tv_sec += 1;
      VAR_5->when.tv_usec -= 1000000;
    }
  VAR_5->proc = VAR_3;
  VAR_5->client_data = VAR_4;
  VAR_1.num_timers++;
  VAR_5->timer_id = VAR_1.num_timers;




  for (VAR_6 = VAR_1.first_timer;
       VAR_6 != ((void*)0);
       VAR_6 = VAR_6->next)
    {


      if ((VAR_6->when.tv_sec > VAR_5->when.tv_sec) ||
   ((VAR_6->when.tv_sec == VAR_5->when.tv_sec)
    && (VAR_6->when.tv_usec > VAR_5->when.tv_usec)))
 break;
    }

  if (VAR_6 == VAR_1.first_timer)
    {
      VAR_5->next = VAR_1.first_timer;
      VAR_1.first_timer = VAR_5;

    }
  else
    {
      for (VAR_7 = VAR_1.first_timer;
    VAR_7->next != VAR_6;
    VAR_7 = VAR_7->next)
 ;

      VAR_7->next = VAR_5;
      VAR_5->next = VAR_6;
    }

  VAR_0.timeout_valid = 0;
  return VAR_5->timer_id;
}
