
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dos_partition {int dp_flag; } ;
struct TYPE_2__ {struct dos_partition* parts; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_4)
{
 struct dos_partition *VAR_5 = &VAR_3.parts[0];
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = -1;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if ((VAR_5[VAR_7].dp_flag & VAR_0) == 0)
   continue;
  FUNC_2("Partition %d is marked active\n", VAR_7 + 1);
  if (VAR_6 == -1)
   VAR_6 = VAR_7 + 1;
 }
 if (VAR_2 && VAR_4 != -1)
  VAR_6 = VAR_4;
 else if (VAR_6 == -1)
  VAR_6 = 1;

 if (!FUNC_1("Do you want to change the active partition?"))
  return;
setactive:
 do {
  VAR_8 = VAR_6;
  FUNC_0("active partition", VAR_8, VAR_9, 0);
  if (VAR_8 < 1 || VAR_8 > 4) {
   FUNC_2("Active partition number must be in range 1-4."
     "  Try again.\n");
   goto setactive;
  }
  VAR_6 = VAR_8;
 } while (!FUNC_1("Are you happy with this choice"));
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_5[VAR_7].dp_flag = 0;
 if (VAR_6 > 0 && VAR_6 <= VAR_1)
  VAR_5[VAR_6-1].dp_flag = VAR_0;
}
