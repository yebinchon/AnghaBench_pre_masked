
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct frame_info*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct frame_info *VAR_1, int VAR_2,
        struct type *VAR_3)
{
  CORE_ADDR VAR_4 = FUNC_0 (VAR_1, VAR_0);
  return FUNC_1 (VAR_4 + (4 * (VAR_2 + 1)), 4);
}
