
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tls_version; } ;
struct tlsv1_client {TYPE_1__ rl; } ;





 int FUNC_0 (char*,char*,size_t) ;

int FUNC_1(struct tlsv1_client *VAR_0, char *VAR_1,
        size_t VAR_2)
{
 if (!VAR_0)
  return -1;
 switch (VAR_0->rl.tls_version) {
 case 130:
  FUNC_0(VAR_1, "TLSv1", VAR_2);
  break;
 case 129:
  FUNC_0(VAR_1, "TLSv1.1", VAR_2);
  break;
 case 128:
  FUNC_0(VAR_1, "TLSv1.2", VAR_2);
  break;
 default:
  return -1;
 }

 return 0;
}
