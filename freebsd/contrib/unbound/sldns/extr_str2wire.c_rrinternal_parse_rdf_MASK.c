
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int sldns_rdf_type ;
typedef int sldns_buffer ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,char*,char*,size_t) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (char*,int *,size_t*,int *,size_t) ;
 int FUNC_6 (char*,int *,size_t*,int ) ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(sldns_buffer* VAR_3, char* VAR_4, size_t VAR_5,
 uint8_t* VAR_6, size_t VAR_7, size_t* VAR_8, sldns_rdf_type VAR_9,
 uint16_t VAR_10, size_t VAR_11, size_t VAR_12, size_t VAR_13,
 uint8_t* VAR_14, size_t VAR_15)
{
 size_t VAR_16;
 int VAR_17;

 switch(VAR_9) {
 case 129:

  if(FUNC_7(VAR_4, "@") == 0) {
   uint8_t* VAR_18;
   size_t VAR_19;
   if(VAR_14) {
    VAR_19 = VAR_15;
    VAR_18 = VAR_14;
   } else if(VAR_10 == VAR_0) {
    VAR_19 = VAR_13;
    VAR_18 = VAR_6;
   } else {
    VAR_19 = 1;
    VAR_18 = (uint8_t*)"\0";
   }
   if((*VAR_8) + VAR_19 > VAR_7)
    return FUNC_0(
     VAR_1,
     FUNC_4(VAR_3));
   FUNC_2(VAR_6+*VAR_8, VAR_18, VAR_19);
   (*VAR_8) += VAR_19;
  } else {
   size_t VAR_20 = VAR_7 - (*VAR_8);
   int VAR_21 = FUNC_5(VAR_4,
    VAR_6+*VAR_8, &VAR_20, VAR_14, VAR_15);
   if(VAR_21) return FUNC_1(VAR_21,
    FUNC_4(VAR_3)-FUNC_8(VAR_4));
   (*VAR_8) += VAR_20;
  }
  return VAR_2;

 case 128:
 case 130:



  if(VAR_11 == VAR_12 - 1) {
   size_t VAR_22 = FUNC_8(VAR_4);
   (void)FUNC_3(VAR_3, VAR_4+VAR_22, "\n",
    VAR_5 - VAR_22);
  }
  break;
 default:
  break;
 }

 VAR_16 = VAR_7 - (*VAR_8);
 if((VAR_17=FUNC_6(VAR_4, VAR_6+(*VAR_8), &VAR_16,
  VAR_9)) != 0)
  return FUNC_1(VAR_17,
   FUNC_4(VAR_3)-FUNC_8(VAR_4));
 *VAR_8 += VAR_16;
 return VAR_2;
}
