
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct zone {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * VAR_1 ;
 int FUNC_3 (int *,int *) ;
 long FUNC_4 (long) ;
 unsigned long VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct zone*) ;

long FUNC_7(struct zone *VAR_5, int VAR_6, long VAR_7)
{
 long VAR_8;
 unsigned long VAR_9 = VAR_2;
 FUNC_0(VAR_4);
 wait_queue_head_t *VAR_10 = &VAR_1[VAR_6];






 if (FUNC_1(&VAR_3[VAR_6]) == 0 ||
   !FUNC_6(VAR_5)) {
  FUNC_2();


  VAR_8 = VAR_7 - (VAR_2 - VAR_9);
  if (VAR_8 < 0)
   VAR_8 = 0;

  goto out;
 }


 FUNC_5(VAR_10, &VAR_4, VAR_0);
 VAR_8 = FUNC_4(VAR_7);
 FUNC_3(VAR_10, &VAR_4);

out:

 return VAR_8;
}
