
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct vx_core *VAR_0, int VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1 <= 0))
  return 0;

 VAR_2 = (28224000 * 10) / VAR_1;
 VAR_2 = (VAR_2 + 5) / 10;


 if (FUNC_0(VAR_2 <= 0x00000200))
  return 0;

 if (VAR_2 <= 0x03ff)
  return VAR_2 - 0x00000201;
 if (VAR_2 <= 0x07ff)
  return (VAR_2 / 2) - 1;
 if (VAR_2 <= 0x0fff)
  return (VAR_2 / 4) + 0x000001ff;

 return 0x5fe;
}
