
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ verbose; } ;
typedef TYPE_1__ ccert_context ;
typedef int br_ssl_client_certificate_class ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const br_ssl_client_certificate_class **VAR_1)
{
 ccert_context *VAR_2;

 VAR_2 = (ccert_context *)VAR_1;
 if (VAR_2->verbose) {
  FUNC_0(VAR_0, "--- anchor DN list end ---\n");
 }
}
