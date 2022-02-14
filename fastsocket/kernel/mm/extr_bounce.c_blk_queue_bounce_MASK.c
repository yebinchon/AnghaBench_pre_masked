
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int bounce_gfp; } ;
struct bio {int dummy; } ;
typedef int mempool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct request_queue*,struct bio**,int *,int) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (struct request_queue*,struct bio*) ;
 int * VAR_3 ;
 scalar_t__ FUNC_4 (struct request_queue*) ;

void FUNC_5(struct request_queue *VAR_4, struct bio **VAR_5)
{
 int VAR_6;
 mempool_t *VAR_7;




 if (!FUNC_2(*VAR_5))
  return;

 VAR_6 = FUNC_3(VAR_4, *VAR_5);






 if (!(VAR_4->bounce_gfp & VAR_0)) {
  if (FUNC_4(VAR_4) >= VAR_1 && !VAR_6)
   return;
  VAR_7 = VAR_3;
 } else {
  FUNC_0(!VAR_2);
  VAR_7 = VAR_2;
 }




 FUNC_1(VAR_4, VAR_5, VAR_7, VAR_6);
}
