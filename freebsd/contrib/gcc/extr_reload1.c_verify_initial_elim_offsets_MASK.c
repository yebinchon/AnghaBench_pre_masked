
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {scalar_t__ initial_offset; int to; int from; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct elim_table* VAR_2 ;

__attribute__((used)) static bool
FUNC_2 (void)
{
  HOST_WIDE_INT VAR_3;

  if (!VAR_1)
    return 1;
  FUNC_1 (VAR_3);
  if (VAR_3 != VAR_2[0].initial_offset)
    return 0;


  return 1;
}
