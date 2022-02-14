
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jailparam {int * jp_value; int * jp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jailparam*,int) ;
 scalar_t__ FUNC_1 (struct jailparam*) ;
 int FUNC_2 (struct jailparam*,int ,int) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int ,int ,int ) ;

int
FUNC_5(struct jailparam *VAR_3, const char *VAR_4)
{

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->jp_name = FUNC_3(VAR_4);
 if (VAR_3->jp_name == ((void*)0)) {
  FUNC_4(VAR_1, VAR_2, VAR_0);
  return (-1);
 }
 if (FUNC_1(VAR_3) < 0) {
  FUNC_0(VAR_3, 1);
  VAR_3->jp_name = ((void*)0);
  VAR_3->jp_value = ((void*)0);
  return (-1);
 }
 return (0);
}
