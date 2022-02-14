
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rdf ;
struct TYPE_3__ {int * name; } ;
typedef TYPE_1__ ldns_dnssec_name ;



ldns_rdf *
FUNC_0(const ldns_dnssec_name *VAR_0)
{
 if (VAR_0) {
  return VAR_0->name;
 }
 return ((void*)0);
}
