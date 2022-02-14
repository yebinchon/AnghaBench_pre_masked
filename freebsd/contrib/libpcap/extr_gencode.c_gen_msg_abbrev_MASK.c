
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;





 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 struct block* FUNC_1 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static struct block *
FUNC_2(compiler_state_t *VAR_8, int VAR_9)
{
 struct block *VAR_10;





 switch (VAR_9) {

 case 128:
  VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_7, VAR_1, 0);
  break;

 case 133:
  VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_2, VAR_1, 0);
  break;

 case 132:
  VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_3, VAR_1, 0);
  break;

 case 131:
  VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_4, VAR_1, 0);
  break;

 case 130:
  VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_5, VAR_1, 0);
  break;

 case 129:
  VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_6, VAR_1, 0);
  break;

 default:
  FUNC_0();
 }
 return VAR_10;
}
