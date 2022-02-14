
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int buf ;


 int FUNC_0 (int ,int,long,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int*) ;
 scalar_t__ FUNC_5 (int ,int ,char*,long*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_0)
{
 char VAR_1[64];
 long int VAR_2;
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_6(VAR_1, sizeof(VAR_1), "map.%d.ath_fixup_addr", VAR_4);
  if (FUNC_5(FUNC_1(VAR_0),
      FUNC_2(VAR_0), VAR_1, &VAR_2) != 0)
   break;
  FUNC_6(VAR_1, sizeof(VAR_1), "map.%d.ath_fixup_size", VAR_4);
  if (FUNC_4(FUNC_1(VAR_0),
      FUNC_2(VAR_0), VAR_1, &VAR_3) != 0)
   break;
  FUNC_3(VAR_0, "map.%d.ath_fixup_addr=0x%08x; size=%d\n",
      VAR_4, (int) VAR_2, VAR_3);
  (void) FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3);
        }

        return (0);
}
