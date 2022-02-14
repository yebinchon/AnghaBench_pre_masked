
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__** inner; } ;
typedef TYPE_1__ x509_noanchor_context ;
typedef int br_x509_class ;
struct TYPE_4__ {int (* end_cert ) (TYPE_2__**) ;} ;


 int FUNC_0 (TYPE_2__**) ;

__attribute__((used)) static void
FUNC_1(const br_x509_class **VAR_0)
{
 x509_noanchor_context *VAR_1;

 VAR_1 = (x509_noanchor_context *)VAR_0;
 (*VAR_1->inner)->end_cert(VAR_1->inner);
}
