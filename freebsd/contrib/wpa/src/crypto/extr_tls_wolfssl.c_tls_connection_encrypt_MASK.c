
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {struct wpabuf* out_data; } ;
struct tls_connection {TYPE_1__ output; int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;

struct wpabuf * FUNC_7(void *VAR_2,
           struct tls_connection *VAR_3,
           const struct wpabuf *VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return ((void*)0);

 FUNC_4(VAR_0, "SSL: encrypt: %ld bytes", FUNC_6(VAR_4));

 FUNC_3(&VAR_3->output);

 VAR_5 = FUNC_2(VAR_3->ssl, FUNC_5(VAR_4),
       FUNC_6(VAR_4));
 if (VAR_5 < 0) {
  int VAR_6 = FUNC_1(VAR_3->ssl, VAR_5);
  char VAR_7[80];

  FUNC_4(VAR_1, "Encryption failed - SSL_write: %s",
      FUNC_0(VAR_6, VAR_7));
  return ((void*)0);
 }

 return VAR_3->output.out_data;
}
