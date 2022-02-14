
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ err; unsigned char const* hbuf; size_t hlen; int cpu; } ;
typedef TYPE_1__ br_x509_minimal_context ;
typedef int br_x509_class ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(const br_x509_class **VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 br_x509_minimal_context *VAR_3;

 VAR_3 = (br_x509_minimal_context *)(void *)VAR_0;
 if (VAR_3->err != 0) {
  return;
 }
 VAR_3->hbuf = VAR_1;
 VAR_3->hlen = VAR_2;
 FUNC_0(&VAR_3->cpu);
}
