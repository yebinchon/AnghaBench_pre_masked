
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__** inner; } ;
typedef TYPE_1__ x509_noanchor_context ;
typedef int br_x509_class ;
struct TYPE_4__ {int (* append ) (TYPE_2__**,unsigned char const*,size_t) ;} ;


 int FUNC_0 (TYPE_2__**,unsigned char const*,size_t) ;

__attribute__((used)) static void
FUNC_1(const br_x509_class **VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 x509_noanchor_context *VAR_3;

 VAR_3 = (x509_noanchor_context *)VAR_0;
 (*VAR_3->inner)->append(VAR_3->inner, VAR_1, VAR_2);
}
