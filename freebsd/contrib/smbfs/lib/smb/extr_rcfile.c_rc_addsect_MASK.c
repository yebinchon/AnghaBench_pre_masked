
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {int rs_keys; int rs_name; } ;
struct rcfile {int rf_sect; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct rcsection*,int ) ;
 struct rcsection* FUNC_2 (int) ;
 struct rcsection* FUNC_3 (struct rcfile*,char const*) ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static struct rcsection *
FUNC_5(struct rcfile *VAR_1, const char *VAR_2)
{
 struct rcsection *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) return VAR_3;
 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (!VAR_3) return ((void*)0);
 VAR_3->rs_name = FUNC_4(VAR_2);
 FUNC_0(&VAR_3->rs_keys);
 FUNC_1(&VAR_1->rf_sect, VAR_3, VAR_0);
 return VAR_3;
}
