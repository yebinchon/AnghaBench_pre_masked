
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t dname_len; int * dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct query_info {scalar_t__ qclass; scalar_t__ qtype; int * qname; } ;
struct nsec3_filter {size_t zone_len; size_t num; scalar_t__ fclass; int * zone; struct ub_packed_rrset_key** list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,size_t*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(struct nsec3_filter* VAR_2, struct ub_packed_rrset_key** VAR_3,
 size_t VAR_4, struct query_info* VAR_5)
{
 size_t VAR_6;
 uint8_t* VAR_7;
 size_t VAR_8;
 VAR_2->zone = ((void*)0);
 VAR_2->zone_len = 0;
 VAR_2->list = VAR_3;
 VAR_2->num = VAR_4;
 VAR_2->fclass = VAR_5->qclass;
 for(VAR_6=0; VAR_6<VAR_4; VAR_6++) {

  if(FUNC_4(VAR_3[VAR_6]->rk.type) != VAR_1 ||
   FUNC_4(VAR_3[VAR_6]->rk.rrset_class) != VAR_5->qclass)
   continue;

  if(!FUNC_3(VAR_3[VAR_6]))
   continue;



  VAR_7 = VAR_3[VAR_6]->rk.dname;
  VAR_8 = VAR_3[VAR_6]->rk.dname_len;
  FUNC_1(&VAR_7, &VAR_8);


  if(FUNC_2(VAR_5->qname, VAR_7) && (!VAR_2->zone ||
   FUNC_2(VAR_7, VAR_2->zone))) {

   if(VAR_5->qtype == VAR_0 &&
    FUNC_5(VAR_5->qname, VAR_7) == 0 &&
    !FUNC_0(VAR_5->qname))
    continue;
   VAR_2->zone = VAR_7;
   VAR_2->zone_len = VAR_8;
  }
 }
}
