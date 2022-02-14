
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_wc {int dummy; } ;
struct ibv_cq {int dummy; } ;
struct c4iw_cq {int lock; int cq; int rhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct c4iw_cq*,struct ibv_wc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct c4iw_cq* FUNC_7 (struct ibv_cq*) ;

int FUNC_8(struct ibv_cq *VAR_2, int VAR_3, struct ibv_wc *VAR_4)
{
 struct c4iw_cq *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_7(VAR_2);

 if (FUNC_4(&VAR_5->cq)) {
  FUNC_6(&VAR_5->cq);
  FUNC_0(VAR_5->rhp);
 }

 if (!VAR_3)
  return FUNC_5(&VAR_5->cq);

 FUNC_2(&VAR_5->lock);
 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  do {
   VAR_7 = FUNC_1(VAR_5, VAR_4 + VAR_6);
  } while (VAR_7 == -VAR_0);
  if (VAR_7)
   break;
 }
 FUNC_3(&VAR_5->lock);
 return !VAR_7 || VAR_7 == -VAR_1 ? VAR_6 : VAR_7;
}
