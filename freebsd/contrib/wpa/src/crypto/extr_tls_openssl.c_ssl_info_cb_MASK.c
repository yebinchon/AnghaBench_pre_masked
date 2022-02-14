
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_local; char* type; int description; } ;
union tls_event_data {TYPE_1__ alert; } ;
struct tls_context {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;} ;
struct tls_connection {struct tls_context* context; int write_alerts; int read_alerts; } ;
typedef int ev ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 struct tls_connection* FUNC_2 (int *) ;
 int FUNC_3 (int const*) ;
 int VAR_10 ;
 int FUNC_4 (union tls_event_data*,int ,int) ;
 int FUNC_5 (int ,int ,union tls_event_data*) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(const SSL *VAR_11, int VAR_12, int VAR_13)
{
 const char *VAR_14;
 int VAR_15;

 FUNC_6(VAR_0, "SSL: (where=0x%x ret=0x%x)", VAR_12, VAR_13);
 VAR_15 = VAR_12 & ~VAR_9;
 if (VAR_15 & VAR_8)
  VAR_14 = "SSL_connect";
 else if (VAR_15 & VAR_7)
  VAR_14 = "SSL_accept";
 else
  VAR_14 = "undefined";

 if (VAR_12 & VAR_5) {
  FUNC_6(VAR_0, "SSL: %s:%s",
      VAR_14, FUNC_3(VAR_11));
 } else if (VAR_12 & VAR_3) {
  struct tls_connection *VAR_16 = FUNC_2((SSL *) VAR_11);
  FUNC_6(VAR_1, "SSL: SSL3 alert: %s:%s:%s",
      VAR_12 & VAR_6 ?
      "read (remote end reported an error)" :
      "write (local SSL3 detected an error)",
      FUNC_1(VAR_13),
      FUNC_0(VAR_13));
  if ((VAR_13 >> 8) == VAR_2) {
   if (VAR_12 & VAR_6)
    VAR_16->read_alerts++;
   else
    VAR_16->write_alerts++;
  }
  if (VAR_16->context->event_cb != ((void*)0)) {
   union tls_event_data VAR_17;
   struct tls_context *VAR_18 = VAR_16->context;
   FUNC_4(&VAR_17, 0, sizeof(VAR_17));
   VAR_17.alert.is_local = !(VAR_12 & VAR_6);
   VAR_17.alert.type = FUNC_1(VAR_13);
   VAR_17.alert.description = FUNC_0(VAR_13);
   VAR_18->event_cb(VAR_18->cb_ctx, VAR_10, &VAR_17);
  }
 } else if (VAR_12 & VAR_4 && VAR_13 <= 0) {
  FUNC_6(VAR_0, "SSL: %s:%s in %s",
      VAR_14, VAR_13 == 0 ? "failed" : "error",
      FUNC_3(VAR_11));
 }
}
