
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_status ;
struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ ldns_lookup_table ;
typedef int ldns_buffer ;
typedef scalar_t__ ldns_algorithm ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;

ldns_status
FUNC_3(ldns_buffer *VAR_1,
                          ldns_algorithm VAR_2)
{
 ldns_lookup_table *VAR_3 = FUNC_2(VAR_0,
                                           VAR_2);
 if (VAR_3 && VAR_3->name) {
  FUNC_0(VAR_1, "%s", VAR_3->name);
 } else {
  FUNC_0(VAR_1, "ALG%u", VAR_2);
 }
 return FUNC_1(VAR_1);
}
