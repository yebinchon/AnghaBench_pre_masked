
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; } ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;
typedef int buf ;


 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (struct ub_packed_rrset_key*,size_t,int ,char*,int) ;
 int VAR_0 ;

void FUNC_2(enum verbosity_value VAR_1, const char* VAR_2,
 struct ub_packed_rrset_key* VAR_3)
{
 struct packed_rrset_data* VAR_4 = (struct packed_rrset_data*)VAR_3->
  entry.data;
 char VAR_5[65535];
 size_t VAR_6;
 if(VAR_0 < VAR_1)
  return;
 for(VAR_6=0; VAR_6<VAR_4->count+VAR_4->rrsig_count; VAR_6++) {
  if(!FUNC_1(VAR_3, VAR_6, 0, VAR_5, sizeof(VAR_5))) {
   FUNC_0("%s: rr %d wire2str-error", VAR_2, (int)VAR_6);
  } else {
   FUNC_0("%s: %s", VAR_2, VAR_5);
  }
 }
}
