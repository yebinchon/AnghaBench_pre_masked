
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
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *,size_t*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(const char* VAR_4, uint8_t* VAR_5, size_t* VAR_6)
{
 sldns_lookup_table *VAR_7 = FUNC_0(VAR_3,
  VAR_4);
 if(*VAR_6 < 2)
  return VAR_0;
 if(VAR_7) {
  FUNC_3(VAR_5, (uint16_t)VAR_7->id);
 } else {
  int VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6);
  if(VAR_8) return VAR_8;
  if(FUNC_1(VAR_5) == 0)
   return VAR_1;
 }
 *VAR_6 = 2;
 return VAR_2;
}
