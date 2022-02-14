
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_sd_query {struct p2p_sd_query* next; } ;
struct p2p_data {scalar_t__ num_p2p_sd_queries; struct p2p_sd_query* sd_queries; } ;


 int FUNC_0 (struct p2p_sd_query*) ;

void FUNC_1(struct p2p_data *VAR_0)
{
 struct p2p_sd_query *VAR_1, *VAR_2;
 VAR_1 = VAR_0->sd_queries;
 VAR_0->sd_queries = ((void*)0);
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }
 VAR_0->num_p2p_sd_queries = 0;
}
