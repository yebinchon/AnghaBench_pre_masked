
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int sldns_rr_descriptor ;
typedef scalar_t__ sldns_rdf_type ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (scalar_t__,size_t,size_t) ;
 int FUNC_2 (int *,char const**,scalar_t__) ;
 int FUNC_3 (int *,char*,size_t,int *,size_t,size_t*,scalar_t__,scalar_t__,size_t,size_t,size_t,int *,size_t) ;
 int FUNC_4 (int *,char*,size_t,int *,size_t*,size_t*,size_t) ;
 int FUNC_5 (int *,char*,size_t*,int*,int*,size_t*,char const*,scalar_t__,size_t*) ;
 int FUNC_6 (int *,char*,char*,size_t,int*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,size_t,int*,int*,size_t*,char const*,scalar_t__,size_t*) ;
 int * FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int const*,size_t) ;
 size_t FUNC_11 (int const*) ;
 size_t FUNC_12 (int const*) ;
 int FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_16(sldns_buffer* VAR_7, char* VAR_8, size_t VAR_9,
 uint8_t* VAR_10, size_t* VAR_11, size_t VAR_12, uint16_t VAR_13,
 uint8_t* VAR_14, size_t VAR_15)
{
 const sldns_rr_descriptor *VAR_16 = FUNC_9((uint16_t)VAR_13);
 size_t VAR_17, VAR_18, VAR_19;
 size_t VAR_20 = VAR_12 + 10, VAR_21, VAR_22;
 int VAR_23 = 0, VAR_24 = 0, VAR_25, VAR_26;
 const char* VAR_27;
 sldns_rdf_type VAR_28;

 if(!VAR_16) return VAR_3;
 VAR_19 = FUNC_11(VAR_16);
 VAR_18 = FUNC_12(VAR_16);

 if(VAR_20 > *VAR_11)
  return FUNC_0(VAR_2,
   FUNC_7(VAR_7));



 for(VAR_17=0; VAR_17 < VAR_19; VAR_17++) {
  VAR_28 = FUNC_10(VAR_16, VAR_17);
  VAR_27 = FUNC_1(VAR_28, VAR_17, VAR_19);
  VAR_26 = FUNC_2(VAR_7, &VAR_27, VAR_28);

  if(!FUNC_8(VAR_7, VAR_8, VAR_9, &VAR_26,
   &VAR_24, &VAR_21, VAR_27, VAR_28,
   &VAR_22))
   break;






  if(VAR_22>=2 && FUNC_15(VAR_8, "\\#", 2) == 0 &&
   !VAR_26 && (VAR_22 == 2 || VAR_8[2]==' ')) {
   VAR_23 = 1;
   if((VAR_25=FUNC_4(VAR_7, VAR_8,
    VAR_9, VAR_10, VAR_11, &VAR_20,
    VAR_21)) != 0)
    return VAR_25;
  } else if(VAR_22 > 0 || VAR_26) {
   if(VAR_28 == VAR_0) {

    if(!FUNC_5(VAR_7, VAR_8,
     &VAR_9, &VAR_26, &VAR_24,
     &VAR_21, VAR_27,
     VAR_28, &VAR_22))
     break;
    if(!FUNC_5(VAR_7, VAR_8,
     &VAR_9, &VAR_26, &VAR_24,
     &VAR_21, VAR_27,
     VAR_28, &VAR_22))
     break;
   } else if(VAR_28 == VAR_1 &&
    FUNC_14(VAR_8, "0")!=0) {

    if(!FUNC_5(VAR_7, VAR_8,
     &VAR_9, &VAR_26, &VAR_24,
     &VAR_21, VAR_27,
     VAR_28, &VAR_22))
     break;
   }


   if((VAR_25=FUNC_3(VAR_7, VAR_8,
    VAR_9, VAR_10, *VAR_11, &VAR_20, VAR_28,
    VAR_13, VAR_17, VAR_19, VAR_12, VAR_14,
    VAR_15)) != 0) {
    return VAR_25;
   }
  }
 }
 if(!VAR_23 && VAR_17+1 < VAR_18) {
  return FUNC_0(VAR_6,
   FUNC_7(VAR_7));
 }
 while(VAR_24 != 0) {

  if(FUNC_6(VAR_7, VAR_8, "\n", VAR_9,
   &VAR_24, " \t") == -1) {
   if(VAR_24 != 0)
    return FUNC_0(VAR_5,
     FUNC_7(VAR_7));
   break;
  }
  if(FUNC_14(VAR_8, "") != 0)
   return FUNC_0(VAR_5,
    FUNC_7(VAR_7));
 }

 FUNC_13(VAR_10+VAR_12+8, (uint16_t)(VAR_20-VAR_12-10));
 *VAR_11 = VAR_20;
 return VAR_4;
}
