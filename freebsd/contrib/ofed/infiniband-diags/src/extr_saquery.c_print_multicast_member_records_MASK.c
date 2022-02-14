
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_query_result {unsigned int result_cnt; int p_result_madw; } ;
struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;
typedef int ib_member_rec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct sa_query_result*,struct query_params*) ;
 int FUNC_1 (struct sa_handle*,int ,struct sa_query_result*) ;
 int FUNC_2 (struct sa_query_result*) ;
 scalar_t__ FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sa_handle * VAR_2,
     struct query_params *VAR_3)
{
 struct sa_query_result VAR_4;
 struct sa_query_result VAR_5;
 int VAR_6;
 unsigned VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_0, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, &VAR_5);
 if (VAR_6)
  goto return_mc;

 for (VAR_7 = 0; VAR_7 < VAR_4.result_cnt; VAR_7++) {
  ib_member_rec_t *VAR_8 = (ib_member_rec_t *)
    FUNC_3(VAR_4.p_result_madw,
           VAR_7);
  FUNC_0(VAR_8, &VAR_5, VAR_3);
 }

 FUNC_2(&VAR_5);

return_mc:
 FUNC_2(&VAR_4);

 return VAR_6;
}
