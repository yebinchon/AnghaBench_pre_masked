
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine_ops {int dummy; } ;
struct utrace_engine {void* data; struct utrace_engine_ops const* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct utrace_engine_ops const VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct utrace_engine *VAR_3, int VAR_4,
      const struct utrace_engine_ops *VAR_5, void *VAR_6)
{
 if ((VAR_4 & VAR_1) && VAR_3->ops != VAR_5)
  return 0;
 if ((VAR_4 & VAR_0) && VAR_3->data != VAR_6)
  return 0;
 return VAR_3->ops && VAR_3->ops != &VAR_2;
}
