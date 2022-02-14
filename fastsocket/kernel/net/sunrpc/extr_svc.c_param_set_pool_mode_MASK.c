
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_pool_map {scalar_t__ count; } ;
struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,int) ;
 struct svc_pool_map VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3(const char *VAR_8, struct kernel_param *VAR_9)
{
 int *VAR_10 = (int *)VAR_9->arg;
 struct svc_pool_map *VAR_11 = &VAR_6;
 int VAR_12;

 FUNC_0(&VAR_7);

 VAR_12 = -VAR_0;
 if (VAR_11->count)
  goto out;

 VAR_12 = 0;
 if (!FUNC_2(VAR_8, "auto", 4))
  *VAR_10 = VAR_2;
 else if (!FUNC_2(VAR_8, "global", 6))
  *VAR_10 = VAR_3;
 else if (!FUNC_2(VAR_8, "percpu", 6))
  *VAR_10 = VAR_4;
 else if (!FUNC_2(VAR_8, "pernode", 7))
  *VAR_10 = VAR_5;
 else
  VAR_12 = -VAR_1;

out:
 FUNC_1(&VAR_7);
 return VAR_12;
}
