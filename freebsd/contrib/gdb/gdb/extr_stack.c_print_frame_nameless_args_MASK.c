
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct ui_file*,char*,...) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;
 long FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3 (struct frame_info *VAR_1, long VAR_2, int VAR_3,
      int VAR_4, struct ui_file *VAR_5)
{
  int VAR_6;
  CORE_ADDR VAR_7;
  long VAR_8;

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
      VAR_0;
      VAR_7 = FUNC_1 (VAR_1);
      if (!VAR_7)
 return;
      VAR_8 = FUNC_2 (VAR_7 + VAR_2, sizeof (int));
      if (!VAR_4)
 FUNC_0 (VAR_5, ", ");
      FUNC_0 (VAR_5, "%ld", VAR_8);
      VAR_4 = 0;
      VAR_2 += sizeof (int);
    }
}
