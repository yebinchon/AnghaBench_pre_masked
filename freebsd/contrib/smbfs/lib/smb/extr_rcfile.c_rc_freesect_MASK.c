
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {struct rcsection* rs_name; int rs_keys; } ;
struct rckey {int dummy; } ;
struct rcfile {int rf_sect; } ;


 struct rckey* FUNC_0 (int *) ;
 struct rckey* FUNC_1 (struct rckey*,int ) ;
 int FUNC_2 (int *,struct rcsection*,int ,int ) ;
 int FUNC_3 (struct rcsection*) ;
 int FUNC_4 (struct rckey*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct rcfile *VAR_3, struct rcsection *VAR_4)
{
 struct rckey *VAR_5,*VAR_6;

 FUNC_2(&VAR_3->rf_sect, VAR_4, VAR_0, VAR_2);
 for(VAR_5 = FUNC_0(&VAR_4->rs_keys);VAR_5;) {
  VAR_6 = VAR_5;
  VAR_5 = FUNC_1(VAR_5,VAR_1);
  FUNC_4(VAR_6);
 }
 FUNC_3(VAR_4->rs_name);
 FUNC_3(VAR_4);
 return 0;
}
