
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bb_info {int avloc; int killed; } ;
typedef int rtx ;
typedef void* basic_block ;


 struct bb_info* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_2, rtx VAR_3, void *VAR_4)
{
  int VAR_5;
  basic_block VAR_6 = VAR_4;
  struct bb_info *VAR_7 = FUNC_0 (VAR_6);

  if (FUNC_1 (VAR_2) == VAR_1)
    VAR_2 = FUNC_4 (VAR_2);

  if (!FUNC_3 (VAR_2))
    return;

  VAR_5 = FUNC_2 (VAR_2);
  FUNC_6 (VAR_7->killed, VAR_5);

  if (FUNC_1 (VAR_3) != VAR_0)
    FUNC_6 (VAR_7->avloc, VAR_5);
  else
    FUNC_5 (VAR_7->avloc, VAR_5);
}
