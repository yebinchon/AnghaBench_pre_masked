
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrset_parse {scalar_t__ type; struct rr_parse* rr_first; } ;
struct rr_parse {int * ttl_data; struct rr_parse* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct rrset_parse* VAR_1,
 uint8_t* VAR_2)
{
 struct rr_parse* VAR_3;
 uint8_t* VAR_4;
 size_t VAR_5;
 FUNC_2(VAR_1->type == VAR_0);
 for(VAR_3 = VAR_1->rr_first; VAR_3; VAR_3 = VAR_3->next) {
  VAR_4 = VAR_3->ttl_data+4+2;
  VAR_5 = FUNC_3(VAR_3->ttl_data+4);
  if(!FUNC_1(VAR_4, VAR_5)) {

   return 1;
  }
  if(!FUNC_0(VAR_4, VAR_2)) {

   return 1;
  }
 }

 return 0;
}
