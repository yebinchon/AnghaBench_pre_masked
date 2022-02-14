
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {int dummy; } ;
struct rckey {int rk_value; } ;
struct rcfile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rcsection* FUNC_0 (struct rcfile*,char const*) ;
 struct rckey* FUNC_1 (struct rcsection*,char const*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (char*,int ,char const*,char const*) ;

int
FUNC_4(struct rcfile *VAR_2, const char *VAR_3, const char *VAR_4, int *VAR_5)
{
 struct rcsection *VAR_6;
 struct rckey *VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_6)
  return VAR_0;
 VAR_7 = FUNC_1(VAR_6, VAR_4);
 if (!VAR_7)
  return VAR_0;
 VAR_1 = 0;
 *VAR_5 = FUNC_2(VAR_7->rk_value, ((void*)0), 0);
 if (VAR_1) {
  FUNC_3("invalid int value '%s' for key '%s' in section '%s'\n", VAR_7->rk_value, VAR_4, VAR_3);
  return VAR_1;
 }
 return 0;
}
