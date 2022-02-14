
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gomp_work_share {int dummy; } ;
struct TYPE_4__ {unsigned int team_id; scalar_t__ static_trip; scalar_t__ work_share_generation; struct gomp_work_share* work_share; struct gomp_team* team; } ;
struct gomp_thread_start_data {void (* fn ) (void*) ;int nested; void* fn_data; TYPE_2__ ts; } ;
struct gomp_thread_data {int dummy; } ;
struct TYPE_3__ {unsigned int team_id; scalar_t__ static_trip; scalar_t__ work_share_generation; struct gomp_work_share* work_share; struct gomp_team* team; } ;
struct gomp_thread {void (* fn ) (void*) ;int release; void* data; TYPE_1__ ts; } ;
struct gomp_team {int barrier; int ** ordered_release; TYPE_1__ prev_ts; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 struct gomp_thread_start_data* FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 struct gomp_thread** FUNC_6 (struct gomp_thread**,unsigned int) ;
 struct gomp_thread* FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct gomp_thread** VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct gomp_team* FUNC_8 (unsigned int,struct gomp_work_share*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,size_t*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,size_t) ;
 int FUNC_14 (int *,int *,int ,struct gomp_thread_start_data*) ;
 int FUNC_15 (int) ;

void
FUNC_16 (void (*VAR_8) (void *), void *VAR_9, unsigned VAR_10,
   struct gomp_work_share *VAR_11)
{
  struct gomp_thread_start_data *VAR_12;
  struct gomp_thread *VAR_13, *VAR_14;
  struct gomp_team *VAR_15;
  bool VAR_16;
  unsigned VAR_17, VAR_18, VAR_19 = 0;
  pthread_attr_t VAR_20, *VAR_21;

  VAR_13 = FUNC_7 ();
  VAR_16 = VAR_13->ts.team != ((void*)0);

  VAR_15 = FUNC_8 (VAR_10, VAR_11);




  VAR_15->prev_ts = VAR_13->ts;

  VAR_13->ts.team = VAR_15;
  VAR_13->ts.work_share = VAR_11;
  VAR_13->ts.team_id = 0;
  VAR_13->ts.work_share_generation = 0;
  VAR_13->ts.static_trip = 0;

  if (VAR_10 == 1)
    return;

  VAR_17 = 1;






  if (!VAR_16)
    {
      VAR_19 = VAR_7;

      if (VAR_10 <= VAR_19)
 VAR_18 = VAR_10;
      else if (VAR_19 == 0)
 {
   VAR_18 = 0;
   FUNC_1 (&VAR_5, VAR_10);
 }
      else
 {
   VAR_18 = VAR_19;



   FUNC_2 (&VAR_5, VAR_10);
 }




      VAR_7 = VAR_10;


      for (; VAR_17 < VAR_18; ++VAR_17)
 {
   VAR_14 = VAR_4[VAR_17];
   VAR_14->ts.team = VAR_15;
   VAR_14->ts.work_share = VAR_11;
   VAR_14->ts.team_id = VAR_17;
   VAR_14->ts.work_share_generation = 0;
   VAR_14->ts.static_trip = 0;
   VAR_14->fn = VAR_8;
   VAR_14->data = VAR_9;
   VAR_15->ordered_release[VAR_17] = &VAR_14->release;
 }

      if (VAR_17 == VAR_10)
 goto do_release;




      if (VAR_10 >= VAR_6)
 {
   VAR_6 = VAR_10 + 1;
   VAR_4
     = FUNC_6 (VAR_4,
       VAR_6
       * sizeof (struct gomp_thread_data *));
 }
    }

  VAR_21 = &VAR_2;
  if (VAR_1 != ((void*)0))
    {
      size_t VAR_22;
      FUNC_11 (&VAR_20);
      FUNC_12 (&VAR_20, VAR_0);
      if (! FUNC_10 (&VAR_2, &VAR_22))
 FUNC_13 (&VAR_20, VAR_22);
      VAR_21 = &VAR_20;
    }

  VAR_12 = FUNC_0 (sizeof (struct gomp_thread_start_data)
       * (VAR_10-VAR_17));


  for (; VAR_17 < VAR_10; ++VAR_17, ++VAR_12)
    {
      pthread_t VAR_23;
      int VAR_24;

      VAR_12->ts.team = VAR_15;
      VAR_12->ts.work_share = VAR_11;
      VAR_12->ts.team_id = VAR_17;
      VAR_12->ts.work_share_generation = 0;
      VAR_12->ts.static_trip = 0;
      VAR_12->fn = VAR_8;
      VAR_12->fn_data = VAR_9;
      VAR_12->nested = VAR_16;

      if (VAR_1 != ((void*)0))
 FUNC_5 (VAR_21);

      VAR_24 = FUNC_14 (&VAR_23, VAR_21, VAR_3, VAR_12);
      if (VAR_24 != 0)
 FUNC_4 ("Thread creation failed: %s", FUNC_15 (VAR_24));
    }

  if (VAR_1 != ((void*)0))
    FUNC_9 (&VAR_20);

 do_release:
  FUNC_3 (VAR_16 ? &VAR_15->barrier : &VAR_5);





  if (VAR_10 < VAR_19)
    FUNC_2 (&VAR_5, VAR_10);
}
