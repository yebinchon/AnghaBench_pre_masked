
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t team_id; scalar_t__ static_trip; scalar_t__ work_share_generation; int * work_share; struct gomp_team* team; } ;
struct gomp_thread_start_data {void (* fn ) (void*) ;scalar_t__ nested; TYPE_1__ ts; void* fn_data; } ;
struct gomp_thread {void (* fn ) (void*) ;int * data; TYPE_1__ ts; int release; } ;
struct gomp_team {int barrier; int ** ordered_release; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct gomp_thread** VAR_0 ;
 int VAR_1 ;
 struct gomp_thread VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct gomp_thread*) ;

__attribute__((used)) static void *
FUNC_3 (void *VAR_4)
{
  struct gomp_thread_start_data *VAR_5 = VAR_4;
  struct gomp_thread *VAR_6;
  void (*VAR_7) (void *);
  void *VAR_8;




  struct gomp_thread VAR_9;
  VAR_6 = &VAR_9;
  FUNC_2 (VAR_3, VAR_6);

  FUNC_1 (&VAR_6->release, 0);


  VAR_7 = VAR_5->fn;
  VAR_8 = VAR_5->fn_data;
  VAR_6->ts = VAR_5->ts;

  VAR_6->ts.team->ordered_release[VAR_6->ts.team_id] = &VAR_6->release;

  if (VAR_5->nested)
    {
      FUNC_0 (&VAR_6->ts.team->barrier);
      VAR_7 (VAR_8);
      FUNC_0 (&VAR_6->ts.team->barrier);
    }
  else
    {
      VAR_0[VAR_6->ts.team_id] = VAR_6;

      FUNC_0 (&VAR_1);
      do
 {
   struct gomp_team *VAR_10;

   VAR_7 (VAR_8);



   VAR_10 = VAR_6->ts.team;
   VAR_6->fn = ((void*)0);
   VAR_6->data = ((void*)0);
   VAR_6->ts.team = ((void*)0);
   VAR_6->ts.work_share = ((void*)0);
   VAR_6->ts.team_id = 0;
   VAR_6->ts.work_share_generation = 0;
   VAR_6->ts.static_trip = 0;

   FUNC_0 (&VAR_10->barrier);
   FUNC_0 (&VAR_1);

   VAR_7 = VAR_6->fn;
   VAR_8 = VAR_6->data;
 }
      while (VAR_7);
    }

  return ((void*)0);
}
