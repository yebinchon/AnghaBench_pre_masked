
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ err; scalar_t__ cert_length; } ;
typedef TYPE_1__ br_x509_minimal_context ;
typedef int br_x509_class ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(const br_x509_class **VAR_1, uint32_t VAR_2)
{
 br_x509_minimal_context *VAR_3;

 VAR_3 = (br_x509_minimal_context *)(void *)VAR_1;
 if (VAR_3->err != 0) {
  return;
 }
 if (VAR_2 == 0) {
  VAR_3->err = VAR_0;
  return;
 }
 VAR_3->cert_length = VAR_2;
}
