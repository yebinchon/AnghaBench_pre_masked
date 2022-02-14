
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (struct frame_info*,int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (struct frame_info *VAR_1)
{
  char VAR_2[4];
  CORE_ADDR VAR_3;

  FUNC_1 (VAR_1, VAR_0, VAR_2);
  VAR_3 = FUNC_0 (VAR_2, 4);

  return FUNC_2 (VAR_3 + 8, 4);
}
