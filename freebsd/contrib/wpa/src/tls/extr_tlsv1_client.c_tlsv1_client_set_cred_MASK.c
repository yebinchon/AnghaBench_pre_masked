
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_credentials {int dummy; } ;
struct tlsv1_client {struct tlsv1_credentials* cred; } ;


 int FUNC_0 (struct tlsv1_credentials*) ;

int FUNC_1(struct tlsv1_client *VAR_0,
     struct tlsv1_credentials *VAR_1)
{
 FUNC_0(VAR_0->cred);
 VAR_0->cred = VAR_1;
 return 0;
}
