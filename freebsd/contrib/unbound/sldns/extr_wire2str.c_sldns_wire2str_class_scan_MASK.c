
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (char*,int **,size_t*,char**,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char**,size_t*,int ) ;

int FUNC_3(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 uint16_t VAR_4;
 if(*VAR_1 == 0) return 0;
 if(*VAR_1 < 2) return FUNC_0("Error malformed 0x", VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_4 = FUNC_1(*VAR_0);
 (*VAR_0)+=2;
 (*VAR_1)-=2;
 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
