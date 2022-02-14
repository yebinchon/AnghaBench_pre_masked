
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_info {int qname; } ;
struct delegpt {scalar_t__ namelabs; int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(struct query_info* VAR_0, struct delegpt* VAR_1)
{


 if(!VAR_1) return 0;


 if(FUNC_1(VAR_0->qname, VAR_1->name) == 0)
  return 0;

 if(FUNC_0(VAR_0->qname) == VAR_1->namelabs+1)
  return 0;
 return 1;
}
