
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct dns_msg {TYPE_3__* rep; } ;
struct TYPE_6__ {size_t rrset_count; size_t an_numrrsets; TYPE_2__** rrsets; } ;
struct TYPE_4__ {size_t dname_len; int * dname; } ;
struct TYPE_5__ {TYPE_1__ rk; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct dns_msg* VAR_0, uint8_t* VAR_1, uint8_t* VAR_2,
 size_t VAR_3, int VAR_4)
{
 size_t VAR_5;
 size_t VAR_6 = 0, VAR_7 = VAR_0->rep->rrset_count;
 if(!VAR_4) VAR_6 = VAR_0->rep->an_numrrsets;
 if(VAR_4) VAR_7 = VAR_0->rep->an_numrrsets;
 for(VAR_5=VAR_6; VAR_5<VAR_7; VAR_5++) {

  if(FUNC_0(VAR_0->rep->rrsets[VAR_5]->rk.dname, VAR_1)
   == 0) {
   VAR_0->rep->rrsets[VAR_5]->rk.dname = VAR_2;
   VAR_0->rep->rrsets[VAR_5]->rk.dname_len = VAR_3;
  }
 }
}
