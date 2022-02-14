
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
typedef int bfd_byte ;
typedef scalar_t__ CORE_ADDR ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct gdbarch*) ;
 scalar_t__ FUNC_1 (int *,int ,unsigned int*,unsigned int*,int*,unsigned int*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,unsigned int*,unsigned int*,int*,unsigned int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int *,int) ;

__attribute__((used)) static int
FUNC_4 (struct gdbarch *VAR_7, CORE_ADDR VAR_8)
{
  int VAR_9 = FUNC_0 (VAR_7) / 8;
  bfd_byte VAR_10[6];
  unsigned int VAR_11, VAR_12, VAR_13;
  int VAR_14;

  if (VAR_9 == 4
      && !FUNC_3 (VAR_8 - 4, VAR_10, 4)
      && FUNC_1 (VAR_10, VAR_6, &VAR_11, &VAR_12, &VAR_14, &VAR_13)
      && VAR_12 == VAR_1 - VAR_0)
    return 1;

  if (VAR_9 == 4
      && !FUNC_3 (VAR_8 - 6, VAR_10, 6)
      && FUNC_2 (VAR_10, VAR_3, VAR_5, &VAR_11, &VAR_12, &VAR_14, &VAR_13)
      && VAR_12 == VAR_1 - VAR_0)
    return 1;

  if (VAR_9 == 8
      && !FUNC_3 (VAR_8 - 6, VAR_10, 6)
      && FUNC_2 (VAR_10, VAR_2, VAR_4, &VAR_11, &VAR_12, &VAR_14, &VAR_13)
      && VAR_12 == VAR_1 - VAR_0)
    return 1;

  return 0;
}
