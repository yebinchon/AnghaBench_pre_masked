
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afswtch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ,int,int ,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4, int VAR_5, int VAR_6, const struct afswtch *VAR_7)
{
 int VAR_8;

 if (FUNC_2(VAR_4, "off") == 0) {
  VAR_8 = VAR_2;
 } else if (FUNC_2(VAR_4, "on") == 0) {
  VAR_8 = VAR_3;
 } else if (FUNC_2(VAR_4, "mixed") == 0) {
  VAR_8 = VAR_1;
 } else {
  FUNC_0(1, "unknown wep mode");
 }

 FUNC_1(VAR_6, VAR_0, VAR_8, 0, ((void*)0));
}
