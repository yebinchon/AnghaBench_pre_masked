
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {unsigned int _name; } ;
typedef TYPE_1__ sldns_rr_descriptor ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char**,size_t*,char*,unsigned int) ;

int FUNC_2(char** VAR_0, size_t* VAR_1, uint16_t VAR_2)
{
 const sldns_rr_descriptor *VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 && VAR_3->_name) {
  return FUNC_1(VAR_0, VAR_1, "%s", VAR_3->_name);
 }
 return FUNC_1(VAR_0, VAR_1, "TYPE%u", (unsigned)VAR_2);
}
