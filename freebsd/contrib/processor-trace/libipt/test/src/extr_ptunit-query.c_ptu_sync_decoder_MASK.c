
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptunit_result {int dummy; } ;
struct pt_query_decoder {int enabled; int config; int pos; int next; } ;


 int FUNC_0 (int *,int ,int *) ;
 struct ptunit_result FUNC_1 () ;
 int FUNC_2 (struct pt_query_decoder*) ;

__attribute__((used)) static struct ptunit_result FUNC_3(struct pt_query_decoder *VAR_0)
{
 FUNC_2(VAR_0);
 VAR_0->enabled = 1;

 (void) FUNC_0(&VAR_0->next, VAR_0->pos, &VAR_0->config);
 return FUNC_1();
}
