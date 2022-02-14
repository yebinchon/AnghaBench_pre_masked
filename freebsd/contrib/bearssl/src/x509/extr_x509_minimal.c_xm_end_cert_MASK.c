
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ err; scalar_t__ cert_length; int num_certs; } ;
typedef TYPE_1__ br_x509_minimal_context ;
typedef int br_x509_class ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(const br_x509_class **VAR_1)
{
 br_x509_minimal_context *VAR_2;

 VAR_2 = (br_x509_minimal_context *)(void *)VAR_1;
 if (VAR_2->err == 0 && VAR_2->cert_length != 0) {
  VAR_2->err = VAR_0;
 }
 VAR_2->num_certs ++;
}
