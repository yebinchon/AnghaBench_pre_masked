
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* shared_bitmap_info_t ;
struct TYPE_2__ {int pt_vars; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const shared_bitmap_info_t VAR_2 = (shared_bitmap_info_t) VAR_0;
  const shared_bitmap_info_t VAR_3 = (shared_bitmap_info_t) VAR_1;
  return FUNC_0 (VAR_2->pt_vars, VAR_3->pt_vars);
}
