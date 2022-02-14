
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__** inner; } ;
typedef TYPE_1__ x509_noanchor_context ;
typedef int br_x509_class ;
struct TYPE_4__ {unsigned int (* end_chain ) (TYPE_2__**) ;} ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (TYPE_2__**) ;

__attribute__((used)) static unsigned
FUNC_1(const br_x509_class **VAR_1)
{
 x509_noanchor_context *VAR_2;
 unsigned VAR_3;

 VAR_2 = (x509_noanchor_context *)VAR_1;
 VAR_3 = (*VAR_2->inner)->end_chain(VAR_2->inner);
 if (VAR_3 == VAR_0) {
  VAR_3 = 0;
 }
 return VAR_3;
}
