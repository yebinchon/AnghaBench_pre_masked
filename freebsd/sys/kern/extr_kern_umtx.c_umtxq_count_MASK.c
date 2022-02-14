
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_queue {int length; } ;
struct umtx_key {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct umtx_key*) ;
 struct umtxq_queue* FUNC_2 (struct umtx_key*,int ) ;

__attribute__((used)) static int
FUNC_3(struct umtx_key *VAR_1)
{
 struct umtxq_queue *VAR_2;

 FUNC_0(FUNC_1(VAR_1));
 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2 != ((void*)0))
  return (VAR_2->length);
 return (0);
}
