
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char**,size_t*,scalar_t__*,int) ;
 int FUNC_2 (char*,scalar_t__**,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (char**,size_t*,char*,...) ;

int FUNC_5(uint8_t** VAR_3, size_t* VAR_4, char** VAR_5,
        size_t* VAR_6, uint8_t* VAR_7, size_t VAR_8)
{
 int VAR_9 = 0;
 uint8_t VAR_10, VAR_11;
 uint16_t VAR_12, VAR_13, VAR_14;
 VAR_9 += FUNC_4(VAR_5, VAR_6, "; EDNS:");


 if(*VAR_4 < 1+10)
  return VAR_9 + FUNC_2("Error malformed 0x",
   VAR_3, VAR_4, VAR_5, VAR_6);
 if(*VAR_3[0] != 0) {
  return VAR_9 + FUNC_2("Error nonrootdname 0x",
   VAR_3, VAR_4, VAR_5, VAR_6);
 }
 (*VAR_3)++;
 (*VAR_4)--;


 if(FUNC_3((*VAR_3)) != VAR_2) {
  return VAR_9 + FUNC_2("Error nottypeOPT 0x",
   VAR_3, VAR_4, VAR_5, VAR_6);
 }
 VAR_12 = FUNC_3((*VAR_3)+2);
 VAR_10 = (*VAR_3)[4];
 VAR_11 = (*VAR_3)[5];
 VAR_13 = FUNC_3((*VAR_3)+6);
 VAR_14 = FUNC_3((*VAR_3)+8);
 (*VAR_3)+=10;
 (*VAR_4)-=10;

 VAR_9 += FUNC_4(VAR_5, VAR_6, " version: %u;",
  (unsigned)VAR_11);
 VAR_9 += FUNC_4(VAR_5, VAR_6, " flags:");
 if((VAR_13 & VAR_0))
  VAR_9 += FUNC_4(VAR_5, VAR_6, " do");


 if(VAR_10) {
  int VAR_15 = ((int)VAR_10)<<4;
  if(VAR_7 && VAR_8 >= VAR_1)
   VAR_15 |= FUNC_0(VAR_7);
  VAR_9 += FUNC_4(VAR_5, VAR_6, " ; ext-rcode: %d", VAR_15);
 }
 VAR_9 += FUNC_4(VAR_5, VAR_6, " ; udp: %u", (unsigned)VAR_12);

 if(VAR_14) {
  if((size_t)*VAR_4 < VAR_14) {
   VAR_9 += FUNC_4(VAR_5, VAR_6,
    " ; Error EDNS rdata too short; ");
   VAR_14 = (uint16_t)*VAR_4;
  }
  VAR_9 += FUNC_1(VAR_5, VAR_6, *VAR_3, VAR_14);
  (*VAR_3) += VAR_14;
  (*VAR_4) -= VAR_14;
 }
 VAR_9 += FUNC_4(VAR_5, VAR_6, "\n");
 return VAR_9;
}
