
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {struct gcov_info* info; int * ghost; } ;
struct gcov_info {int filename; } ;


 int FUNC_0 (struct gcov_info*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,struct gcov_info*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct gcov_node *VAR_0, struct gcov_info *VAR_1)
{
 if (FUNC_2(VAR_0->ghost, VAR_1))
  FUNC_0(VAR_1, VAR_0->ghost);
 else {
  FUNC_3("discarding saved data for '%s' (version changed)\n",
      VAR_1->filename);
 }
 FUNC_1(VAR_0->ghost);
 VAR_0->ghost = ((void*)0);
 VAR_0->info = VAR_1;
}
