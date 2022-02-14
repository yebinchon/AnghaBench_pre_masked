
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int device_t ;
typedef int desc ;
struct TYPE_3__ {int model; char* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,int,char*,...) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 int VAR_7, VAR_8;
 uint32_t VAR_9;
 uint16_t VAR_10, VAR_11;
 char VAR_12[64];

 VAR_9 = (uint32_t)FUNC_5(VAR_6) << 16;
 VAR_9 |= (uint32_t)FUNC_7(VAR_6) & 0x0000ffff;
 VAR_10 = FUNC_4(VAR_6);
 VAR_11 = FUNC_6(VAR_6);

 FUNC_1(VAR_12, sizeof(VAR_12));
 VAR_8 = VAR_2;
 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_5); VAR_7++) {
  if (VAR_5[VAR_7].model == VAR_9) {
   FUNC_10(VAR_12, VAR_5[VAR_7].desc, sizeof(VAR_12));
   VAR_8 = VAR_0;
   break;
  }
  if (FUNC_0(VAR_5[VAR_7].model, VAR_9) &&
      VAR_10 == VAR_3 &&
      VAR_11 == VAR_4) {
   FUNC_8(VAR_12, sizeof(VAR_12),
       "%s (0x%04x)",
       VAR_5[VAR_7].desc, FUNC_5(VAR_6));
   VAR_8 = VAR_1;
   break;
  }
 }
 if (VAR_8 == VAR_2 && VAR_10 == VAR_3 &&
     VAR_11 == VAR_4) {
  FUNC_8(VAR_12, sizeof(VAR_12), "Generic (0x%08x)", VAR_9);
  VAR_8 = VAR_1;
 }
 if (VAR_8 != VAR_2) {
  FUNC_9(VAR_12, " HDA Controller", sizeof(VAR_12));
  FUNC_2(VAR_6, VAR_12);
 }

 return (VAR_8);
}
