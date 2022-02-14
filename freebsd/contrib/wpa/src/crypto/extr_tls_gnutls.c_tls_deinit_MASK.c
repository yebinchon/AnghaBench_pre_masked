
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_global {struct tls_global* ocsp_stapling_response; struct tls_global* session_data; int xcred; scalar_t__ params_set; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct tls_global*) ;
 scalar_t__ VAR_0 ;

void FUNC_3(void *VAR_1)
{
 struct tls_global *VAR_2 = VAR_1;
 if (VAR_2) {
  if (VAR_2->params_set)
   FUNC_0(VAR_2->xcred);
  FUNC_2(VAR_2->session_data);
  FUNC_2(VAR_2->ocsp_stapling_response);
  FUNC_2(VAR_2);
 }

 VAR_0--;
 if (VAR_0 == 0)
  FUNC_1();
}
