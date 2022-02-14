
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_node {TYPE_1__* info; int ghost; } ;
struct TYPE_2__ {int filename; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct gcov_node *VAR_1)
{
 VAR_1->ghost = FUNC_0(VAR_1->info);
 if (!VAR_1->ghost) {
  FUNC_1("could not save data for '%s' (out of memory)\n",
      VAR_1->info->filename);
  return -VAR_0;
 }
 VAR_1->info = ((void*)0);

 return 0;
}
