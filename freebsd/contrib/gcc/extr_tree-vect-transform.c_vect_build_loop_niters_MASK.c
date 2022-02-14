
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int dummy; } ;
typedef int loop_vec_info ;
typedef int edge ;
typedef int basic_block ;


 struct loop* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__*,int,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct loop*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static tree
FUNC_10 (loop_vec_info VAR_0)
{
  tree VAR_1, VAR_2, VAR_3;
  edge VAR_4;
  struct loop *VAR_5 = FUNC_0 (VAR_0);
  tree VAR_6 = FUNC_9 (FUNC_1 (VAR_0));

  VAR_3 = FUNC_5 (FUNC_2 (VAR_6), "niters");
  FUNC_3 (VAR_3);
  VAR_1 = FUNC_6 (VAR_6, &VAR_2, 0, VAR_3);

  VAR_4 = FUNC_8 (VAR_5);
  if (VAR_2)
    {
      basic_block VAR_7 = FUNC_4 (VAR_4, VAR_2);
      FUNC_7 (!VAR_7);
    }

  return VAR_1;
}
