
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int db_strategy_t ;
typedef unsigned int db_expr_t ;
typedef unsigned int db_addr_t ;
typedef int c_db_sym_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,int ,size_t*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

c_db_sym_t
FUNC_1(db_addr_t VAR_4, db_strategy_t VAR_5, db_expr_t *VAR_6)
{
 unsigned int VAR_7;
 size_t VAR_8;
 int VAR_9;
 c_db_sym_t VAR_10 = VAR_0, VAR_11;

 VAR_8 = VAR_7 = VAR_4;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
     VAR_11 = FUNC_0(&VAR_3[VAR_9], VAR_4, VAR_5, &VAR_8);
     if ((uintmax_t)VAR_8 < (uintmax_t)VAR_7) {
  VAR_1 = &VAR_3[VAR_9];
  VAR_7 = VAR_8;
  VAR_10 = VAR_11;
     }
 }
 *VAR_6 = VAR_7;
 return VAR_10;
}
