
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
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4, int VAR_5, int VAR_6, const struct afswtch *VAR_7)
{
 int VAR_8;

 if (FUNC_2(VAR_4, "off") == 0) {
  VAR_8 = VAR_2;
 } else if (FUNC_2(VAR_4, "cts") == 0) {
  VAR_8 = VAR_1;
 } else if (FUNC_3(VAR_4, "rtscts", 3) == 0) {
  VAR_8 = VAR_3;
 } else {
  FUNC_0(1, "unknown protection mode");
 }

 FUNC_1(VAR_6, VAR_0, VAR_8, 0, ((void*)0));
}
