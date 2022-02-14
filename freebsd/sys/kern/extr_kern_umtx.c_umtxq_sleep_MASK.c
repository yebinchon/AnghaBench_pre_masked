
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umtxq_chain {int uc_lock; } ;
struct umtx_q {int uq_flags; int uq_key; } ;
struct abs_timeout {scalar_t__ is_abs_real; } ;
struct TYPE_2__ {void* td_rtcgen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct umtxq_chain*) ;
 int VAR_5 ;
 int FUNC_1 (struct abs_timeout*) ;
 int FUNC_2 (struct abs_timeout*) ;
 void* FUNC_3 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (struct umtx_q*,int *,int,char const*,int) ;
 int VAR_7 ;
 struct umtxq_chain* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline int
FUNC_7(struct umtx_q *VAR_8, const char *VAR_9, struct abs_timeout *VAR_10)
{
 struct umtxq_chain *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_10 != ((void*)0) && VAR_10->is_abs_real) {
  VAR_6->td_rtcgen = FUNC_3(&VAR_7);
  FUNC_2(VAR_10);
 }

 VAR_11 = FUNC_5(&VAR_8->uq_key);
 FUNC_0(VAR_11);
 for (;;) {
  if (!(VAR_8->uq_flags & VAR_5)) {
   VAR_12 = 0;
   break;
  }
  if (VAR_10 != ((void*)0)) {
   VAR_13 = FUNC_1(VAR_10);
   if (VAR_13 < 0) {
    VAR_12 = VAR_2;
    break;
   }
  } else
   VAR_13 = 0;
  VAR_12 = FUNC_4(VAR_8, &VAR_11->uc_lock, VAR_3 | VAR_4, VAR_9, VAR_13);
  if (VAR_12 == VAR_0 || VAR_12 == VAR_1) {
   FUNC_6(&VAR_8->uq_key);
   break;
  }
  if (VAR_10 != ((void*)0)) {
   if (VAR_10->is_abs_real)
    VAR_6->td_rtcgen =
        FUNC_3(&VAR_7);
   FUNC_2(VAR_10);
  }
  FUNC_6(&VAR_8->uq_key);
 }

 VAR_6->td_rtcgen = 0;
 return (VAR_12);
}
