
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gomp_work_share {long next; long end; scalar_t__ chunk_size; int incr; } ;
struct TYPE_2__ {int static_trip; unsigned long team_id; struct gomp_work_share* work_share; struct gomp_team* team; } ;
struct gomp_thread {TYPE_1__ ts; } ;
struct gomp_team {int nthreads; } ;


 struct gomp_thread* FUNC_0 () ;

int
FUNC_1 (long *VAR_0, long *VAR_1)
{
  struct gomp_thread *VAR_2 = FUNC_0 ();
  struct gomp_team *VAR_3 = VAR_2->ts.team;
  struct gomp_work_share *VAR_4 = VAR_2->ts.work_share;
  unsigned long VAR_5 = VAR_3 ? VAR_3->nthreads : 1;

  if (VAR_2->ts.static_trip == -1)
    return -1;


  if (VAR_5 == 1)
    {
      *VAR_0 = VAR_4->next;
      *VAR_1 = VAR_4->end;
      VAR_2->ts.static_trip = -1;
      return VAR_4->next == VAR_4->end;
    }




  if (VAR_4->chunk_size == 0)
    {
      unsigned long VAR_6, VAR_7, VAR_8;
      unsigned long VAR_9, VAR_10;
      long VAR_11, VAR_12;

      if (VAR_2->ts.static_trip > 0)
 return 1;


      VAR_11 = VAR_4->incr + (VAR_4->incr > 0 ? -1 : 1);
      VAR_6 = (VAR_4->end - VAR_4->next + VAR_11) / VAR_4->incr;
      VAR_8 = VAR_2->ts.team_id;



      VAR_7 = VAR_6 / VAR_5;
      VAR_7 += (VAR_7 * VAR_5 != VAR_6);
      VAR_9 = VAR_7 * VAR_8;
      VAR_10 = VAR_9 + VAR_7;
      if (VAR_10 > VAR_6)
        VAR_10 = VAR_6;


      if (VAR_9 >= VAR_10)
 {
   VAR_2->ts.static_trip = 1;
   return 1;
 }


      VAR_11 = (long)VAR_9 * VAR_4->incr + VAR_4->next;
      VAR_12 = (long)VAR_10 * VAR_4->incr + VAR_4->next;

      *VAR_0 = VAR_11;
      *VAR_1 = VAR_12;
      VAR_2->ts.static_trip = (VAR_10 == VAR_6 ? -1 : 1);
      return 0;
    }
  else
    {
      unsigned long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
      long VAR_18, VAR_19;




      VAR_18 = VAR_4->incr + (VAR_4->incr > 0 ? -1 : 1);
      VAR_13 = (VAR_4->end - VAR_4->next + VAR_18) / VAR_4->incr;
      VAR_16 = VAR_2->ts.team_id;
      VAR_17 = VAR_4->chunk_size;



      VAR_14 = (VAR_2->ts.static_trip * VAR_5 + VAR_16) * VAR_17;
      VAR_15 = VAR_14 + VAR_17;


      if (VAR_14 >= VAR_13)
 return 1;
      if (VAR_15 > VAR_13)
 VAR_15 = VAR_13;


      VAR_18 = (long)VAR_14 * VAR_4->incr + VAR_4->next;
      VAR_19 = (long)VAR_15 * VAR_4->incr + VAR_4->next;

      *VAR_0 = VAR_18;
      *VAR_1 = VAR_19;

      if (VAR_15 == VAR_13)
 VAR_2->ts.static_trip = -1;
      else
 VAR_2->ts.static_trip++;
      return 0;
    }
}
