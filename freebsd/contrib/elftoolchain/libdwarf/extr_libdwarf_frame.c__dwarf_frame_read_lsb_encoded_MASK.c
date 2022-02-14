
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_7__ {int cie_addrsize; } ;
struct TYPE_6__ {scalar_t__ (* read ) (int*,scalar_t__*,int) ;} ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;
typedef TYPE_2__* Dwarf_Cie ;
typedef scalar_t__ Dwarf_Addr ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_7 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (int*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_10(Dwarf_Debug VAR_4, Dwarf_Cie VAR_5, uint64_t *VAR_6,
    uint8_t *VAR_7, uint64_t *VAR_8, uint8_t VAR_9, Dwarf_Addr VAR_10,
    Dwarf_Error *VAR_11)
{
 uint8_t VAR_12;

 if (VAR_9 == VAR_2)
  return (VAR_1);

 VAR_12 = VAR_9 & 0xf0;
 VAR_9 &= 0x0f;

 switch (VAR_9) {
 case 136:
  *VAR_6 = VAR_4->read(VAR_7, VAR_8, VAR_5->cie_addrsize);
  break;
 case 128:
  *VAR_6 = FUNC_2(VAR_7, VAR_8);
  break;
 case 131:
  *VAR_6 = VAR_4->read(VAR_7, VAR_8, 2);
  break;
 case 130:
  *VAR_6 = VAR_4->read(VAR_7, VAR_8, 4);
  break;
 case 129:
  *VAR_6 = VAR_4->read(VAR_7, VAR_8, 8);
  break;
 case 132:
  *VAR_6 = FUNC_1(VAR_7, VAR_8);
  break;
 case 135:
  *VAR_6 = (int16_t) VAR_4->read(VAR_7, VAR_8, 2);
  break;
 case 134:
  *VAR_6 = (int32_t) VAR_4->read(VAR_7, VAR_8, 4);
  break;
 case 133:
  *VAR_6 = VAR_4->read(VAR_7, VAR_8, 8);
  break;
 default:
  FUNC_0(VAR_4, VAR_11, VAR_0);
  return (VAR_0);
 }

 if (VAR_12 == VAR_3) {



  switch (VAR_9) {
  case 128:
  case 131:
  case 130:
  case 129:
   *VAR_6 += VAR_10;
   break;
  case 132:
  case 135:
  case 134:
  case 133:
   *VAR_6 = VAR_10 + (int64_t) *VAR_6;
   break;
  default:

   break;
  }
 }



 return (VAR_1);
}
