
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_set {int sq_cnt; int cq_cnt; int rbdr_cnt; int rq_cnt; } ;
struct nicvf {struct queue_set* qs; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nicvf*) ;
 int FUNC_1 (struct nicvf*,struct queue_set*,int,int ) ;
 int FUNC_2 (struct nicvf*) ;
 int FUNC_3 (struct nicvf*,struct queue_set*,int,int ) ;
 int FUNC_4 (struct nicvf*,struct queue_set*,int,int ) ;
 int FUNC_5 (struct nicvf*,struct queue_set*,int,int ) ;

int
FUNC_6(struct nicvf *VAR_2, boolean_t VAR_3)
{
 boolean_t VAR_4 = VAR_1;
 struct queue_set *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->qs;
 if (VAR_5 == ((void*)0))
  return (0);

 if (VAR_3) {
  if (FUNC_0(VAR_2) != 0)
   return (VAR_0);

  for (VAR_6 = 0; VAR_6 < VAR_5->sq_cnt; VAR_6++)
   FUNC_5(VAR_2, VAR_5, VAR_6, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_5->cq_cnt; VAR_6++)
   FUNC_1(VAR_2, VAR_5, VAR_6, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_5->rbdr_cnt; VAR_6++)
   FUNC_3(VAR_2, VAR_5, VAR_6, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_5->rq_cnt; VAR_6++)
   FUNC_4(VAR_2, VAR_5, VAR_6, VAR_3);
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_5->rq_cnt; VAR_6++)
   FUNC_4(VAR_2, VAR_5, VAR_6, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_5->rbdr_cnt; VAR_6++)
   FUNC_3(VAR_2, VAR_5, VAR_6, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_5->sq_cnt; VAR_6++)
   FUNC_5(VAR_2, VAR_5, VAR_6, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_5->cq_cnt; VAR_6++)
   FUNC_1(VAR_2, VAR_5, VAR_6, VAR_4);

  FUNC_2(VAR_2);
 }

 return (0);
}
