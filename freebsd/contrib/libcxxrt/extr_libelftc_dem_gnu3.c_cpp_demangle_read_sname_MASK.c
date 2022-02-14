
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int * container; } ;
struct cpp_demangle_data {char* cur; TYPE_1__ output; int last_sname; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cpp_demangle_data*,char*,long) ;
 scalar_t__ FUNC_2 (struct cpp_demangle_data*,long*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct cpp_demangle_data *VAR_1)
{
 long VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0) || FUNC_2(VAR_1, &VAR_2) == 0 ||
     VAR_2 <= 0)
  return (0);

 if (VAR_2 == 12 && (FUNC_3("_GLOBAL__N_1", VAR_1->cur, 12) == 0))
  VAR_3 = FUNC_1(VAR_1, "(anonymous namespace)", 21);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_1->cur, VAR_2);

 if (VAR_3 == 0)
  return (0);

 FUNC_0(VAR_1->output.size > 0);
 if (FUNC_4(&VAR_1->cmd, VAR_0) == 0)
  VAR_1->last_sname =
      VAR_1->output.container[VAR_1->output.size - 1];

 VAR_1->cur += VAR_2;

 return (1);
}
