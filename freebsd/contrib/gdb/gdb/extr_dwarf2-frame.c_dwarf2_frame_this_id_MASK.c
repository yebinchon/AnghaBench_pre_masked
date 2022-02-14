
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct dwarf2_frame_cache {int cfa; } ;


 struct dwarf2_frame_cache* FUNC_0 (struct frame_info*,void**) ;
 int FUNC_1 (struct frame_info*) ;
 struct frame_id FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct frame_info *VAR_0, void **VAR_1,
        struct frame_id *VAR_2)
{
  struct dwarf2_frame_cache *VAR_3 =
    FUNC_0 (VAR_0, VAR_1);

  (*VAR_2) = FUNC_2 (VAR_3->cfa, FUNC_1 (VAR_0));
}
