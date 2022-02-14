
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;

int
FUNC_2(SCR *VAR_2, EXCMD *VAR_3)
{

 if (!FUNC_0(VAR_2, VAR_1)) {
  FUNC_1(VAR_2, VAR_0,
     "140|The open command requires that the open option be set");
  return (1);
 }

 FUNC_1(VAR_2, VAR_0, "141|The open command is not yet implemented");
 return (1);
}
