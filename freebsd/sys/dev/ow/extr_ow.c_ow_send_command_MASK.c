
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_timing {int dummy; } ;
struct ow_cmd {int rom_len; int rom_read_len; int* rom_read; int xpt_len; int flags; int* xpt_read; int xpt_read_len; int * xpt_cmd; int * rom_cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ow_timing*,int*) ;
 int FUNC_1 (int ,struct ow_timing*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ,struct ow_timing*,int*) ;
 int FUNC_6 (int ,struct ow_timing*,int ) ;
 struct ow_timing VAR_3 ;
 struct ow_timing VAR_4 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, device_t VAR_6, struct ow_cmd *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 device_t VAR_12;
 struct ow_timing *VAR_13;

 VAR_12 = FUNC_2(VAR_5);




 VAR_11 = 4;
 do {
  FUNC_1(VAR_12, &VAR_4, &VAR_8);
  if (VAR_8 == 1)
   FUNC_3(VAR_5, "Reset said no device on bus?.\n");
 } while (VAR_8 == 1 && VAR_11-- > 0);
 if (VAR_8 == 1) {
  FUNC_3(VAR_5, "Reset said the device wasn't there.\n");
  return VAR_0;
 }
 if (VAR_8 == -1) {
  FUNC_3(VAR_5, "Reset discovered bus wired wrong.\n");
  return VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->rom_len; VAR_9++)
  FUNC_6(VAR_12, &VAR_4, VAR_7->rom_cmd[VAR_9]);
 for (VAR_9 = 0; VAR_9 < VAR_7->rom_read_len; VAR_9++)
  FUNC_5(VAR_12, &VAR_4, VAR_7->rom_read + VAR_9);
 if (VAR_7->xpt_len) {
  VAR_13 = (VAR_7->flags & VAR_1) ?
      &VAR_3 : &VAR_4;
  for (VAR_9 = 0; VAR_9 < VAR_7->xpt_len; VAR_9++)
   FUNC_6(VAR_12, VAR_13, VAR_7->xpt_cmd[VAR_9]);
  if (VAR_7->flags & VAR_2) {
   FUNC_4(VAR_7->xpt_read, 0, (VAR_7->xpt_read_len + 7) / 8);
   for (VAR_9 = 0; VAR_9 < VAR_7->xpt_read_len; VAR_9++) {
    FUNC_0(VAR_12, VAR_13, &VAR_10);
    VAR_7->xpt_read[VAR_9 / 8] |= VAR_10 << (VAR_9 % 8);
   }
  } else {
   for (VAR_9 = 0; VAR_9 < VAR_7->xpt_read_len; VAR_9++)
    FUNC_5(VAR_12, VAR_13, VAR_7->xpt_read + VAR_9);
  }
 }
 return 0;
}
