
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 struct frame_id FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct frame_info*) ;
 int FUNC_4 (struct frame_info*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static struct frame_id
FUNC_6 (struct gdbarch *VAR_4, struct frame_info *VAR_5)
{
  char VAR_6[8];
  CORE_ADDR VAR_7, VAR_8;

  FUNC_4 (VAR_5, VAR_3, VAR_6);
  VAR_7 = FUNC_0 (VAR_6, 8);

  FUNC_4 (VAR_5, VAR_0, VAR_6);
  VAR_8 = FUNC_0 (VAR_6, 8);

  if (VAR_2 >= 1)
    FUNC_1 (VAR_1,
   "dummy frame id: code 0x%s, stack 0x%s, special 0x%s\n",
   FUNC_5 (FUNC_3 (VAR_5)),
   FUNC_5 (VAR_7), FUNC_5 (VAR_8));

  return FUNC_2 (VAR_7, FUNC_3 (VAR_5), VAR_8);
}
