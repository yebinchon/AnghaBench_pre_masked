
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
 struct block* FUNC_4 (int *,int,int,int const,int) ;

__attribute__((used)) static struct block *
FUNC_5(compiler_state_t *VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5)
{
 struct block *VAR_6, *VAR_7, *VAR_8;


 VAR_6 = FUNC_2(VAR_1, VAR_0);

 switch (VAR_4) {
 case 129:
 case 130:
 case 131:
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  break;

 case 128:
  VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_3, 130, VAR_5);
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3, 129, VAR_5);
  FUNC_3(VAR_8, VAR_7);
  VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_3, 131, VAR_5);
  FUNC_3(VAR_8, VAR_7);
  break;

 default:
  FUNC_0();
 }
 FUNC_1(VAR_6, VAR_7);
 return VAR_7;
}
