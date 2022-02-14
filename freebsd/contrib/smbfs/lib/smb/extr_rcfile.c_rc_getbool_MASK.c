
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {int dummy; } ;
struct rckey {char* rk_value; } ;
struct rcfile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char) ;
 struct rcsection* FUNC_2 (struct rcfile*,char const*) ;
 struct rckey* FUNC_3 (struct rcsection*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(struct rcfile *VAR_3, const char *VAR_4, const char *VAR_5, int *VAR_6)
{
 struct rcsection *VAR_7;
 struct rckey *VAR_8;
 char *VAR_9;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_7) return VAR_1;
 VAR_8 = FUNC_3(VAR_7,VAR_5);
 if (!VAR_8) return VAR_1;
 VAR_9 = VAR_8->rk_value;
 while (*VAR_9 && FUNC_1(*VAR_9)) VAR_9++;
 if (*VAR_9 == '0' || FUNC_4(VAR_9,"no") == 0 || FUNC_4(VAR_9,"false") == 0) {
  *VAR_6 = 0;
  return 0;
 }
 if (*VAR_9 == '1' || FUNC_4(VAR_9,"yes") == 0 || FUNC_4(VAR_9,"true") == 0) {
  *VAR_6 = 1;
  return 0;
 }
 FUNC_0(VAR_2, "invalid boolean value '%s' for key '%s' in section '%s' \n",VAR_9, VAR_5, VAR_4);
 return VAR_0;
}
