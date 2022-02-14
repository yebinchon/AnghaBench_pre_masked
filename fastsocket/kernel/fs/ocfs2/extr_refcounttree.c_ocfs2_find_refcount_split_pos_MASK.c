
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_refcount_list {int * rl_recs; int rl_used; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_refcount_list *VAR_1,
      u32 *VAR_2, int *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1->rl_used);
 int VAR_5, VAR_6 = VAR_4 / 2;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {

  if (FUNC_2(
     &VAR_1->rl_recs[VAR_6 - VAR_5 - 1],
     &VAR_1->rl_recs[VAR_6 - VAR_5])) {
   *VAR_3 = VAR_6 - VAR_5;
   break;
  }


  if ((VAR_6 + VAR_5 + 1) == VAR_4)
   continue;


  if (FUNC_2(
     &VAR_1->rl_recs[VAR_6 + VAR_5],
     &VAR_1->rl_recs[VAR_6 + VAR_5 + 1])) {
   *VAR_3 = VAR_6 + VAR_5 + 1;
   break;
  }
 }

 if (VAR_5 >= VAR_6)
  return -VAR_0;

 *VAR_2 = FUNC_1(&VAR_1->rl_recs[*VAR_3]);
 return 0;
}
