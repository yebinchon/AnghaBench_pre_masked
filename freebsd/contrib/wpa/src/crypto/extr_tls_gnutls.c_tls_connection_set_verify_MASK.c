
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int verify_peer; int * session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(void *VAR_2, struct tls_connection *VAR_3,
         int VAR_4, unsigned int VAR_5,
         const u8 *VAR_6, size_t VAR_7)
{
 if (VAR_3 == ((void*)0) || VAR_3->session == ((void*)0))
  return -1;

 VAR_3->verify_peer = VAR_4;
 FUNC_0(VAR_3->session,
           VAR_4 ? VAR_1
           : VAR_0);

 return 0;
}
