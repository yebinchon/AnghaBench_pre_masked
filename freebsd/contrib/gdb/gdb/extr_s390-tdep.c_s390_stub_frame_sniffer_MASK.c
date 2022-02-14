
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int bfd_byte ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 struct frame_unwind const VAR_1 ;

__attribute__((used)) static const struct frame_unwind *
FUNC_3 (struct frame_info *VAR_2)
{
  CORE_ADDR VAR_3 = FUNC_0 (VAR_2);
  bfd_byte VAR_4[VAR_0];




  if (FUNC_1 (VAR_3, ((void*)0))
      || FUNC_2 (VAR_4, VAR_3) < 0)
    return &VAR_1;
  return ((void*)0);
}
