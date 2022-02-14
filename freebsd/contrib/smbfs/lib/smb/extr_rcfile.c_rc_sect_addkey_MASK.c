
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {int rs_keys; } ;
struct rckey {void* rk_value; void* rk_name; } ;


 int FUNC_0 (int *,struct rckey*,int ) ;
 int FUNC_1 (void*) ;
 struct rckey* FUNC_2 (int) ;
 struct rckey* FUNC_3 (struct rcsection*,char const*) ;
 int VAR_0 ;
 void* FUNC_4 (char const*) ;

__attribute__((used)) static struct rckey *
FUNC_5(struct rcsection *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct rckey *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_4->rk_value);
 } else {
  VAR_4 = FUNC_2(sizeof(*VAR_4));
  if (!VAR_4) return ((void*)0);
  FUNC_0(&VAR_1->rs_keys, VAR_4, VAR_0);
  VAR_4->rk_name = FUNC_4(VAR_2);
 }
 VAR_4->rk_value = VAR_3 ? FUNC_4(VAR_3) : FUNC_4("");
 return VAR_4;
}
