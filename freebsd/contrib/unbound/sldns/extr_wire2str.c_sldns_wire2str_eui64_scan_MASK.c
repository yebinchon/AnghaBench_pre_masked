
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char**,size_t*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_1(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 int VAR_4;
 if(*VAR_1 < 8)
  return -1;
 VAR_4 = FUNC_0(VAR_2, VAR_3, "%.2x-%.2x-%.2x-%.2x-%.2x-%.2x-%.2x-%.2x",
  (*VAR_0)[0], (*VAR_0)[1], (*VAR_0)[2], (*VAR_0)[3], (*VAR_0)[4], (*VAR_0)[5],
  (*VAR_0)[6], (*VAR_0)[7]);
 (*VAR_0)+=8;
 (*VAR_1)-=8;
 return VAR_4;
}
