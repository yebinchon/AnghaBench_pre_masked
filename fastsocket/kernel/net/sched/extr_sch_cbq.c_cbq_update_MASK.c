
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytes; int packets; } ;
struct cbq_class {long avgidle; long last; long maxidle; long ewma_log; long minidle; long undertime; TYPE_1__ bstats; struct cbq_class* share; } ;
struct cbq_sched_data {int tx_len; long now; int tx_borrowed; struct cbq_class link; struct cbq_class* tx_class; } ;


 scalar_t__ FUNC_0 (struct cbq_class*,int) ;
 long VAR_0 ;
 int FUNC_1 (struct cbq_sched_data*,struct cbq_class*,int ) ;

__attribute__((used)) static void
FUNC_2(struct cbq_sched_data *VAR_1)
{
 struct cbq_class *VAR_2 = VAR_1->tx_class;
 struct cbq_class *VAR_3 = VAR_2;
 int VAR_4 = VAR_1->tx_len;

 VAR_1->tx_class = ((void*)0);

 for ( ; VAR_3; VAR_3 = VAR_3->share) {
  long VAR_5 = VAR_3->avgidle;
  long VAR_6;

  VAR_3->bstats.packets++;
  VAR_3->bstats.bytes += VAR_4;
  VAR_6 = VAR_1->now - VAR_3->last;
  if ((unsigned long)VAR_6 > 128*1024*1024) {
   VAR_5 = VAR_3->maxidle;
  } else {
   VAR_6 -= FUNC_0(VAR_3, VAR_4);






   VAR_5 += VAR_6 - (VAR_5>>VAR_3->ewma_log);
  }

  if (VAR_5 <= 0) {


   if (VAR_5 < VAR_3->minidle)
    VAR_5 = VAR_3->minidle;

   VAR_3->avgidle = VAR_5;
   VAR_6 = (-VAR_5) - ((-VAR_5) >> VAR_3->ewma_log);
   VAR_6 -= FUNC_0(&VAR_1->link, VAR_4);
   VAR_6 += FUNC_0(VAR_3, VAR_4);

   VAR_3->undertime = VAR_1->now + VAR_6;
  } else {


   VAR_3->undertime = VAR_0;
   if (VAR_5 > VAR_3->maxidle)
    VAR_3->avgidle = VAR_3->maxidle;
   else
    VAR_3->avgidle = VAR_5;
  }
  VAR_3->last = VAR_1->now;
 }

 FUNC_1(VAR_1, VAR_2, VAR_1->tx_borrowed);
}
