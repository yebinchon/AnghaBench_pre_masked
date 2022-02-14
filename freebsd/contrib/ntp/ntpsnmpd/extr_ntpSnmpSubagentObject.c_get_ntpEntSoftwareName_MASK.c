
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ntp_softwarename ;
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
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,char,int ,int) ;
 char* VAR_4 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (char*) ;

int FUNC_5 (netsnmp_mib_handler *VAR_5,
                               netsnmp_handler_registration *VAR_6,
                               netsnmp_agent_request_info *VAR_7,
                               netsnmp_request_info *VAR_8)
{
 char VAR_9[VAR_1];

   FUNC_0 (VAR_9, 0, VAR_1);

   switch (VAR_7->mode) {
   case 128:
   {
 if ( FUNC_2("product", VAR_4, VAR_1) )
       {
 FUNC_3(VAR_8->requestvb, VAR_0,
                             (u_char *)VAR_4,
                             FUNC_4(VAR_4)
                            );
       }
    else if ( FUNC_2("version", VAR_4, VAR_1) )
    {
 FUNC_1(VAR_4, VAR_9, ' ', 0, sizeof(VAR_9)-1);
 FUNC_3(VAR_8->requestvb, VAR_0,
                             (u_char *)VAR_9,
                             FUNC_4(VAR_9)
                            );
    } else {
 FUNC_3(VAR_8->requestvb, VAR_0,
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
