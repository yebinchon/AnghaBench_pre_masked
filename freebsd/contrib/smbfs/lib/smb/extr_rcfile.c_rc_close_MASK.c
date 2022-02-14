
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcsection {int dummy; } ;
struct rcfile {struct rcfile* rf_name; int rf_sect; int rf_f; } ;


 struct rcsection* FUNC_0 (int *) ;
 struct rcsection* FUNC_1 (struct rcsection*,int ) ;
 int FUNC_2 (int *,struct rcfile*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rcfile*) ;
 int VAR_0 ;
 int FUNC_5 (struct rcfile*,struct rcsection*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_6(struct rcfile *VAR_4)
{
 struct rcsection *VAR_5, *VAR_6;

 FUNC_3(VAR_4->rf_f);
 for(VAR_5 = FUNC_0(&VAR_4->rf_sect); VAR_5;) {
  VAR_6 = VAR_5;
  VAR_5 = FUNC_1(VAR_5,VAR_3);
  FUNC_5(VAR_4, VAR_6);
 }
 FUNC_4(VAR_4->rf_name);
 FUNC_2(&VAR_0, VAR_4, VAR_1, VAR_2);
 FUNC_4(VAR_4);
 return 0;
}
