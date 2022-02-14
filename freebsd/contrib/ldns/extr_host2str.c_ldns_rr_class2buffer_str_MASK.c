
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_rr_class ;
struct TYPE_3__ {int const name; } ;
typedef TYPE_1__ ldns_lookup_table ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,int const) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,int const) ;
 int VAR_0 ;

ldns_status
FUNC_3(ldns_buffer *VAR_1,
                         const ldns_rr_class VAR_2)
{
 ldns_lookup_table *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1, "%s", VAR_3->name);
 } else {
  FUNC_0(VAR_1, "CLASS%d", VAR_2);
 }
 return FUNC_1(VAR_1);
}
