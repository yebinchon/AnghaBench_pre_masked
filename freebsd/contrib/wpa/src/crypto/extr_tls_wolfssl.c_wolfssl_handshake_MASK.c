
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {struct wpabuf* out_data; } ;
struct tls_connection {TYPE_1__ output; int failed; int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct tls_connection *VAR_3,
      const struct wpabuf *VAR_4,
      int VAR_5)
{
 int VAR_6;

 FUNC_6(&VAR_3->output);


 if (VAR_5) {
  FUNC_4(VAR_3->ssl);
  VAR_6 = FUNC_1(VAR_3->ssl);
  FUNC_7(VAR_0, "SSL: wolfSSL_accept: %d", VAR_6);
 } else {
  FUNC_5(VAR_3->ssl);
  VAR_6 = FUNC_2(VAR_3->ssl);
  FUNC_7(VAR_0, "SSL: wolfSSL_connect: %d", VAR_6);
 }

 if (VAR_6 != 1) {
  int VAR_7 = FUNC_3(VAR_3->ssl, VAR_6);

  if (VAR_7 == VAR_1) {
   FUNC_7(VAR_0,
       "SSL: wolfSSL_connect - want more data");
  } else if (VAR_7 == VAR_2) {
   FUNC_7(VAR_0,
       "SSL: wolfSSL_connect - want to write");
  } else {
   char VAR_8[80];

   FUNC_7(VAR_0,
       "SSL: wolfSSL_connect - failed %s",
       FUNC_0(VAR_7, VAR_8));
   VAR_3->failed++;
  }
 }

 return VAR_3->output.out_data;
}
