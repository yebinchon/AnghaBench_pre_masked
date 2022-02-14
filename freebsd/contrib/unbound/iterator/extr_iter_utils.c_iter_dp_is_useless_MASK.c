
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct query_info {scalar_t__ qtype; int qname_len; int qname; } ;
struct delegpt_ns {int name; scalar_t__ resolved; struct delegpt_ns* next; } ;
struct delegpt {int name; struct delegpt_ns* nslist; scalar_t__ result_list; scalar_t__ usable_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct delegpt*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int
FUNC_2(struct query_info* VAR_3, uint16_t VAR_4,
 struct delegpt* VAR_5)
{
 struct delegpt_ns* VAR_6;
 if(!(VAR_4&VAR_0))
  return 0;

 if(VAR_5->usable_list || VAR_5->result_list)
  return 0;


 if( (VAR_3->qtype == VAR_1 ||
  VAR_3->qtype == VAR_2) &&
  FUNC_1(VAR_3->qname, VAR_5->name) &&
  FUNC_0(VAR_5, VAR_3->qname, VAR_3->qname_len))
  return 1;

 for(VAR_6 = VAR_5->nslist; VAR_6; VAR_6 = VAR_6->next) {
  if(VAR_6->resolved)
   continue;
  if(!FUNC_1(VAR_6->name, VAR_5->name))
   return 0;
 }
 return 1;
}
