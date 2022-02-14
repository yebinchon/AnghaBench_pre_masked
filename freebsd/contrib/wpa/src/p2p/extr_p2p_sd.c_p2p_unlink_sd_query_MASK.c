
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_sd_query {struct p2p_sd_query* next; scalar_t__ for_all_peers; } ;
struct p2p_data {struct p2p_sd_query* sd_query; struct p2p_sd_query* sd_queries; } ;


 int FUNC_0 (struct p2p_data*,int) ;

__attribute__((used)) static int FUNC_1(struct p2p_data *VAR_0,
          struct p2p_sd_query *VAR_1)
{
 struct p2p_sd_query *VAR_2, *VAR_3;
 int VAR_4 = 0;

 VAR_2 = VAR_0->sd_queries;
 VAR_3 = ((void*)0);
 while (VAR_2) {
  if (VAR_2 == VAR_1) {


   if (VAR_1->for_all_peers)
    FUNC_0(VAR_0, VAR_4);
   if (VAR_3)
    VAR_3->next = VAR_2->next;
   else
    VAR_0->sd_queries = VAR_2->next;
   if (VAR_0->sd_query == VAR_1)
    VAR_0->sd_query = ((void*)0);
   return 1;
  }
  if (VAR_2->for_all_peers)
   VAR_4++;
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }
 return 0;
}
