
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gstr {int len; int s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

struct gstr FUNC_2(void)
{
 struct gstr VAR_0;
 VAR_0.s = FUNC_0(sizeof(char) * 64);
 VAR_0.len = 64;
 FUNC_1(VAR_0.s, "\0");
 return VAR_0;
}
