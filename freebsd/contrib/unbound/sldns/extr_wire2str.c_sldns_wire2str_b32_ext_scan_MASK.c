
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t*,size_t,char*,size_t) ;

int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;
 if(*VAR_1 < 1) return -1;
 VAR_4 = (*VAR_0)[0];
 if(*VAR_1 < 1+VAR_4) return -1;
 VAR_5 = FUNC_0(VAR_4);
 if(*VAR_3 < VAR_5+1) {
  (*VAR_0) += VAR_4+1;
  (*VAR_1) -= (VAR_4+1);
  return (int)VAR_5;

 }
 FUNC_1((*VAR_0)+1, VAR_4, *VAR_2, *VAR_3);
 (*VAR_0) += VAR_4+1;
 (*VAR_1) -= (VAR_4+1);
 (*VAR_2) += VAR_5;
 (*VAR_3) -= VAR_5;
 return (int)VAR_5;
}
