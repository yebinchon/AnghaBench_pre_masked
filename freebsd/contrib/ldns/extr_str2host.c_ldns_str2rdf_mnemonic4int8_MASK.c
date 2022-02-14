
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
struct TYPE_5__ {scalar_t__ id; } ;
typedef TYPE_1__ ldns_lookup_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,char const*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int **,char const*) ;

__attribute__((used)) static ldns_status
FUNC_3(ldns_lookup_table *VAR_3,
  ldns_rdf **VAR_4, const char *VAR_5)
{
 if ((VAR_3 = FUNC_0(VAR_3, VAR_5))) {

  *VAR_4 = FUNC_1(VAR_0, (uint8_t) VAR_3->id);
  if (!*VAR_4)
   return VAR_1;
  else
   return VAR_2;
 }
 return FUNC_2(VAR_4, VAR_5);
}
