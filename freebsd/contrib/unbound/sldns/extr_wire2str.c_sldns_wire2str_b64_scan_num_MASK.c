
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,size_t,char*,size_t) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2,
 size_t* VAR_3, size_t VAR_4)
{

 size_t VAR_5 = FUNC_1(VAR_4)-1;
 if(*VAR_3 < VAR_5+1) {
  (*VAR_0) += VAR_4;
  (*VAR_1) -= VAR_4;
  return (int)VAR_5;

 }
 FUNC_0(*VAR_0, VAR_4, *VAR_2, *VAR_3);
 (*VAR_0) += VAR_4;
 (*VAR_1) -= VAR_4;
 (*VAR_2) += VAR_5;
 (*VAR_3) -= VAR_5;
 return (int)VAR_5;
}
