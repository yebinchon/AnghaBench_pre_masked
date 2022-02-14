
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {unsigned int name; } ;
typedef TYPE_1__ sldns_lookup_table ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char**,size_t*,char*,unsigned int) ;

int FUNC_2(char** VAR_1, size_t* VAR_2, uint16_t VAR_3)
{
 sldns_lookup_table *VAR_4 = FUNC_0(VAR_0,
  (int)VAR_3);
 if (VAR_4 && VAR_4->name) {
  return FUNC_1(VAR_1, VAR_2, "%s", VAR_4->name);
 }
 return FUNC_1(VAR_1, VAR_2, "CLASS%u", (unsigned)VAR_3);
}
