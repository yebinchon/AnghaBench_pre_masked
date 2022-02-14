
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_short ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,size_t) ;
 char** VAR_1 ;

const char *
FUNC_3(
 u_short VAR_2
 )
{
 char *VAR_3;

 if (VAR_2 < FUNC_0(VAR_1) && VAR_1[VAR_2] != ((void*)0)) {
  VAR_3 = VAR_1[VAR_2];
 } else {
  FUNC_1(VAR_3);
  FUNC_2(VAR_3, VAR_0, "%d", VAR_2);
 }

 return VAR_3;
}
