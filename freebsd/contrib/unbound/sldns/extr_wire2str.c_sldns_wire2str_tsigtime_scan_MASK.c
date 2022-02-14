
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (char**,size_t*,char*,long long) ;

int FUNC_1(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{

 int VAR_4;
 uint64_t VAR_5 = 0;
 uint64_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 if(*VAR_1 < 6) return -1;
 VAR_6 = (*VAR_0)[0];
 VAR_7 = (*VAR_0)[1];
 VAR_8 = (*VAR_0)[2];
 VAR_9 = (*VAR_0)[3];
 VAR_10 = (*VAR_0)[4];
 VAR_11 = (*VAR_0)[5];
 VAR_5 = (VAR_6<<40) | (VAR_7<<32) | (VAR_8<<24) | (VAR_9<<16) | (VAR_10<<8) | VAR_11;

 VAR_4 = FUNC_0(VAR_2, VAR_3, "%llu", (long long)VAR_5);



 (*VAR_0)+=6;
 (*VAR_1)-=6;
 return VAR_4;
}
