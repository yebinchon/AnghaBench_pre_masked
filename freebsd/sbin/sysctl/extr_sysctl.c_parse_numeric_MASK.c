
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulongval ;
typedef int uintval ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u8val ;
typedef int u64val ;
typedef int u32val ;
typedef int u16val ;
typedef int longval ;
typedef int intval ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int i8val ;
typedef int i64val ;
typedef int i32val ;
typedef int i16val ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,void const*,size_t) ;
 void* FUNC_3 (void*,size_t) ;
 int FUNC_4 (char const*,char**,char const*) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char const*,char**,int ) ;
 long FUNC_7 (char const*,char**,int ) ;
 unsigned long FUNC_8 (char const*,char**,int ) ;
 int FUNC_9 (char const*,char**,int ) ;

__attribute__((used)) static bool
FUNC_10(const char *VAR_2, const char *VAR_3, u_int VAR_4,
    void **VAR_5, size_t *VAR_6)
{
 void *VAR_7;
 const void *VAR_8;
 int8_t VAR_9;
 uint8_t VAR_10;
 int16_t VAR_11;
 uint16_t VAR_12;
 int32_t VAR_13;
 uint32_t VAR_14;
 int VAR_15;
 unsigned int VAR_16;
 long VAR_17;
 unsigned long VAR_18;
 int64_t VAR_19;
 uint64_t VAR_20;
 size_t VAR_21;
 char *VAR_22 = ((void*)0);

 VAR_1 = 0;

 switch (VAR_4 & VAR_0) {
 case 139:
  if (FUNC_5(VAR_3, "IK", 2) == 0)
   VAR_15 = FUNC_4(VAR_2, &VAR_22, VAR_3);
  else
   VAR_15 = (int)FUNC_7(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_15;
  VAR_21 = sizeof(VAR_15);
  break;
 case 129:
  VAR_16 = (int) FUNC_8(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_16;
  VAR_21 = sizeof(VAR_16);
  break;
 case 138:
  VAR_17 = FUNC_7(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_17;
  VAR_21 = sizeof(VAR_17);
  break;
 case 128:
  VAR_18 = FUNC_8(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_18;
  VAR_21 = sizeof(VAR_18);
  break;
 case 134:
  VAR_9 = (int8_t)FUNC_7(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_9;
  VAR_21 = sizeof(VAR_9);
  break;
 case 137:
  VAR_11 = (int16_t)FUNC_7(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_11;
  VAR_21 = sizeof(VAR_11);
  break;
 case 136:
  VAR_13 = (int32_t)FUNC_7(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_13;
  VAR_21 = sizeof(VAR_13);
  break;
 case 135:
  VAR_19 = FUNC_6(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_19;
  VAR_21 = sizeof(VAR_19);
  break;
 case 130:
  VAR_10 = (uint8_t)FUNC_8(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_10;
  VAR_21 = sizeof(VAR_10);
  break;
 case 133:
  VAR_12 = (uint16_t)FUNC_8(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_12;
  VAR_21 = sizeof(VAR_12);
  break;
 case 132:
  VAR_14 = (uint32_t)FUNC_8(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_14;
  VAR_21 = sizeof(VAR_14);
  break;
 case 131:
  VAR_20 = FUNC_9(VAR_2, &VAR_22, 0);
  VAR_8 = &VAR_20;
  VAR_21 = sizeof(VAR_20);
  break;
 default:

  FUNC_0();
 }

 if (VAR_1 != 0 || VAR_22 == VAR_2 ||
     (VAR_22 != ((void*)0) && *VAR_22 != '\0'))
  return (0);

 VAR_7 = FUNC_3(*VAR_5, *VAR_6 + VAR_21);
 if (VAR_7 == ((void*)0))
  FUNC_1(1, "out of memory");
 FUNC_2((char *)VAR_7 + *VAR_6, VAR_8, VAR_21);
 *VAR_5 = VAR_7;
 *VAR_6 += VAR_21;

 return (1);
}
