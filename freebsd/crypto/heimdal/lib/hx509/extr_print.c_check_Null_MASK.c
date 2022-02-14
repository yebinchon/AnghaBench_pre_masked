
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cert_status {int dummy; } ;
typedef int hx509_validate_ctx ;
typedef enum critical_flag { ____Placeholder_critical_flag } critical_flag ;
struct TYPE_3__ {int critical; } ;
typedef TYPE_1__ Extension ;



 int VAR_0 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_2(hx509_validate_ctx VAR_1,
    struct cert_status *VAR_2,
    enum critical_flag VAR_3, const Extension *VAR_4)
{
    switch(VAR_3) {
    case 132:
 break;
    case 129:
 if (!VAR_4->critical)
     FUNC_1(VAR_1, VAR_0,
      "\tCritical not set on SHOULD\n");
 break;
    case 128:
 if (VAR_4->critical)
     FUNC_1(VAR_1, VAR_0,
      "\tCritical set on SHOULD NOT\n");
 break;
    case 131:
 if (!VAR_4->critical)
     FUNC_1(VAR_1, VAR_0,
      "\tCritical not set on MUST\n");
 break;
    case 130:
 if (VAR_4->critical)
     FUNC_1(VAR_1, VAR_0,
      "\tCritical set on MUST NOT\n");
 break;
    default:
 FUNC_0("internal check_Null state error");
    }
    return 0;
}
