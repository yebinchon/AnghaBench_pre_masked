
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct gdb_timer {int client_data; int (* proc ) (int ) ;struct gdb_timer* next; TYPE_1__ when; } ;
struct TYPE_6__ {scalar_t__ timeout_valid; } ;
struct TYPE_5__ {struct gdb_timer* first_timer; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct gdb_timer*) ;

__attribute__((used)) static void
FUNC_3 (int VAR_2)
{
  struct timeval VAR_3;
  struct gdb_timer *VAR_4, *VAR_5;

  FUNC_0 (&VAR_3, ((void*)0));
  VAR_4 = VAR_1.first_timer;

  while (VAR_4 != ((void*)0))
    {
      if ((VAR_4->when.tv_sec > VAR_3.tv_sec) ||
   ((VAR_4->when.tv_sec == VAR_3.tv_sec) &&
    (VAR_4->when.tv_usec > VAR_3.tv_usec)))
 break;


      VAR_1.first_timer = VAR_4->next;
      VAR_5 = VAR_4;
      VAR_4 = VAR_4->next;

      (*VAR_5->proc) (VAR_5->client_data);
      FUNC_2 (VAR_5);
    }

  VAR_0.timeout_valid = 0;
}
