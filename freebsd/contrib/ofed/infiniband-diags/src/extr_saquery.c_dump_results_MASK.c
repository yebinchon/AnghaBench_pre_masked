
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_query_result {unsigned int result_cnt; int p_result_madw; } ;
struct query_params {int dummy; } ;


 void* FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct sa_query_result *VAR_0,
    void (*VAR_1) (void *, struct query_params *),
    struct query_params *VAR_2)
{
 unsigned VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->result_cnt; VAR_3++) {
  void *VAR_4 = FUNC_0(VAR_0->p_result_madw, VAR_3);
  VAR_1(VAR_4, VAR_2);
 }
}
