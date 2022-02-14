
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct rk_strpool {int dummy; } ;
typedef int dir ;
struct TYPE_24__ {unsigned char* data; int length; } ;
struct TYPE_23__ {scalar_t__ data; scalar_t__ length; } ;
struct TYPE_21__ {int rdnSequence; } ;
struct TYPE_22__ {TYPE_5__ u; int element; } ;
struct TYPE_19__ {scalar_t__ data; scalar_t__ length; } ;
struct TYPE_18__ {scalar_t__ data; scalar_t__ length; } ;
struct TYPE_17__ {int type_id; } ;
struct TYPE_25__ {int registeredID; TYPE_8__ iPAddress; TYPE_7__ uniformResourceIdentifier; TYPE_6__ directoryName; TYPE_3__ dNSName; TYPE_2__ rfc822Name; TYPE_1__ otherName; } ;
struct TYPE_20__ {int rdnSequence; } ;
struct TYPE_16__ {int element; TYPE_9__ u; } ;
struct TYPE_15__ {TYPE_4__ u; int element; } ;
typedef TYPE_10__ Name ;
typedef TYPE_11__ GeneralName ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_10__*,char**) ;







 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (TYPE_10__*,int ,int) ;
 char* FUNC_4 (struct rk_strpool*) ;
 struct rk_strpool* FUNC_5 (struct rk_strpool*,char*,...) ;

int
FUNC_6(GeneralName *VAR_2, char **VAR_3)
{
    struct rk_strpool *VAR_4 = ((void*)0);

    *VAR_3 = ((void*)0);

    switch (VAR_2->element) {
    case 131: {
 char *VAR_5;
 FUNC_2(&VAR_2->u.otherName.type_id, &VAR_5);
 if (VAR_5 == ((void*)0))
     return VAR_1;
 VAR_4 = FUNC_5(VAR_4, "otherName: %s", VAR_5);
 FUNC_1(VAR_5);
 break;
    }
    case 129:
 VAR_4 = FUNC_5(VAR_4, "rfc822Name: %.*s\n",
       (int)VAR_2->u.rfc822Name.length,
       (char *)VAR_2->u.rfc822Name.data);
 break;
    case 134:
 VAR_4 = FUNC_5(VAR_4, "dNSName: %.*s\n",
       (int)VAR_2->u.dNSName.length,
       (char *)VAR_2->u.dNSName.data);
 break;
    case 133: {
 Name VAR_6;
 char *VAR_7;
 int VAR_8;
 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.element = VAR_2->u.directoryName.element;
 VAR_6.u.rdnSequence = VAR_2->u.directoryName.u.rdnSequence;
 VAR_8 = FUNC_0(&VAR_6, &VAR_7);
 if (VAR_8)
     return VAR_8;
 VAR_4 = FUNC_5(VAR_4, "directoryName: %s", VAR_7);
 FUNC_1(VAR_7);
 break;
    }
    case 128:
 VAR_4 = FUNC_5(VAR_4, "URI: %.*s",
       (int)VAR_2->u.uniformResourceIdentifier.length,
       (char *)VAR_2->u.uniformResourceIdentifier.data);
 break;
    case 132: {
 unsigned char *VAR_9 = VAR_2->u.iPAddress.data;

 VAR_4 = FUNC_5(VAR_4, "IPAddress: ");
 if (VAR_4 == ((void*)0))
     break;
 if (VAR_2->u.iPAddress.length == 4)
     VAR_4 = FUNC_5(VAR_4, "%d.%d.%d.%d",
           VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3]);
 else if (VAR_2->u.iPAddress.length == 16)
     VAR_4 = FUNC_5(VAR_4,
           "%02X:%02X:%02X:%02X:"
           "%02X:%02X:%02X:%02X:"
           "%02X:%02X:%02X:%02X:"
           "%02X:%02X:%02X:%02X",
           VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3],
           VAR_9[4], VAR_9[5], VAR_9[6], VAR_9[7],
           VAR_9[8], VAR_9[9], VAR_9[10], VAR_9[11],
           VAR_9[12], VAR_9[13], VAR_9[14], VAR_9[15]);
 else
     VAR_4 = FUNC_5(VAR_4,
           "unknown IP address of length %lu",
           (unsigned long)VAR_2->u.iPAddress.length);
 break;
    }
    case 130: {
 char *VAR_10;
 FUNC_2(&VAR_2->u.registeredID, &VAR_10);
 if (VAR_10 == ((void*)0))
     return VAR_1;
 VAR_4 = FUNC_5(VAR_4, "registeredID: %s", VAR_10);
 FUNC_1(VAR_10);
 break;
    }
    default:
 return VAR_0;
    }
    if (VAR_4 == ((void*)0))
 return VAR_1;

    *VAR_3 = FUNC_4(VAR_4);

    return 0;
}
