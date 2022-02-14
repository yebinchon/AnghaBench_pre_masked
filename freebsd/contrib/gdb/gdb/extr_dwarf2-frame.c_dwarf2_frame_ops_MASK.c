
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct dwarf2_frame_ops {int dummy; } ;


 int VAR_0 ;
 struct dwarf2_frame_ops* FUNC_0 (struct gdbarch*) ;
 struct dwarf2_frame_ops* FUNC_1 (struct gdbarch*,int ) ;
 int FUNC_2 (struct gdbarch*,int ,struct dwarf2_frame_ops*) ;

__attribute__((used)) static struct dwarf2_frame_ops *
FUNC_3 (struct gdbarch *VAR_1)
{
  struct dwarf2_frame_ops *VAR_2 = FUNC_1 (VAR_1, VAR_0);
  if (VAR_2 == ((void*)0))
    {


      VAR_2 = FUNC_0 (VAR_1);
      FUNC_2 (VAR_1, VAR_0, VAR_2);
    }
  return VAR_2;
}
