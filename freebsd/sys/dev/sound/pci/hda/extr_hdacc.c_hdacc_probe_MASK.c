
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int device_t ;
typedef int buf ;
struct TYPE_3__ {int id; scalar_t__ revid; char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 uint32_t VAR_3, VAR_4;
 char VAR_5[128];
 int VAR_6;

 VAR_3 = ((uint32_t)FUNC_5(VAR_2) << 16) + FUNC_2(VAR_2);
 VAR_4 = ((uint32_t)FUNC_3(VAR_2) << 8) + FUNC_4(VAR_2);

 for (VAR_6 = 0; VAR_6 < FUNC_6(VAR_1); VAR_6++) {
  if (!FUNC_0(VAR_1[VAR_6].id, VAR_3))
   continue;
  if (VAR_1[VAR_6].revid != 0 &&
      VAR_1[VAR_6].revid != VAR_4)
   continue;
  break;
 }
 if (VAR_6 < FUNC_6(VAR_1)) {
  if ((VAR_1[VAR_6].id & 0xffff) != 0xffff)
   FUNC_9(VAR_5, VAR_1[VAR_6].name, sizeof(VAR_5));
  else
   FUNC_7(VAR_5, sizeof(VAR_5), "%s (0x%04x)",
       VAR_1[VAR_6].name, FUNC_2(VAR_2));
 } else
  FUNC_7(VAR_5, sizeof(VAR_5), "Generic (0x%04x)", VAR_3);
 FUNC_8(VAR_5, " HDA CODEC", sizeof(VAR_5));
 FUNC_1(VAR_2, VAR_5);
 return (VAR_0);
}
