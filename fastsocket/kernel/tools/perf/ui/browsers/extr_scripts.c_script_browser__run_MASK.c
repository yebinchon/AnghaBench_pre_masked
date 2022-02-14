
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_script_browser {int b; int script_name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct perf_script_browser *VAR_0)
{
 int VAR_1;

 if (FUNC_2(&VAR_0->b, VAR_0->script_name,
        "Press <- or ESC to exit") < 0)
  return -1;

 while (1) {
  VAR_1 = FUNC_1(&VAR_0->b, 0);


  break;
 }

 FUNC_0(&VAR_0->b);
 return VAR_1;
}
