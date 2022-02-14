
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_queue {int head; } ;
struct umtx_q {int dummy; } ;
struct umtx_key {int dummy; } ;


 struct umtx_q* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct umtx_key*) ;
 struct umtxq_queue* FUNC_3 (struct umtx_key*,int) ;
 int FUNC_4 (struct umtx_q*,int) ;
 int FUNC_5 (struct umtx_q*) ;

__attribute__((used)) static int
FUNC_6(struct umtx_key *VAR_0, int VAR_1, int VAR_2)
{
 struct umtxq_queue *VAR_3;
 struct umtx_q *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 FUNC_1(FUNC_2(VAR_0));
 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (VAR_3 != ((void*)0)) {
  while ((VAR_4 = FUNC_0(&VAR_3->head)) != ((void*)0)) {
   FUNC_4(VAR_4, VAR_2);
   FUNC_5(VAR_4);
   if (++VAR_5 >= VAR_1)
    return (VAR_5);
  }
 }
 return (VAR_5);
}
