
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rr_class ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ ldns_lookup_table ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int ,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

ldns_rr_class
FUNC_4(const char *VAR_1)
{
 ldns_lookup_table *VAR_2;


 if (FUNC_2(VAR_1) > 5 && FUNC_3(VAR_1, "CLASS", 5) == 0) {
  return FUNC_0(VAR_1 + 5);
 }


 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2) {
  return VAR_2->id;
 }
 return 0;
}
