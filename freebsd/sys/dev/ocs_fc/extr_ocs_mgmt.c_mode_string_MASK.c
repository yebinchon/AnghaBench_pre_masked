
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *FUNC_1(int VAR_3)
{
 static char VAR_4[4];

 VAR_4[0] = '\0';
 if (VAR_3 & VAR_1) {
  FUNC_0(VAR_4, "r");
 }
 if (VAR_3 & VAR_2) {
  FUNC_0(VAR_4, "w");
 }
 if (VAR_3 & VAR_0) {
  FUNC_0(VAR_4, "x");
 }

 return VAR_4;

}
