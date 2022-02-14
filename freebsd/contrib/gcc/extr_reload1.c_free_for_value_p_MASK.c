
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int** VAR_0 ;
 int FUNC_0 (int,int,int,int,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_1, enum machine_mode VAR_2, int VAR_3,
    enum reload_type VAR_4, rtx VAR_5, rtx VAR_6, int VAR_7,
    int VAR_8)
{
  int VAR_9 = VAR_0[VAR_1][VAR_2];
  while (VAR_9-- > 0)
    if (! FUNC_0 (VAR_1, VAR_1 + VAR_9, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7,
           VAR_8))
      return 0;
  return 1;
}
