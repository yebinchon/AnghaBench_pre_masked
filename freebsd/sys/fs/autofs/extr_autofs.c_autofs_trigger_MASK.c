
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct autofs_node {scalar_t__ an_retries; } ;
struct TYPE_2__ {int sc_lock; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct autofs_node*,char const*,int) ;
 int VAR_5 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct autofs_node *VAR_6,
    const char *VAR_7, int VAR_8)
{
 int VAR_9;

 for (;;) {
  VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8);
  if (VAR_9 == 0) {
   VAR_6->an_retries = 0;
   return (0);
  }
  if (VAR_9 == VAR_0 || VAR_9 == VAR_1) {
   FUNC_0("trigger interrupted by signal, "
       "not retrying");
   VAR_6->an_retries = 0;
   return (VAR_9);
  }
  VAR_6->an_retries++;
  if (VAR_6->an_retries >= VAR_2) {
   FUNC_0("trigger failed %d times; returning "
       "error %d", VAR_6->an_retries, VAR_9);
   VAR_6->an_retries = 0;
   return (VAR_9);

  }
  FUNC_0("trigger failed with error %d; will retry in "
      "%d seconds, %d attempts left", VAR_9, VAR_3,
      VAR_2 - VAR_6->an_retries);
  FUNC_4(&VAR_4->sc_lock);
  FUNC_2("autofs_retry", VAR_3 * VAR_5);
  FUNC_3(&VAR_4->sc_lock);
 }
}
