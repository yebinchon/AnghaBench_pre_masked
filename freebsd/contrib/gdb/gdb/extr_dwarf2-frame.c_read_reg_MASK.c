
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct frame_info*,int,char*) ;
 struct gdbarch* FUNC_4 (struct frame_info*) ;
 int FUNC_5 (struct gdbarch*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_6 (void *VAR_1, int VAR_2)
{
  struct frame_info *VAR_3 = (struct frame_info *) VAR_1;
  struct gdbarch *VAR_4 = FUNC_4 (VAR_3);
  int VAR_5;
  char *VAR_6;

  VAR_5 = FUNC_0 (VAR_2);

  VAR_6 = (char *) FUNC_1 (FUNC_5 (VAR_4, VAR_5));
  FUNC_3 (VAR_3, VAR_5, VAR_6);
  return FUNC_2 (VAR_6, VAR_0);
}
