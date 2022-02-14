
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct frame_info*,int ) ;
 scalar_t__ FUNC_1 (struct frame_info*,scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2, VAR_3;

  VAR_2 = FUNC_0 (VAR_1, VAR_0);
  VAR_3 = FUNC_1 (VAR_1, VAR_2 + 8, 4);

  return VAR_3 + 36;
}
