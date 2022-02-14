
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_stream {int dummy; } ;
struct ui_out {int dummy; } ;
struct disassemble_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (struct ui_out*,struct disassemble_info*,int ,int ,int,struct ui_stream*) ;
 struct cleanup* FUNC_2 (struct ui_out*,char*) ;

__attribute__((used)) static void
FUNC_3 (struct ui_out *VAR_0, struct disassemble_info * VAR_1,
    CORE_ADDR VAR_2, CORE_ADDR VAR_3,
    int VAR_4, struct ui_stream *VAR_5)
{
  int VAR_6 = 0;
  struct cleanup *VAR_7;

  VAR_7 = FUNC_2 (VAR_0, "asm_insns");

  VAR_6 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

  FUNC_0 (VAR_7);
}
