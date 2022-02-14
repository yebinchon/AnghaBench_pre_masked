
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ur_bb_info {int kill; int gen; int out; int in; } ;
struct dataflow {int dummy; } ;
typedef int bitmap ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct df_ur_bb_info* FUNC_1 (struct dataflow*,int) ;

__attribute__((used)) static bool
FUNC_2 (struct dataflow *VAR_0, int VAR_1)
{
  struct df_ur_bb_info *VAR_2 = FUNC_1 (VAR_0, VAR_1);
  bitmap VAR_3 = VAR_2->in;
  bitmap VAR_4 = VAR_2->out;
  bitmap VAR_5 = VAR_2->gen;
  bitmap VAR_6 = VAR_2->kill;

  return FUNC_0 (VAR_4, VAR_5, VAR_3, VAR_6);
}
