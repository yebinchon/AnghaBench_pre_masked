
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char*,int **,size_t*,char**,size_t*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_4 (char**,size_t*,int ) ;
 scalar_t__ FUNC_5 (char**,size_t*,int ) ;

__attribute__((used)) static int FUNC_6(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{
 int VAR_4 = 0;
 uint16_t VAR_5, VAR_6;
 uint32_t VAR_7;
 if(*VAR_1 < 8) {
  if(*VAR_1 < 4)
   return VAR_4 + FUNC_0("; Error malformed 0x",
    VAR_0, VAR_1, VAR_2, VAR_3);

  VAR_5 = FUNC_1(*VAR_0);
  VAR_6 = FUNC_1((*VAR_0)+2);
  (*VAR_0)+=4;
  (*VAR_1)-=4;
  VAR_4 += FUNC_4(VAR_2, VAR_3, VAR_6);
  VAR_4 += FUNC_3(VAR_2, VAR_3, "\t");
  VAR_4 += FUNC_5(VAR_2, VAR_3, VAR_5);
  if(*VAR_1 == 0)
   return VAR_4 + FUNC_3(VAR_2, VAR_3, "; Error no ttl");
  return VAR_4 + FUNC_0(
   "; Error malformed ttl 0x", VAR_0, VAR_1, VAR_2, VAR_3);
 }
 VAR_5 = FUNC_1(*VAR_0);
 VAR_6 = FUNC_1((*VAR_0)+2);
 VAR_7 = FUNC_2((*VAR_0)+4);
 (*VAR_0)+=8;
 (*VAR_1)-=8;
 VAR_4 += FUNC_3(VAR_2, VAR_3, "%lu\t", (unsigned long)VAR_7);
 VAR_4 += FUNC_4(VAR_2, VAR_3, VAR_6);
 VAR_4 += FUNC_3(VAR_2, VAR_3, "\t");
 VAR_4 += FUNC_5(VAR_2, VAR_3, VAR_5);
 return VAR_4;
}
