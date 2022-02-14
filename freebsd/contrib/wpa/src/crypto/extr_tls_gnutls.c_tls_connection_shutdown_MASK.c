
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_global {int session_data_size; scalar_t__ session_data; int xcred; } ;
struct tls_connection {int session; int xcred; scalar_t__ params_set; scalar_t__ established; int * push_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct tls_global*,struct tls_connection*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *) ;

int FUNC_8(void *VAR_3, struct tls_connection *VAR_4)
{
 struct tls_global *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return -1;




 FUNC_0(VAR_4->session, VAR_1);
 FUNC_7(VAR_4->push_buf);
 VAR_4->push_buf = ((void*)0);
 VAR_4->established = 0;

 FUNC_2(VAR_4->session);
 if (FUNC_5(VAR_5, VAR_4)) {
  FUNC_6(VAR_2, "GnuTLS: Failed to preparare new session "
      "for session resumption use");
  return -1;
 }

 VAR_6 = FUNC_1(VAR_4->session, VAR_0,
         VAR_4->params_set ? VAR_4->xcred :
         VAR_5->xcred);
 if (VAR_6 < 0) {
  FUNC_6(VAR_2, "GnuTLS: Failed to configure credentials "
      "for session resumption: %s", FUNC_4(VAR_6));
  return -1;
 }

 if (VAR_5->session_data) {
  VAR_6 = FUNC_3(VAR_4->session,
           VAR_5->session_data,
           VAR_5->session_data_size);
  if (VAR_6 < 0) {
   FUNC_6(VAR_2, "GnuTLS: Failed to set session "
       "data: %s", FUNC_4(VAR_6));
   return -1;
  }
 }

 return 0;
}
