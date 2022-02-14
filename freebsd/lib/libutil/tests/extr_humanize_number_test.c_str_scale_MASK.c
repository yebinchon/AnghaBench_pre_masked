
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,int) ;
 char* FUNC_2 (int,char*) ;

__attribute__((used)) static char *
FUNC_3(int VAR_3) {
 char *VAR_4;

 if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
  return FUNC_2(VAR_3, "");

 VAR_4 = FUNC_0(VAR_2);
 VAR_4[0] = '\0';
 FUNC_1(VAR_4, VAR_2, "%d", VAR_3);
 return VAR_4;
}
