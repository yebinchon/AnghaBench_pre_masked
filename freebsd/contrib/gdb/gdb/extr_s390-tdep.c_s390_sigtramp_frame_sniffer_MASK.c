
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int bfd_byte ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 struct frame_unwind const VAR_0 ;

__attribute__((used)) static const struct frame_unwind *
FUNC_2 (struct frame_info *VAR_1)
{
  CORE_ADDR VAR_2 = FUNC_0 (VAR_1);
  bfd_byte VAR_3[2];

  if (FUNC_1 (VAR_2, VAR_3, 2))
    return ((void*)0);

  if (VAR_3[0] != 0x0a )
    return ((void*)0);

  if (VAR_3[1] != 119
      && VAR_3[1] != 173 )
    return ((void*)0);

  return &VAR_0;
}
