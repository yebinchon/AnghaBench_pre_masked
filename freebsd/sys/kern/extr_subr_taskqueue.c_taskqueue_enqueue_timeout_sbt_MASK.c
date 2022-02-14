
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ta_pending; } ;
struct timeout_task {int f; int c; TYPE_1__ t; struct taskqueue* q; } ;
struct taskqueue {int tq_callouts; int tq_spin; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct taskqueue*) ;
 int FUNC_2 (struct taskqueue*) ;
 int FUNC_3 (int *,int ,int ,int ,struct timeout_task*,int) ;
 int FUNC_4 (struct taskqueue*,TYPE_1__*) ;
 int VAR_2 ;

int
FUNC_5(struct taskqueue *VAR_3,
    struct timeout_task *VAR_4, sbintime_t VAR_5, sbintime_t VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_3);
 FUNC_0(VAR_4->q == ((void*)0) || VAR_4->q == VAR_3,
     ("Migrated queue"));
 FUNC_0(!VAR_3->tq_spin, ("Timeout for spin-queue"));
 VAR_4->q = VAR_3;
 VAR_8 = VAR_4->t.ta_pending;
 if (VAR_4->f & VAR_1) {

  FUNC_2(VAR_3);
  VAR_8 = -1;
 } else if (VAR_5 == 0) {
  FUNC_4(VAR_3, &VAR_4->t);

 } else {
  if ((VAR_4->f & VAR_0) != 0) {
   VAR_8++;
  } else {
   VAR_3->tq_callouts++;
   VAR_4->f |= VAR_0;
   if (VAR_5 < 0)
    VAR_5 = -VAR_5;
  }
  if (VAR_5 > 0) {
   FUNC_3(&VAR_4->c, VAR_5, VAR_6,
       VAR_2, VAR_4, VAR_7);
  }
  FUNC_2(VAR_3);
 }
 return (VAR_8);
}
