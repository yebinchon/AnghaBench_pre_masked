
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_replace_data {int to; int from; } ;
typedef int rtx ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (rtx *VAR_0, void *VAR_1)
{
  struct see_replace_data *VAR_2
    = (struct see_replace_data *) VAR_1;

  *VAR_0 = FUNC_0 (*VAR_0, VAR_2->from, VAR_2->to);
}
