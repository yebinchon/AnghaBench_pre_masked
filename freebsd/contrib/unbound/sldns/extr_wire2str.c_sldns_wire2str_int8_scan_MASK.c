
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (char**,size_t*,char*,unsigned int) ;

int FUNC_1(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 int VAR_4;
 if(*VAR_1 < 1) return -1;
 VAR_4 = FUNC_0(VAR_2, VAR_3, "%u", (unsigned)**VAR_0);
 (*VAR_0)++;
 (*VAR_1)--;
 return VAR_4;
}
