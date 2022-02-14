
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_sym {int dummy; } ;


 struct res_sym* VAR_0 ;
 struct res_sym* VAR_1 ;

 char const* FUNC_0 (struct res_sym const*,int,int*) ;

const char *
FUNC_1(int VAR_2, int VAR_3) {
 const struct res_sym *VAR_4;

 switch (VAR_3) {
 case 128:
  VAR_4 = VAR_1;
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }
 return (FUNC_0(VAR_4, VAR_2, (int *)0));
}
