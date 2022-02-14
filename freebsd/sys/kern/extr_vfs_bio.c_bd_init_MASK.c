
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {int bd_run_lock; int * bd_subq; int bd_dirtyq; int * bd_cleanq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,char*) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct bufdomain *VAR_4)
{
 int VAR_5;

 VAR_4->bd_cleanq = &VAR_4->bd_subq[VAR_3 + 1];
 FUNC_0(VAR_4->bd_cleanq, VAR_1, VAR_3 + 1, "bufq clean lock");
 FUNC_0(&VAR_4->bd_dirtyq, VAR_2, -1, "bufq dirty lock");
 for (VAR_5 = 0; VAR_5 <= VAR_3; VAR_5++)
  FUNC_0(&VAR_4->bd_subq[VAR_5], VAR_1, VAR_5,
      "bufq clean subqueue lock");
 FUNC_1(&VAR_4->bd_run_lock, "bufspace daemon run lock", ((void*)0), VAR_0);
}
