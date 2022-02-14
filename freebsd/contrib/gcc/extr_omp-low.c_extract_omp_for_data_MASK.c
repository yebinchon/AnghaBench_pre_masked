
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct omp_for_data {void* v; int cond_code; void* n2; void* step; int have_nowait; int have_ordered; scalar_t__ sched_kind; int * chunk_size; void* for_stmt; void* n1; int * pre; } ;


 int FUNC_0 (void*) ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;



 int * FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 void* FUNC_7 (void*) ;
 void* FUNC_8 (void*) ;

 int FUNC_9 (void*) ;
 void* FUNC_10 (void*,int) ;
 void* FUNC_11 (void*) ;
 int FUNC_12 (void*,int) ;
 void* FUNC_13 (int ,void*,void*) ;
 void* FUNC_14 (int,void*,void*,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void
FUNC_17 (tree VAR_8, struct omp_for_data *VAR_9)
{
  tree VAR_10;

  VAR_9->for_stmt = VAR_8;
  VAR_9->pre = ((void*)0);

  VAR_10 = FUNC_8 (VAR_8);
  FUNC_15 (FUNC_9 (VAR_10) == VAR_1);
  VAR_9->v = FUNC_10 (VAR_10, 0);
  FUNC_15 (FUNC_0 (VAR_9->v));
  FUNC_15 (FUNC_9 (FUNC_11 (VAR_9->v)) == VAR_0);
  VAR_9->n1 = FUNC_10 (VAR_10, 1);

  VAR_10 = FUNC_6 (VAR_8);
  VAR_9->cond_code = FUNC_9 (VAR_10);
  FUNC_15 (FUNC_10 (VAR_10, 0) == VAR_9->v);
  VAR_9->n2 = FUNC_10 (VAR_10, 1);
  switch (VAR_9->cond_code)
    {
    case 133:
    case 135:
      break;
    case 134:
      VAR_9->n2 = FUNC_14 (128, FUNC_11 (VAR_9->n2), VAR_9->n2,
      FUNC_12 (FUNC_11 (VAR_9->n2), 1));
      VAR_9->cond_code = 133;
      break;
    case 136:
      VAR_9->n2 = FUNC_14 (132, FUNC_11 (VAR_9->n2), VAR_9->n2,
      FUNC_12 (FUNC_11 (VAR_9->n2), 1));
      VAR_9->cond_code = 135;
      break;
    default:
      FUNC_16 ();
    }

  VAR_10 = FUNC_7 (VAR_9->for_stmt);
  FUNC_15 (FUNC_9 (VAR_10) == VAR_1);
  FUNC_15 (FUNC_10 (VAR_10, 0) == VAR_9->v);
  VAR_10 = FUNC_10 (VAR_10, 1);
  FUNC_15 (FUNC_10 (VAR_10, 0) == VAR_9->v);
  switch (FUNC_9 (VAR_10))
    {
    case 128:
      VAR_9->step = FUNC_10 (VAR_10, 1);
      break;
    case 132:
      VAR_9->step = FUNC_10 (VAR_10, 1);
      VAR_9->step = FUNC_13 (VAR_2, FUNC_11 (VAR_9->step), VAR_9->step);
      break;
    default:
      FUNC_16 ();
    }

  VAR_9->have_nowait = VAR_9->have_ordered = 0;
  VAR_9->sched_kind = VAR_5;
  VAR_9->chunk_size = VAR_3;

  for (VAR_10 = FUNC_5 (VAR_8); VAR_10 ; VAR_10 = FUNC_1 (VAR_10))
    switch (FUNC_2 (VAR_10))
      {
      case 131:
 VAR_9->have_nowait = 1;
 break;
      case 130:
 VAR_9->have_ordered = 1;
 break;
      case 129:
 VAR_9->sched_kind = FUNC_4 (VAR_10);
 VAR_9->chunk_size = FUNC_3 (VAR_10);
 break;
      default:
 break;
      }

  if (VAR_9->sched_kind == VAR_4)
    FUNC_15 (VAR_9->chunk_size == ((void*)0));
  else if (VAR_9->chunk_size == ((void*)0))
    {


      if (VAR_9->sched_kind != VAR_5 || VAR_9->have_ordered)
 VAR_9->chunk_size = (VAR_9->sched_kind == VAR_5)
    ? VAR_7 : VAR_6;
    }
}
