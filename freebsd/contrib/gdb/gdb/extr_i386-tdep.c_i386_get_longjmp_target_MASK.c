
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jb_pc_offset; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_5 (CORE_ADDR *VAR_5)
{
  char VAR_6[8];
  CORE_ADDR VAR_7, VAR_8;
  int VAR_9 = FUNC_2 (VAR_3)->jb_pc_offset;
  int VAR_10 = FUNC_0 (VAR_2);



  if (VAR_9 == -1)
    return 0;



  FUNC_3 (VAR_4, VAR_0, VAR_6);
  VAR_7 = FUNC_1 (VAR_6, VAR_1);
  if (FUNC_4 (VAR_7 + VAR_10, VAR_6, VAR_10))
    return 0;

  VAR_8 = FUNC_1 (VAR_6, VAR_1);
  if (FUNC_4 (VAR_8 + VAR_9, VAR_6, VAR_10))
    return 0;

  *VAR_5 = FUNC_1 (VAR_6, VAR_2);
  return 1;
}
