
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int clidr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(void )
{
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 FUNC_9("LoUU:%d LoC:%d LoUIS:%d \n",
     FUNC_6(VAR_8.clidr) + 1,
     FUNC_4(VAR_8.clidr) + 1,
     FUNC_5(VAR_8.clidr) + 1);

 for (VAR_15 = 0; VAR_15 < 7; VAR_15++) {
  VAR_9 = FUNC_3(VAR_8.clidr, VAR_15);
  if (VAR_9 == 0)
   break;
  FUNC_9("Cache level %d:\n", VAR_15 + 1);
  if (VAR_9 == VAR_0 || VAR_9 == VAR_3 ||
      VAR_9 == VAR_2) {
   FUNC_8(VAR_15 << 1);
   VAR_10 = FUNC_7();
   VAR_13 = FUNC_0(VAR_10) + 1;
   VAR_12 = FUNC_2(VAR_10) + 1;
   VAR_14 = 1 << (FUNC_1(VAR_10) + 4);
   VAR_11 = (VAR_13 * VAR_12 * VAR_14) / 1024;

   if (VAR_9 == VAR_3)
    FUNC_9(" %dKB/%dB %d-way unified cache",
        VAR_11, VAR_14,VAR_13);
   else
    FUNC_9(" %dKB/%dB %d-way data cache",
        VAR_11, VAR_14, VAR_13);
   if (VAR_10 & VAR_7)
    FUNC_9(" WT");
   if (VAR_10 & VAR_6)
    FUNC_9(" WB");
    if (VAR_10 & VAR_4)
    FUNC_9(" Read-Alloc");
   if (VAR_10 & VAR_5)
    FUNC_9(" Write-Alloc");
   FUNC_9("\n");
  }

  if (VAR_9 == VAR_1 || VAR_9 == VAR_2) {
   FUNC_8(VAR_15 << 1 | 1);
   VAR_10 = FUNC_7();
   VAR_13 = FUNC_0(VAR_10) + 1;
   VAR_12 = FUNC_2(VAR_10) + 1;
   VAR_14 = 1 << (FUNC_1(VAR_10) + 4);
   VAR_11 = (VAR_13 * VAR_12 * VAR_14) / 1024;
    FUNC_9(" %dKB/%dB %d-way instruction cache",
       VAR_11, VAR_14, VAR_13);
   if (VAR_10 & VAR_7)
    FUNC_9(" WT");
   if (VAR_10 & VAR_6)
    FUNC_9(" WB");
   if (VAR_10 & VAR_4)
    FUNC_9(" Read-Alloc");
   if (VAR_10 & VAR_5)
    FUNC_9(" Write-Alloc");
   FUNC_9("\n");
  }
 }
 FUNC_8(0);
}
