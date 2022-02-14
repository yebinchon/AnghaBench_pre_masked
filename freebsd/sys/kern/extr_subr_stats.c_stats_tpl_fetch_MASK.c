
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsblob_tpl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 struct statsblob_tpl** VAR_2 ;

int
FUNC_2(int VAR_3, struct statsblob_tpl **VAR_4)
{
 int VAR_5;

 VAR_5 = 0;

 FUNC_0();
 if (VAR_3 < 0 || VAR_3 >= (int)VAR_1) {
  VAR_5 = VAR_0;
 } else {
  *VAR_4 = VAR_2[VAR_3];

 }
 FUNC_1();

 return (VAR_5);
}
