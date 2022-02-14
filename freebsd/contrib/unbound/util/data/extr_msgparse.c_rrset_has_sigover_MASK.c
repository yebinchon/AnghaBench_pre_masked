
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rrset_parse {scalar_t__ type; struct rr_parse* rr_first; } ;
struct rr_parse {struct rr_parse* next; int ttl_data; } ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(sldns_buffer* VAR_1, struct rrset_parse* VAR_2, uint16_t VAR_3,
 int* VAR_4)
{
 int VAR_5 = 0;
 struct rr_parse* VAR_6 = VAR_2->rr_first;
 FUNC_0( VAR_2->type == VAR_0 );
 while(VAR_6) {
  if(FUNC_1(VAR_1, VAR_6->ttl_data, VAR_3))
   VAR_5 = 1;
  else *VAR_4 = 1;
  VAR_6 = VAR_6->next;
 }
 return VAR_5;
}
