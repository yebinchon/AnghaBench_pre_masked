
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,char*,int) ;
 unsigned long FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (struct gdbarch *VAR_2, struct ui_file *VAR_3,
        struct frame_info *VAR_4, const char *VAR_5)
{
  unsigned long VAR_6 = FUNC_3 (VAR_0);
  int VAR_7;

  VAR_7 = (VAR_6 >> 24) & 127;
  FUNC_2 ("%s FPU type %d\n",
   (VAR_6 & (1 << 31)) ? "Hardware" : "Software",
   VAR_7);
  FUNC_0 ("mask: ", VAR_1);
  FUNC_1 (VAR_6 >> 16);
  FUNC_0 ("flags: ", VAR_1);
  FUNC_1 (VAR_6);
}
