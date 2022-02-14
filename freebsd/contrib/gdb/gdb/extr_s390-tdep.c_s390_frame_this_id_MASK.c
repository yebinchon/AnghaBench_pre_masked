
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_unwind_cache {int frame_base; int func; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;


 struct frame_id FUNC_0 (int,int ) ;
 struct s390_unwind_cache* FUNC_1 (struct frame_info*,void**) ;

__attribute__((used)) static void
FUNC_2 (struct frame_info *VAR_0,
      void **VAR_1,
      struct frame_id *VAR_2)
{
  struct s390_unwind_cache *VAR_3
    = FUNC_1 (VAR_0, VAR_1);

  if (VAR_3->frame_base == -1)
    return;

  *VAR_2 = FUNC_0 (VAR_3->frame_base, VAR_3->func);
}
