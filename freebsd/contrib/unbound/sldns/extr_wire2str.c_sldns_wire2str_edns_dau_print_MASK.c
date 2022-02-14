
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ sldns_lookup_table ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*,int) ;

int FUNC_2(char** VAR_1, size_t* VAR_2, uint8_t* VAR_3,
 size_t VAR_4)
{
 sldns_lookup_table *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;
 for(VAR_6=0; VAR_6<VAR_4; VAR_6++) {
  VAR_5 = FUNC_0(VAR_0, (int)VAR_3[VAR_6]);
  if(VAR_5 && VAR_5->name)
   VAR_7 += FUNC_1(VAR_1, VAR_2, " %s", VAR_5->name);
  else VAR_7 += FUNC_1(VAR_1, VAR_2, " %d", (int)VAR_3[VAR_6]);
 }
 return VAR_7;
}
