
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 scalar_t__ FUNC_0 (char**,size_t*,char*) ;
 scalar_t__ FUNC_1 (char**,size_t*,size_t) ;

int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5, VAR_6;
 if(*VAR_1 < 1) return -1;
 VAR_6 = **VAR_0;
 if(*VAR_1 < 1+VAR_6) return -1;
 (*VAR_0)++;
 (*VAR_1)--;
 VAR_4 += FUNC_0(VAR_2, VAR_3, "\"");
 for(VAR_5=0; VAR_5<VAR_6; VAR_5++)
  VAR_4 += FUNC_1(VAR_2, VAR_3, (*VAR_0)[VAR_5]);
 VAR_4 += FUNC_0(VAR_2, VAR_3, "\"");
 (*VAR_0)+=VAR_6;
 (*VAR_1)-=VAR_6;
 return VAR_4;
}
