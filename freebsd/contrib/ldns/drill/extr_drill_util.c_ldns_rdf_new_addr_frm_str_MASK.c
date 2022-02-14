
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rdf ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char*) ;

ldns_rdf *
FUNC_1(char *VAR_2)
{
 ldns_rdf *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3) {

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (!VAR_3) {
   return ((void*)0);
  }
 }
 return VAR_3;
}
