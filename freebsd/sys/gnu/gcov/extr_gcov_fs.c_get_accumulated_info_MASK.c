
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int num_loaded; scalar_t__* loaded_info; scalar_t__ unloaded_info; } ;
struct gcov_info {int dummy; } ;


 int FUNC_0 (struct gcov_info*,scalar_t__) ;
 struct gcov_info* FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct gcov_info *
FUNC_2(struct gcov_node *VAR_0)
{
 struct gcov_info *VAR_1;
 int VAR_2 = 0;

 if (VAR_0->unloaded_info)
  VAR_1 = FUNC_1(VAR_0->unloaded_info);
 else
  VAR_1 = FUNC_1(VAR_0->loaded_info[VAR_2++]);
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 for (; VAR_2 < VAR_0->num_loaded; VAR_2++)
  FUNC_0(VAR_1, VAR_0->loaded_info[VAR_2]);

 return (VAR_1);
}
