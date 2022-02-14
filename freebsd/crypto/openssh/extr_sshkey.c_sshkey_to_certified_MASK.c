
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; int * cert; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 () ;

int
FUNC_1(struct sshkey *VAR_7)
{
 int VAR_8;

 switch (VAR_7->type) {
 case 130:
  VAR_8 = VAR_2;
  break;





 default:
  return VAR_6;
 }
 if ((VAR_7->cert = FUNC_0()) == ((void*)0))
  return VAR_5;
 VAR_7->type = VAR_8;
 return 0;
}
