
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct nvhdr {int nvh_type; int nvh_dsize; } ;


 unsigned char* FUNC_0 (struct nvhdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct nvhdr *VAR_4, bool VAR_5)
{
 unsigned char *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_5) {
  if ((VAR_4->nvh_type & VAR_1) == VAR_0)
   return;
  VAR_4->nvh_dsize = FUNC_6(VAR_4->nvh_dsize);
  VAR_7 = VAR_6 + VAR_4->nvh_dsize;
  VAR_4->nvh_type &= ~VAR_1;
  VAR_4->nvh_type |= VAR_0;
 } else {
  if ((VAR_4->nvh_type & VAR_1) == VAR_2)
   return;
  VAR_7 = VAR_6 + VAR_4->nvh_dsize;
  VAR_4->nvh_dsize = FUNC_3(VAR_4->nvh_dsize);
  VAR_4->nvh_type &= ~VAR_1;
  VAR_4->nvh_type |= VAR_2;
 }

 VAR_9 = 0;

 switch (VAR_4->nvh_type & VAR_3) {
 case 138:
 case 129:
 case 137:
 case 128:
  break;
 case 144:
 case 135:
 case 143:
 case 134:
  if (VAR_9 == 0)
   VAR_9 = 2;

 case 142:
 case 133:
 case 141:
 case 132:
  if (VAR_9 == 0)
   VAR_9 = 4;

 case 140:
 case 131:
 case 139:
 case 130:
  if (VAR_9 == 0)
   VAR_9 = 8;
  for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8 += VAR_9) {
   if (VAR_5) {
    switch (VAR_9) {
    case 2:
     *(uint16_t *)(void *)VAR_8 =
         FUNC_5(*(uint16_t *)(void *)VAR_8);
     break;
    case 4:
     *(uint32_t *)(void *)VAR_8 =
         FUNC_6(*(uint32_t *)(void *)VAR_8);
     break;
    case 8:
     *(uint64_t *)(void *)VAR_8 =
         FUNC_7(*(uint64_t *)(void *)VAR_8);
     break;
    default:
     FUNC_1("invalid condition");
    }
   } else {
    switch (VAR_9) {
    case 2:
     *(uint16_t *)(void *)VAR_8 =
         FUNC_2(*(uint16_t *)(void *)VAR_8);
     break;
    case 4:
     *(uint32_t *)(void *)VAR_8 =
         FUNC_3(*(uint32_t *)(void *)VAR_8);
     break;
    case 8:
     *(uint64_t *)(void *)VAR_8 =
         FUNC_4(*(uint64_t *)(void *)VAR_8);
     break;
    default:
     FUNC_1("invalid condition");
    }
   }
  }
  break;
 case 136:
  break;
 default:
  FUNC_1("unrecognized type");
 }
}
