
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_tournament_round {scalar_t__ role; scalar_t__ flag; scalar_t__* opponent; } ;
struct ck_barrier_tournament {unsigned int size; int rounds; int tid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,struct ck_barrier_tournament_round**) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct ck_barrier_tournament *VAR_5,
    struct ck_barrier_tournament_round **VAR_6,
    unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_2(&VAR_5->tid, 0);
 VAR_5->size = VAR_10 = FUNC_0(VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {

  VAR_6[VAR_8][0].flag = 0;
  VAR_6[VAR_8][0].role = VAR_2;
  for (VAR_9 = 1, VAR_11 = 2, VAR_12 = 1; VAR_9 < VAR_10; ++VAR_9, VAR_12 = VAR_11, VAR_11 <<= 1) {
   VAR_6[VAR_8][VAR_9].flag = 0;

   VAR_13 = VAR_8 & (VAR_11 - 1);
   if (VAR_13 == 0) {
    if ((VAR_8 + VAR_12 < VAR_7) && (VAR_11 < VAR_7))
     VAR_6[VAR_8][VAR_9].role = VAR_4;
    else if (VAR_8 + VAR_12 >= VAR_7)
     VAR_6[VAR_8][VAR_9].role = VAR_0;
   }

   if (VAR_13 == VAR_12)
    VAR_6[VAR_8][VAR_9].role = VAR_3;
   else if ((VAR_8 == 0) && (VAR_11 >= VAR_7))
    VAR_6[VAR_8][VAR_9].role = VAR_1;

   if (VAR_6[VAR_8][VAR_9].role == VAR_3)
    VAR_6[VAR_8][VAR_9].opponent = &VAR_6[VAR_8 - VAR_12][VAR_9].flag;
   else if (VAR_6[VAR_8][VAR_9].role == VAR_4 ||
     VAR_6[VAR_8][VAR_9].role == VAR_1)
    VAR_6[VAR_8][VAR_9].opponent = &VAR_6[VAR_8 + VAR_12][VAR_9].flag;
  }
 }

 FUNC_1(&VAR_5->rounds, VAR_6);
 return;
}
