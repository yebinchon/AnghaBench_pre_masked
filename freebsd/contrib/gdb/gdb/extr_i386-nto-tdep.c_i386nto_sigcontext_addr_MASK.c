
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (struct frame_info*,int ,char*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct frame_info *VAR_2)
{
  char VAR_3[4];
  CORE_ADDR VAR_4;

  FUNC_1 (VAR_2, VAR_1, VAR_3);
  VAR_4 = FUNC_0 (VAR_3, 4);

  return VAR_4 + VAR_0;
}
