
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int peer_cert; } ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,int ,int) ;

char * FUNC_5(void *VAR_0,
          struct tls_connection *VAR_1)
{
 ASN1_INTEGER *VAR_2;
 char *VAR_3;
 size_t VAR_4;

 if (!VAR_1->peer_cert)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1->peer_cert);
 if (!VAR_2)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2) * 2 + 1;
 VAR_3 = FUNC_3(VAR_4);
 if (!VAR_3)
  return ((void*)0);
 FUNC_4(VAR_3, VAR_4,
       FUNC_0(VAR_2),
       FUNC_1(VAR_2));
 return VAR_3;
}
