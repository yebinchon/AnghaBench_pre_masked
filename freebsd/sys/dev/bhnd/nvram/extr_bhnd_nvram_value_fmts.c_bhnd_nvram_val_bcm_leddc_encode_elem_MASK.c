
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int led32 ;
typedef int led16 ;
typedef int ival ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;





 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,size_t,int ,size_t*,int*,size_t*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void const*,size_t,int,void*,size_t*,int) ;
 int FUNC_5 (char*,int*,int,int,void*,size_t*) ;

__attribute__((used)) static int
FUNC_6(bhnd_nvram_val *VAR_5, const void *VAR_6,
    size_t VAR_7, void *VAR_8, size_t *VAR_9, bhnd_nvram_type VAR_10)
{
 bhnd_nvram_type VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;
 uint16_t VAR_15;
 uint32_t VAR_16;
 bool VAR_17;
 union {
  uint16_t u16;
  uint32_t u32;
 } VAR_18;
 VAR_11 = FUNC_3(VAR_5);
 VAR_13 = 0;
 VAR_17 = 0;


 if (VAR_8 != ((void*)0))
  VAR_12 = *VAR_9;
 else
  VAR_12 = 0;



 if (VAR_10 == VAR_11) {
  return (FUNC_4(VAR_6, VAR_7, VAR_11, VAR_8, VAR_9,
      VAR_10));
 }



 if (VAR_11 == 130) {
  const char *VAR_19;
  uint32_t VAR_20;
  size_t VAR_21, VAR_22;


  VAR_19 = VAR_6;
  VAR_21 = sizeof(VAR_20);
  VAR_14 = FUNC_1(VAR_19, VAR_7, 0, &VAR_22, &VAR_20, &VAR_21,
      128);
  if (VAR_14)
   return (VAR_14);


  if (VAR_22 < VAR_7 && *(VAR_19+VAR_22) != '\0')
   return (VAR_0);



  VAR_6 = &VAR_18;
  if (VAR_20 & 0xFFFF0000) {
   VAR_18.u32 = VAR_20;
   VAR_11 = 128;
  } else {
   VAR_18.u16 = VAR_20;
   VAR_11 = 129;
  }
 }


 switch (VAR_11) {
 case 129: {
  VAR_15 = *(const uint16_t *)VAR_6;
  VAR_16 = ((VAR_15 & 0xFF00) << 16) | ((VAR_15 & 0x00FF) << 8);




  if (VAR_15 == VAR_3)
   VAR_16 = VAR_4;

  break;
 }

 case 128:
  VAR_16 = *(const uint32_t *)VAR_6;
  VAR_15 = ((VAR_16 >> 16) & 0xFF00) | ((VAR_16 >> 8) & 0x00FF);
  if ((VAR_16 & 0x00FF00FF) != 0 && VAR_16 != VAR_4)
   VAR_17 = 1;

  break;
 default:
  FUNC_0("unsupported backing data type: %s",
      FUNC_2(VAR_11));
 }




 switch (VAR_10) {
 case 130:



  if (!VAR_17) {
   return (FUNC_5("0x%04hX", &VAR_15,
       sizeof(VAR_15), 129, VAR_8, VAR_9));
  } else {
   return (FUNC_5("0x%04X", &VAR_16,
       sizeof(VAR_16), 128, VAR_8, VAR_9));
  }

  break;

 case 129: {

  if (VAR_17)
   return (VAR_2);


  VAR_13 += sizeof(uint16_t);
  if (VAR_12 >= VAR_13)
   *(uint16_t *)VAR_8 = VAR_15;

  break;
 }

 case 128:

  VAR_13 += sizeof(uint32_t);
  if (VAR_12 >= VAR_13)
   *(uint32_t *)VAR_8 = VAR_16;
  break;

 default:

  return (VAR_0);
 }


 *VAR_9 = VAR_13;


 if (VAR_12 < VAR_13 && VAR_8 != ((void*)0))
  return (VAR_1);

 return (0);
}
