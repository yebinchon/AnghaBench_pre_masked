
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ ldns_lookup_table ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;

ldns_status
FUNC_5(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{
 uint16_t VAR_3 = FUNC_4(FUNC_3(VAR_2));
 ldns_lookup_table *VAR_4;

  VAR_4 = FUNC_2(VAR_0, (int) VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_1, "\t%s", VAR_4->name);
 } else {
  FUNC_0(VAR_1, "\tCLASS%d", VAR_3);
 }
 return FUNC_1(VAR_1);
}
