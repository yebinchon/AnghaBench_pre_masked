
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_param {int mode; int sort; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct callchain_param *VAR_3)
{
 switch (VAR_3->mode) {
 case 130:
  VAR_3->sort = VAR_1;
  break;
 case 129:
  VAR_3->sort = VAR_2;
  break;
 case 131:
  VAR_3->sort = VAR_0;
  break;
 case 128:
 default:
  return -1;
 }
 return 0;
}
