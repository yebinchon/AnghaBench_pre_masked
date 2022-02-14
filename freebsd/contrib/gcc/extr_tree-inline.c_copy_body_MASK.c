
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef int gcov_type ;
struct TYPE_4__ {int src_fn; } ;
typedef TYPE_1__ copy_body_data ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static tree
FUNC_4 (copy_body_data *VAR_0, gcov_type VAR_1, int VAR_2,
    basic_block VAR_3, basic_block VAR_4)
{
  tree VAR_5 = VAR_0->src_fn;
  tree VAR_6;


  FUNC_3 (FUNC_1 (FUNC_0 (VAR_5)));
  VAR_6 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

  return VAR_6;
}
