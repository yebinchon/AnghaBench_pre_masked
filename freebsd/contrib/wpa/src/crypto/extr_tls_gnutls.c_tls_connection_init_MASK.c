
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_global {int xcred; scalar_t__ params_set; } ;
struct tls_connection {int xcred; int session; struct tls_global* global; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tls_connection*) ;
 struct tls_connection* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct tls_global*,struct tls_connection*) ;
 int FUNC_6 (int ,char*,int ) ;

struct tls_connection * FUNC_7(void *VAR_2)
{
 struct tls_global *VAR_3 = VAR_2;
 struct tls_connection *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_4->global = VAR_3;

 if (FUNC_5(VAR_3, VAR_4)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 if (VAR_3->params_set) {
  VAR_5 = FUNC_1(VAR_4->session,
          VAR_0,
          VAR_3->xcred);
  if (VAR_5 < 0) {
   FUNC_6(VAR_1, "Failed to configure "
       "credentials: %s", FUNC_2(VAR_5));
   FUNC_3(VAR_4);
   return ((void*)0);
  }
 }

 if (FUNC_0(&VAR_4->xcred)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
