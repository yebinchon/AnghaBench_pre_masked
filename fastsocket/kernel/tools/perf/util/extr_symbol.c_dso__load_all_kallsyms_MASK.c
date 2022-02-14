
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_kallsyms_args {struct dso* dso; struct map* map; } ;
struct map {int dummy; } ;
struct dso {int dummy; } ;


 int FUNC_0 (char const*,struct process_kallsyms_args*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct dso *VAR_1, const char *VAR_2,
      struct map *VAR_3)
{
 struct process_kallsyms_args VAR_4 = { .map = VAR_3, .dso = VAR_1, };
 return FUNC_0(VAR_2, &VAR_4, VAR_0);
}
