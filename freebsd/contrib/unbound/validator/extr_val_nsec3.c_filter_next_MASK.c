
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t dname_len; int * dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct nsec3_filter {size_t num; scalar_t__ fclass; struct ub_packed_rrset_key** list; int zone; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **,size_t*) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int) ;
 scalar_t__ FUNC_2 (struct ub_packed_rrset_key*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct ub_packed_rrset_key*) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_6(struct nsec3_filter* VAR_1, size_t* VAR_2, int* VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 uint8_t* VAR_6;
 size_t VAR_7;
 if(!VAR_1->zone)
  return ((void*)0);
 for(VAR_4=*VAR_2; VAR_4<VAR_1->num; VAR_4++) {

  if(FUNC_3(VAR_1->list[VAR_4]->rk.type) != VAR_0 ||
   FUNC_3(VAR_1->list[VAR_4]->rk.rrset_class) !=
   VAR_1->fclass)
   continue;

  VAR_6 = VAR_1->list[VAR_4]->rk.dname;
  VAR_7 = VAR_1->list[VAR_4]->rk.dname_len;
  FUNC_0(&VAR_6, &VAR_7);
  if(FUNC_4(VAR_6, VAR_1->zone) != 0)
   continue;
  if(VAR_4 == *VAR_2)
   VAR_5 = (*VAR_3) + 1;
  else VAR_5 = 0;
  for(; VAR_5 < (int)FUNC_5(VAR_1->list[VAR_4]); VAR_5++) {

   if(FUNC_2(VAR_1->list[VAR_4], VAR_5) ||
    !FUNC_1(VAR_1->list[VAR_4], VAR_5))
    continue;

   *VAR_2 = VAR_4;
   *VAR_3 = VAR_5;
   return VAR_1->list[VAR_4];
  }
 }
 return ((void*)0);
}
