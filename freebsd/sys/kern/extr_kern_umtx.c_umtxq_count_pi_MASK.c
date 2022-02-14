
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_queue {int length; int head; } ;
struct umtx_q {int dummy; } ;
struct umtx_key {int dummy; } ;


 struct umtx_q* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct umtx_key*) ;
 struct umtxq_queue* FUNC_3 (struct umtx_key*,int ) ;

__attribute__((used)) static int
FUNC_4(struct umtx_key *VAR_1, struct umtx_q **VAR_2)
{
 struct umtxq_queue *VAR_3;

 *VAR_2 = ((void*)0);
 FUNC_1(FUNC_2(VAR_1));
 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (VAR_3 != ((void*)0)) {
  *VAR_2 = FUNC_0(&VAR_3->head);
  return (VAR_3->length);
 }
 return (0);
}
