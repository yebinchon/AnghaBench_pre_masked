
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int requestvb; } ;
typedef TYPE_1__ netsnmp_request_info ;
typedef int netsnmp_mib_handler ;
typedef int netsnmp_handler_registration ;
struct TYPE_6__ {int mode; } ;
typedef TYPE_2__ netsnmp_agent_request_info ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (netsnmp_mib_handler *VAR_5,
                               netsnmp_handler_registration *VAR_6,
                               netsnmp_agent_request_info *VAR_7,
                               netsnmp_request_info *VAR_8)
{

   switch (VAR_7->mode) {
   case 128:
   {

    if ( FUNC_0("systemtype", VAR_4, VAR_1) )
    {
 FUNC_1(VAR_8->requestvb, VAR_0,
                             (u_char *)VAR_4,
                             FUNC_2(VAR_4)
                            );
    }

    if ( FUNC_0("system", VAR_4, VAR_1) )
    {
 FUNC_1(VAR_8->requestvb, VAR_0,
                             (u_char *)VAR_4,
                             FUNC_2(VAR_4)
                            );
    } else {
 FUNC_1(VAR_8->requestvb, VAR_0,
                             (u_char *)"N/A",
                             3
                            );
    }
    break;

  }


  default:

        return VAR_2;
  }

  return VAR_3;
}
