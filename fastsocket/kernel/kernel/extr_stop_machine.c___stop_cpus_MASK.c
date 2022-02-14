
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
struct cpu_stop_done {int ret; scalar_t__ executed; int completion; } ;
typedef int cpu_stop_fn_t ;


 int VAR_0 ;
 int FUNC_0 (struct cpu_stop_done*,int ) ;
 int FUNC_1 (struct cpumask const*) ;
 int FUNC_2 (struct cpumask const*,int ,void*,struct cpu_stop_done*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const struct cpumask *VAR_1,
         cpu_stop_fn_t VAR_2, void *VAR_3)
{
 struct cpu_stop_done VAR_4;

 FUNC_0(&VAR_4, FUNC_1(VAR_1));
 FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_4);
 FUNC_3(&VAR_4.completion);
 return VAR_4.executed ? VAR_4.ret : -VAR_0;
}
