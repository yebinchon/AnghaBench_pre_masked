
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleepqueue {int sq_free; scalar_t__* sq_blockedcnt; int * sq_blocked; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, int VAR_2, int VAR_3)
{
 struct sleepqueue *VAR_4;
 int VAR_5;

 FUNC_2(VAR_1, VAR_2);
 VAR_4 = VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1(&VAR_4->sq_blocked[VAR_5]);
  VAR_4->sq_blockedcnt[VAR_5] = 0;
 }
 FUNC_0(&VAR_4->sq_free);
 return (0);
}
