
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static rtx
FUNC_3 (void)
{
  rtx VAR_5;
  if (VAR_2)
    {
      VAR_1 = 1;
      return VAR_4;
    }

  if (!VAR_3)
    VAR_3 = FUNC_2 (VAR_0, "_GLOBAL_OFFSET_TABLE_");
  VAR_5 = FUNC_1 (VAR_0);
  FUNC_0 (VAR_5, VAR_3);
  return VAR_5;
}
