
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, 0x1d);
  if ((VAR_3 & 0x8000) == 0)
   return 0;
 }

 return -VAR_0;
}
