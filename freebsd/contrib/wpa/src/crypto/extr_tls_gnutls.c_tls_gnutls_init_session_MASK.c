
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_global {scalar_t__ server; } ;
struct tls_connection {int session; } ;
typedef int gnutls_transport_ptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,char const**) ;
 int FUNC_3 (int ,struct tls_connection*) ;
 int FUNC_4 (int ) ;
 char const* FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_10(struct tls_global *VAR_6,
       struct tls_connection *VAR_7)
{
 const char *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(&VAR_7->session,
     VAR_6->server ? VAR_1 : VAR_0);
 if (VAR_9 < 0) {
  FUNC_9(VAR_3, "TLS: Failed to initialize new TLS "
      "connection: %s", FUNC_5(VAR_9));
  return -1;
 }

 VAR_9 = FUNC_4(VAR_7->session);
 if (VAR_9 < 0)
  goto fail;

 VAR_9 = FUNC_2(VAR_7->session, "NORMAL:-VERS-SSL3.0",
      &VAR_8);
 if (VAR_9 < 0) {
  FUNC_9(VAR_2, "GnuTLS: Priority string failure at "
      "'%s'", VAR_8);
  goto fail;
 }

 FUNC_7(VAR_7->session, VAR_4);
 FUNC_8(VAR_7->session, VAR_5);
 FUNC_6(VAR_7->session, (gnutls_transport_ptr_t) VAR_7);
 FUNC_3(VAR_7->session, VAR_7);

 return 0;

fail:
 FUNC_9(VAR_3, "TLS: Failed to setup new TLS connection: %s",
     FUNC_5(VAR_9));
 FUNC_0(VAR_7->session);
 return -1;
}
