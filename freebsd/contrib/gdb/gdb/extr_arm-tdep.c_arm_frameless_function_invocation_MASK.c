
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;

__attribute__((used)) static int
FUNC_2 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2, VAR_3;
  int VAR_4;
  VAR_2 = (FUNC_1 (VAR_1) + VAR_0);
  VAR_3 = FUNC_0 (VAR_2);





  VAR_4 = (VAR_3 < VAR_2 + 12);
  return VAR_4;
}
