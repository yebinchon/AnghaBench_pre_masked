
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ verbose; } ;
typedef TYPE_1__ ccert_context ;
typedef int br_ssl_client_certificate_class ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const br_ssl_client_certificate_class **VAR_1,
 const unsigned char *VAR_2, size_t VAR_3)
{
 ccert_context *VAR_4;

 VAR_4 = (ccert_context *)VAR_1;
 if (VAR_4->verbose) {
  size_t VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 ++) {
   if (VAR_5 == 0) {
    FUNC_0(VAR_0, "  ");
   } else if (VAR_5 > 0 && VAR_5 % 16 == 0) {
    FUNC_0(VAR_0, "\n  ");
   }
   FUNC_0(VAR_0, " %02x", VAR_2[VAR_5]);
  }
  if (VAR_3 > 0) {
   FUNC_0(VAR_0, "\n");
  }
 }
}
