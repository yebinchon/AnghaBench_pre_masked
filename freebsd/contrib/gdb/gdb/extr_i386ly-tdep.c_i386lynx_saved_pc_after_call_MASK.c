
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {scalar_t__ pc; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,unsigned char const*,int) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (struct frame_info *VAR_1)
{
  char VAR_2[7];
  static const unsigned char VAR_3[] =
  { 0x9a, 0, 0, 0, 0, 8, 0 };

  FUNC_1 (VAR_1->pc - 7, VAR_2, 7);
  if (FUNC_0 (VAR_2, VAR_3, 7) == 0)
    return FUNC_2 (FUNC_3 (VAR_0) + 4, 4);

  return FUNC_2 (FUNC_3 (VAR_0), 4);
}
