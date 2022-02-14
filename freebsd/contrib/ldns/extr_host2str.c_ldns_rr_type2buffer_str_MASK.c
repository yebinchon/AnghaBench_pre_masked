
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_rr_type ;
struct TYPE_3__ {int const _name; } ;
typedef TYPE_1__ ldns_rr_descriptor ;
typedef int ldns_buffer ;







 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int const) ;

ldns_status
FUNC_3(ldns_buffer *VAR_0, const ldns_rr_type VAR_1)
{
 const ldns_rr_descriptor *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 switch (VAR_1) {
  case 130:
   FUNC_0(VAR_0, "IXFR");
   break;
  case 131:
   FUNC_0(VAR_0, "AXFR");
   break;
  case 129:
   FUNC_0(VAR_0, "MAILA");
   break;
  case 128:
   FUNC_0(VAR_0, "MAILB");
   break;
  case 132:
   FUNC_0(VAR_0, "ANY");
   break;
  default:
   if (VAR_2 && VAR_2->_name) {
    FUNC_0(VAR_0, "%s", VAR_2->_name);
   } else {
    FUNC_0(VAR_0, "TYPE%u", VAR_1);
   }
 }
 return FUNC_1(VAR_0);
}
