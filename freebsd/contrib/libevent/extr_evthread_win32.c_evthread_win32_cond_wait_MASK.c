
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct evthread_win32_cond {int generation; scalar_t__ n_to_wake; int lock; int event; int n_waiting; } ;
typedef scalar_t__ DWORD ;
typedef int CRITICAL_SECTION ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct timeval const*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_3, void *VAR_4, const struct timeval *VAR_5)
{
 struct evthread_win32_cond *VAR_6 = VAR_3;
 CRITICAL_SECTION *VAR_7 = VAR_4;
 int VAR_8;
 int VAR_9 = 1;
 int VAR_10 = -1;
 DWORD VAR_11 = VAR_0, VAR_12 = VAR_0, VAR_13, VAR_14;
 if (VAR_5)
  VAR_12 = VAR_11 = FUNC_5(VAR_5);

 FUNC_0(&VAR_6->lock);
 ++VAR_6->n_waiting;
 VAR_8 = VAR_6->generation;
 FUNC_2(&VAR_6->lock);

 FUNC_2(VAR_7);

 VAR_13 = FUNC_1();
 do {
  DWORD VAR_15;
  VAR_15 = FUNC_4(VAR_6->event, VAR_11);
  FUNC_0(&VAR_6->lock);
  if (VAR_6->n_to_wake &&
      VAR_6->generation != VAR_8) {
   --VAR_6->n_to_wake;
   --VAR_6->n_waiting;
   VAR_10 = 0;
   VAR_9 = 0;
   goto out;
  } else if (VAR_15 != VAR_1) {
   VAR_10 = (VAR_15==VAR_2) ? 1 : -1;
   --VAR_6->n_waiting;
   VAR_9 = 0;
   goto out;
  } else if (VAR_11 != VAR_0) {
   VAR_14 = FUNC_1();
   if (VAR_13 + VAR_12 <= VAR_14) {
    VAR_10 = 1;
    --VAR_6->n_waiting;
    VAR_9 = 0;
    goto out;
   } else {
    VAR_11 = VAR_13 + VAR_12 - VAR_14;
   }
  }

  if (VAR_6->n_to_wake == 0) {


   FUNC_3(VAR_6->event);
  }
 out:
  FUNC_2(&VAR_6->lock);
 } while (VAR_9);

 FUNC_0(VAR_7);

 FUNC_0(&VAR_6->lock);
 if (!VAR_6->n_waiting)
  FUNC_3(VAR_6->event);
 FUNC_2(&VAR_6->lock);

 return VAR_10;
}
