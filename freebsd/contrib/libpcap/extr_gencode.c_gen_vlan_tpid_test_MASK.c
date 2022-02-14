
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct block* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct block*,struct block*) ;

__attribute__((used)) static struct block *
FUNC_2(compiler_state_t *VAR_3)
{
 struct block *VAR_4, *VAR_5;


 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_4,VAR_5);
 VAR_4 = VAR_5;
 VAR_5 = FUNC_0(VAR_3, VAR_2);
 FUNC_1(VAR_4,VAR_5);

 return VAR_5;
}
