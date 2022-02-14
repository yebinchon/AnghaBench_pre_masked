
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef void* u_int8_t ;
typedef int u_int16_t ;
struct TYPE_5__ {int NvramSubClass; int NvramReserved; int NvramCheckSum; scalar_t__ NvramTarget; void** NvramDeviceID; void** NvramVendorID; void** NvramSubSysID; void** NvramSubVendorID; } ;
typedef TYPE_1__* PNVRAMTYPE ;
typedef int PACB ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(PNVRAMTYPE VAR_2, PACB VAR_3)
{
 u_int16_t *VAR_4 = (u_int16_t *) VAR_2;
 u_int16_t VAR_5, VAR_6;
 u_long VAR_7, *VAR_8;

 FUNC_0(VAR_2,VAR_3);
 VAR_6 = 0;
 for (VAR_5 = 0, VAR_4 = (u_int16_t *) VAR_2;
     VAR_5 < 64; VAR_5++, VAR_4++) {
  VAR_6 += *VAR_4;
 }
 if (VAR_6 != 0x1234) {



  VAR_2->NvramSubVendorID[0] = (u_int8_t) VAR_1;
  VAR_2->NvramSubVendorID[1] =
    (u_int8_t) (VAR_1 >> 8);
  VAR_2->NvramSubSysID[0] = (u_int8_t) VAR_0;
  VAR_2->NvramSubSysID[1] =
    (u_int8_t) (VAR_0 >> 8);
  VAR_2->NvramSubClass = 0x00;
  VAR_2->NvramVendorID[0] = (u_int8_t) VAR_1;
  VAR_2->NvramVendorID[1] =
    (u_int8_t) (VAR_1 >> 8);
  VAR_2->NvramDeviceID[0] = (u_int8_t) VAR_0;
  VAR_2->NvramDeviceID[1] =
    (u_int8_t) (VAR_0 >> 8);
  VAR_2->NvramReserved = 0x00;

  for (VAR_7 = 0, VAR_8 = (u_long *) VAR_2->NvramTarget;
      VAR_7 < 16; VAR_7++, VAR_8++) {
   *VAR_8 = 0x00000077;

  }

  *VAR_8++ = 0x04000F07;

  *VAR_8++ = 0x00000015;

  for (VAR_7 = 0; VAR_7 < 12; VAR_7++, VAR_8++)
   *VAR_8 = 0x00;
  VAR_2->NvramCheckSum = 0x00;
  for (VAR_5 = 0, VAR_6 = 0, VAR_4 = (u_int16_t *) VAR_2;
      VAR_5 < 63; VAR_5++, VAR_4++)
         VAR_6 += *VAR_4;
  *VAR_4 = 0x1234 - VAR_6;
  FUNC_1(VAR_2,VAR_3);
 }
 return;
}
