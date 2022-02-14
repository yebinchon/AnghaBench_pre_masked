
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;


 scalar_t__ FUNC_0 (char**,size_t*,int ) ;
 int FUNC_1 (char**,size_t*,char*,...) ;

int FUNC_2(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3,
 uint8_t* VAR_4, size_t VAR_5)
{
 int VAR_6 = 0;

 uint8_t* VAR_7 = *VAR_0;
 unsigned VAR_8, VAR_9=0;
 const unsigned VAR_10 = 1000;
 int VAR_11 = 1;
 if(*VAR_1 == 0) return FUNC_1(VAR_2, VAR_3, "ErrorMissingDname");
 if(*VAR_7 == 0) {
  (*VAR_0)++;
  (*VAR_1)--;
  return FUNC_1(VAR_2, VAR_3, ".");
 }
 while(*VAR_7) {

  uint8_t VAR_12 = *VAR_7++;
  if(VAR_11) { (*VAR_0)++; (*VAR_1)--; }


  if((VAR_12&0xc0) == 0xc0) {

   uint16_t VAR_13 = 0;
   if(VAR_11 && *VAR_1 == 0)
    return VAR_6 + FUNC_1(VAR_2, VAR_3,
     "ErrorPartialDname");
   else if(!VAR_11 && VAR_7+1 > VAR_4+VAR_5)
    return VAR_6 + FUNC_1(VAR_2, VAR_3,
     "ErrorPartialDname");
   VAR_13 = ((VAR_12&0x3f)<<8) | *VAR_7;
   if(VAR_11) { (*VAR_0)++; (*VAR_1)--; }

   if(!VAR_4 || VAR_13 >= VAR_5)
    return VAR_6 + FUNC_1(VAR_2, VAR_3,
     "ErrorComprPtrOutOfBounds");
   if(VAR_9++ > VAR_10)
    return VAR_6 + FUNC_1(VAR_2, VAR_3,
     "ErrorComprPtrLooped");
   VAR_11 = 0;
   VAR_7 = VAR_4+VAR_13;
   continue;
  } else if((VAR_12&0xc0)) {

   VAR_6 += FUNC_1(VAR_2, VAR_3,
    "ErrorLABELTYPE%xIsUnknown",
    (int)(VAR_12&0xc0));
   return VAR_6;
  }


  if(VAR_11 && *VAR_1 < (size_t)VAR_12)
   VAR_12 = (uint8_t)*VAR_1;
  else if(!VAR_11 && VAR_7+(size_t)VAR_12 > VAR_4+VAR_5)
   VAR_12 = (uint8_t)(VAR_4 + VAR_5 - VAR_7);
  for(VAR_8=0; VAR_8<(unsigned)VAR_12; VAR_8++) {
   VAR_6 += FUNC_0(VAR_2, VAR_3, *VAR_7++);
  }
  if(VAR_11) {
   (*VAR_0) += VAR_12;
   (*VAR_1) -= VAR_12;
   if(*VAR_1 == 0) break;
  }
  VAR_6 += FUNC_1(VAR_2, VAR_3, ".");
 }

 if(VAR_11 && *VAR_1 > 0) { (*VAR_0)++; (*VAR_1)--; }

 if(VAR_6 == 0) VAR_6 += FUNC_1(VAR_2, VAR_3, ".");
 return VAR_6;
}
