
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ err; scalar_t__ num_certs; } ;
typedef TYPE_1__ br_x509_minimal_context ;
typedef int br_x509_class ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned
FUNC_0(const br_x509_class **VAR_3)
{
 br_x509_minimal_context *VAR_4;

 VAR_4 = (br_x509_minimal_context *)(void *)VAR_3;
 if (VAR_4->err == 0) {
  if (VAR_4->num_certs == 0) {
   VAR_4->err = VAR_0;
  } else {
   VAR_4->err = VAR_1;
  }
 } else if (VAR_4->err == VAR_2) {
  return 0;
 }
 return (unsigned)VAR_4->err;
}
