
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef void* uint16_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__**,size_t*,char**,size_t*) ;
 void* FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__**,size_t*,char**,size_t*) ;
 int FUNC_3 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_4 (char**,size_t*,void*) ;
 scalar_t__ FUNC_5 (scalar_t__**,size_t*,char**,size_t*,scalar_t__*,size_t) ;
 int FUNC_6 (scalar_t__**,size_t*,char**,size_t*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_7 (scalar_t__**,size_t*,char**,size_t*,void*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_8 (char**,size_t*,scalar_t__*,size_t,size_t,void*) ;
 scalar_t__ FUNC_9 (char**,size_t*,void*) ;

int FUNC_10(uint8_t** VAR_1, size_t* VAR_2, char** VAR_3, size_t* VAR_4,
 uint8_t* VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;
 uint8_t* VAR_8 = *VAR_1;
 size_t VAR_9 = *VAR_2, VAR_10, VAR_11, VAR_12;
 uint16_t VAR_13 = 0;

 if(*VAR_2 >= 3 && (*VAR_1)[0]==0 &&
  FUNC_1((*VAR_1)+1)==VAR_0) {

  return FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }



 VAR_7 += FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 VAR_7 += FUNC_3(VAR_3, VAR_4, "\t");
 VAR_10 = VAR_9-(*VAR_2);
 if(*VAR_2 == 4) {

  uint16_t VAR_14 = FUNC_1(*VAR_1);
  uint16_t VAR_15 = FUNC_1((*VAR_1)+2);
  (*VAR_1)+=4;
  (*VAR_2)-=4;
  VAR_7 += FUNC_4(VAR_3, VAR_4, VAR_15);
  VAR_7 += FUNC_3(VAR_3, VAR_4, "\t");
  VAR_7 += FUNC_9(VAR_3, VAR_4, VAR_14);
  VAR_7 += FUNC_3(VAR_3, VAR_4, " ; Error no ttl,rdata\n");
  return VAR_7;
 }
 if(*VAR_2 < 8) {
  if(*VAR_2 == 0)
   return VAR_7 + FUNC_3(VAR_3, VAR_4, ";Error missing RR\n");
  VAR_7 += FUNC_0(";Error partial RR 0x", VAR_1, VAR_2, VAR_3, VAR_4);
  return VAR_7 + FUNC_3(VAR_3, VAR_4, "\n");
 }
 VAR_13 = FUNC_1(*VAR_1);
 VAR_7 += FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_7 += FUNC_3(VAR_3, VAR_4, "\t");


 if(*VAR_2 < 2) {
  if(*VAR_2 == 0)
   return VAR_7 + FUNC_3(VAR_3, VAR_4, ";Error missing rdatalen\n");
  VAR_7 += FUNC_0(";Error missing rdatalen 0x",
   VAR_1, VAR_2, VAR_3, VAR_4);
  return VAR_7 + FUNC_3(VAR_3, VAR_4, "\n");
 }
 VAR_11 = FUNC_1(*VAR_1);
 VAR_12 = VAR_11;
 (*VAR_1)+=2;
 (*VAR_2)-=2;
 if(*VAR_2 < VAR_11) {
  VAR_7 += FUNC_3(VAR_3, VAR_4, "\\# %u ", (unsigned)VAR_11);
  if(*VAR_2 == 0)
   return VAR_7 + FUNC_3(VAR_3, VAR_4, ";Error missing rdata\n");
  VAR_7 += FUNC_0(";Error partial rdata 0x", VAR_1, VAR_2, VAR_3, VAR_4);
  return VAR_7 + FUNC_3(VAR_3, VAR_4, "\n");
 }
 VAR_7 += FUNC_7(VAR_1, &VAR_11, VAR_3, VAR_4, VAR_13, VAR_5, VAR_6);
 (*VAR_2) -= (VAR_12-VAR_11);


 VAR_7 += FUNC_8(VAR_3, VAR_4, VAR_8, VAR_9, VAR_10,
  VAR_13);
 VAR_7 += FUNC_3(VAR_3, VAR_4, "\n");
 return VAR_7;
}
