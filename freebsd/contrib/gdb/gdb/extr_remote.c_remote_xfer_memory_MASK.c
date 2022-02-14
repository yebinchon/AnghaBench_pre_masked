
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int *,int*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4,
      int VAR_5, struct mem_attrib *VAR_6,
      struct target_ops *VAR_7)
{
  CORE_ADDR VAR_8;
  int VAR_9;
  int VAR_10;


  FUNC_0 (VAR_0, VAR_1,
      VAR_2, VAR_4,
      &VAR_8, &VAR_9);
  if (VAR_9 <= 0)
    return 0;

  if (VAR_5)
    VAR_10 = FUNC_2 (VAR_8, VAR_3, VAR_9);
  else
    VAR_10 = FUNC_1 (VAR_8, VAR_3, VAR_9);

  return VAR_10;
}
