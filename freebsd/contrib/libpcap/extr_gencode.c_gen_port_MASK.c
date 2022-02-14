
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;


 int VAR_0 ;




 int FUNC_0 () ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct block*,struct block*) ;
 struct block* FUNC_4 (int *,int,int const,int) ;

__attribute__((used)) static struct block *
FUNC_5(compiler_state_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct block *VAR_5, *VAR_6, *VAR_7;
 VAR_5 = FUNC_2(VAR_1, VAR_0);

 switch (VAR_3) {
 case 129:
 case 130:
 case 131:
  VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 128:
  VAR_7 = FUNC_4(VAR_1, VAR_2, 130, VAR_4);
  VAR_6 = FUNC_4(VAR_1, VAR_2, 129, VAR_4);
  FUNC_3(VAR_7, VAR_6);
  VAR_7 = FUNC_4(VAR_1, VAR_2, 131, VAR_4);
  FUNC_3(VAR_7, VAR_6);
  break;

 default:
  FUNC_0();
 }
 FUNC_1(VAR_5, VAR_6);
 return VAR_6;
}
