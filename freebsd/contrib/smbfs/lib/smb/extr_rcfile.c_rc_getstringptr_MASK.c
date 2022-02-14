
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {int dummy; } ;
struct rckey {char* rk_value; } ;
struct rcfile {int dummy; } ;


 int VAR_0 ;
 struct rcsection* FUNC_0 (struct rcfile*,char const*) ;
 struct rckey* FUNC_1 (struct rcsection*,char const*) ;

int
FUNC_2(struct rcfile *VAR_1, const char *VAR_2, const char *VAR_3,
 char **VAR_4)
{
 struct rcsection *VAR_5;
 struct rckey *VAR_6;

 *VAR_4 = ((void*)0);
 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5) return VAR_0;
 VAR_6 = FUNC_1(VAR_5,VAR_3);
 if (!VAR_6) return VAR_0;
 *VAR_4 = VAR_6->rk_value;
 return 0;
}
