
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ id; } ;
typedef TYPE_1__ sldns_lookup_table ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*,int *,size_t*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 sldns_lookup_table *VAR_6 = FUNC_0(VAR_2, VAR_3);
 if(*VAR_5 < 2)
  return VAR_0;
 if(VAR_6) {
  FUNC_2(VAR_4, (uint16_t)VAR_6->id);
  *VAR_5 = 2;
 } else {

  return FUNC_1(VAR_3, VAR_4, VAR_5);
 }
 return VAR_1;
}
