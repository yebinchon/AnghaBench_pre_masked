
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct nvhdr {int nvh_type; char* nvh_name; } ;
struct nv {scalar_t__ nv_error; int nv_ebuf; } ;
typedef int intmax_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 unsigned char* FUNC_0 (struct nvhdr*) ;
 size_t FUNC_1 (struct nvhdr*) ;
 size_t FUNC_2 (struct nvhdr*) ;
 int FUNC_3 (struct nv*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 unsigned char* FUNC_6 (int ,size_t*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct nv*,int *) ;
 int FUNC_11 (char*,...) ;

void
FUNC_12(struct nv *VAR_4)
{
 struct nvhdr *VAR_5;
 unsigned char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;
 unsigned int VAR_10;
 bool VAR_11;

 if (FUNC_10(VAR_4, ((void*)0)) == -1) {
  FUNC_11("error: %d\n", VAR_3);
  return;
 }

 FUNC_3(VAR_4);
 FUNC_5(VAR_4->nv_error == 0);

 VAR_7 = FUNC_6(VAR_4->nv_ebuf, &VAR_9);
 while (VAR_9 > 0) {
  FUNC_5(VAR_9 >= sizeof(*VAR_5) + 2);
  VAR_5 = (struct nvhdr *)VAR_7;
  FUNC_5(VAR_9 >= FUNC_2(VAR_5));
  VAR_11 = ((VAR_5->nvh_type & VAR_0) == VAR_1);
  VAR_8 = FUNC_1(VAR_5);
  VAR_6 = FUNC_0(VAR_5);
  FUNC_11("  %s", VAR_5->nvh_name);
  switch (VAR_5->nvh_type & VAR_2) {
  case 138:
   FUNC_11("(int8): %jd", (intmax_t)(*(int8_t *)VAR_6));
   break;
  case 129:
   FUNC_11("(uint8): %ju", (uintmax_t)(*(uint8_t *)VAR_6));
   break;
  case 144:
   FUNC_11("(int16): %jd", VAR_11 ?
       (intmax_t)FUNC_7(*(int16_t *)(void *)VAR_6) :
       (intmax_t)*(int16_t *)(void *)VAR_6);
   break;
  case 135:
   FUNC_11("(uint16): %ju", VAR_11 ?
       (uintmax_t)FUNC_7(*(uint16_t *)(void *)VAR_6) :
       (uintmax_t)*(uint16_t *)(void *)VAR_6);
   break;
  case 142:
   FUNC_11("(int32): %jd", VAR_11 ?
       (intmax_t)FUNC_8(*(int32_t *)(void *)VAR_6) :
       (intmax_t)*(int32_t *)(void *)VAR_6);
   break;
  case 133:
   FUNC_11("(uint32): %ju", VAR_11 ?
       (uintmax_t)FUNC_8(*(uint32_t *)(void *)VAR_6) :
       (uintmax_t)*(uint32_t *)(void *)VAR_6);
   break;
  case 140:
   FUNC_11("(int64): %jd", VAR_11 ?
       (intmax_t)FUNC_9(*(int64_t *)(void *)VAR_6) :
       (intmax_t)*(int64_t *)(void *)VAR_6);
   break;
  case 131:
   FUNC_11("(uint64): %ju", VAR_11 ?
       (uintmax_t)FUNC_9(*(uint64_t *)(void *)VAR_6) :
       (uintmax_t)*(uint64_t *)(void *)VAR_6);
   break;
  case 137:
   FUNC_11("(int8 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    FUNC_11(" %jd", (intmax_t)((int8_t *)VAR_6)[VAR_10]);
   break;
  case 128:
   FUNC_11("(uint8 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    FUNC_11(" %ju", (uintmax_t)((uint8_t *)VAR_6)[VAR_10]);
   break;
  case 143:
   FUNC_11("(int16 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8 / 2; VAR_10++) {
    FUNC_11(" %jd", VAR_11 ?
        (intmax_t)FUNC_7(((int16_t *)(void *)VAR_6)[VAR_10]) :
        (intmax_t)((int16_t *)(void *)VAR_6)[VAR_10]);
   }
   break;
  case 134:
   FUNC_11("(uint16 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8 / 2; VAR_10++) {
    FUNC_11(" %ju", VAR_11 ?
        (uintmax_t)FUNC_7(((uint16_t *)(void *)VAR_6)[VAR_10]) :
        (uintmax_t)((uint16_t *)(void *)VAR_6)[VAR_10]);
   }
   break;
  case 141:
   FUNC_11("(int32 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8 / 4; VAR_10++) {
    FUNC_11(" %jd", VAR_11 ?
        (intmax_t)FUNC_8(((int32_t *)(void *)VAR_6)[VAR_10]) :
        (intmax_t)((int32_t *)(void *)VAR_6)[VAR_10]);
   }
   break;
  case 132:
   FUNC_11("(uint32 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8 / 4; VAR_10++) {
    FUNC_11(" %ju", VAR_11 ?
        (uintmax_t)FUNC_8(((uint32_t *)(void *)VAR_6)[VAR_10]) :
        (uintmax_t)((uint32_t *)(void *)VAR_6)[VAR_10]);
   }
   break;
  case 139:
   FUNC_11("(int64 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8 / 8; VAR_10++) {
    FUNC_11(" %ju", VAR_11 ?
        (uintmax_t)FUNC_9(((uint64_t *)(void *)VAR_6)[VAR_10]) :
        (uintmax_t)((uint64_t *)(void *)VAR_6)[VAR_10]);
   }
   break;
  case 130:
   FUNC_11("(uint64 array):");
   for (VAR_10 = 0; VAR_10 < VAR_8 / 8; VAR_10++) {
    FUNC_11(" %ju", VAR_11 ?
        (uintmax_t)FUNC_9(((uint64_t *)(void *)VAR_6)[VAR_10]) :
        (uintmax_t)((uint64_t *)(void *)VAR_6)[VAR_10]);
   }
   break;
  case 136:
   FUNC_11("(string): %s", (char *)VAR_6);
   break;
  default:
   FUNC_4("invalid condition");
  }
  FUNC_11("\n");
  VAR_7 += FUNC_2(VAR_5);
  VAR_9 -= FUNC_2(VAR_5);
 }
}
