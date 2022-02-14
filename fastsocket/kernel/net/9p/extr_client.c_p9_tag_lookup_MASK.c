
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct p9_req_t {int dummy; } ;
struct p9_client {int max_tag; struct p9_req_t** reqs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

struct p9_req_t *FUNC_1(struct p9_client *VAR_1, u16 VAR_2)
{
 int VAR_3, VAR_4;



 VAR_2++;

 FUNC_0(VAR_2 >= VAR_1->max_tag);

 VAR_3 = VAR_2 / VAR_0;
 VAR_4 = VAR_2 % VAR_0;

 return &VAR_1->reqs[VAR_3][VAR_4];
}
