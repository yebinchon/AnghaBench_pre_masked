
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_output_format ;
typedef int ldns_buffer ;
struct TYPE_2__ {scalar_t__ _name; } ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,scalar_t__) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;

__attribute__((used)) static ldns_status
FUNC_6(ldns_buffer *VAR_0,
  const ldns_output_format* VAR_1, const ldns_rdf *VAR_2)
{
        uint16_t VAR_3 = FUNC_4(FUNC_3(VAR_2));

 if (! FUNC_2(VAR_1, VAR_3) &&
   FUNC_5(VAR_3) &&
   FUNC_5(VAR_3)->_name) {

  FUNC_0(VAR_0, "%s",FUNC_5(VAR_3)->_name);
 } else {
  FUNC_0(VAR_0, "TYPE%u", VAR_3);
 }
 return FUNC_1(VAR_0);
}
