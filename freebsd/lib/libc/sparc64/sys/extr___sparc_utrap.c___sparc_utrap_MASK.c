
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrapframe {int uf_type; } ;


 int FUNC_0 (struct utrapframe*) ;




 int FUNC_1 (struct utrapframe*) ;
 int FUNC_2 (struct utrapframe*) ;
 int FUNC_3 (struct utrapframe*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 char** VAR_0 ;

void
FUNC_6(struct utrapframe *VAR_1)
{
 int VAR_2;

 switch (VAR_1->uf_type) {
 case 131:
 case 130:
  VAR_2 = FUNC_2(VAR_1);
  break;
 case 129:
  VAR_2 = FUNC_1(VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_3(VAR_1);
  break;
 default:
  break;
 }
 if (VAR_2) {
  FUNC_5("__sparc_utrap: fatal ");
  FUNC_5(VAR_0[VAR_1->uf_type]);
  FUNC_5("\n");
  FUNC_4(VAR_2);
 }
 FUNC_0(VAR_1);
}
