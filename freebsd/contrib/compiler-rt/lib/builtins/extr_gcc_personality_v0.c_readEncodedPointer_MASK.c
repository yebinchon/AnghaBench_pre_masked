
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef uintptr_t uint64_t ;
typedef uintptr_t uint32_t ;
typedef uintptr_t uint16_t ;
typedef uintptr_t int64_t ;
typedef uintptr_t int32_t ;
typedef uintptr_t int16_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 uintptr_t FUNC_1 (int const**) ;

__attribute__((used)) static uintptr_t FUNC_2(const uint8_t **VAR_2, uint8_t VAR_3) {
  const uint8_t *VAR_4 = *VAR_2;
  uintptr_t VAR_5 = 0;

  if (VAR_3 == VAR_1)
    return 0;


  switch (VAR_3 & 0x0F) {
  case 141:
    VAR_5 = *((const uintptr_t *)VAR_4);
    VAR_4 += sizeof(uintptr_t);
    break;
  case 128:
    VAR_5 = FUNC_1(&VAR_4);
    break;
  case 131:
    VAR_5 = *((const uint16_t *)VAR_4);
    VAR_4 += sizeof(uint16_t);
    break;
  case 130:
    VAR_5 = *((const uint32_t *)VAR_4);
    VAR_4 += sizeof(uint32_t);
    break;
  case 129:
    VAR_5 = *((const uint64_t *)VAR_4);
    VAR_4 += sizeof(uint64_t);
    break;
  case 136:
    VAR_5 = *((const int16_t *)VAR_4);
    VAR_4 += sizeof(int16_t);
    break;
  case 135:
    VAR_5 = *((const int32_t *)VAR_4);
    VAR_4 += sizeof(int32_t);
    break;
  case 134:
    VAR_5 = *((const int64_t *)VAR_4);
    VAR_4 += sizeof(int64_t);
    break;
  case 133:
  default:

    FUNC_0();
    break;
  }


  switch (VAR_3 & 0x70) {
  case 141:

    break;
  case 137:
    VAR_5 += (uintptr_t)(*VAR_2);
    break;
  case 132:
  case 139:
  case 138:
  case 140:
  default:

    FUNC_0();
    break;
  }


  if (VAR_3 & VAR_0) {
    VAR_5 = *((const uintptr_t *)VAR_5);
  }

  *VAR_2 = VAR_4;
  return VAR_5;
}
