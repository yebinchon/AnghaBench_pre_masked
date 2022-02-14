
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__** inner; } ;
typedef TYPE_1__ x509_noanchor_context ;
typedef int br_x509_pkey ;
typedef int br_x509_class ;
struct TYPE_4__ {int const* (* get_pkey ) (TYPE_2__**,unsigned int*) ;} ;


 int const* FUNC_0 (TYPE_2__**,unsigned int*) ;

__attribute__((used)) static const br_x509_pkey *
FUNC_1(const br_x509_class *const *VAR_0, unsigned *VAR_1)
{
 x509_noanchor_context *VAR_2;

 VAR_2 = (x509_noanchor_context *)VAR_0;
 return (*VAR_2->inner)->get_pkey(VAR_2->inner, VAR_1);
}
