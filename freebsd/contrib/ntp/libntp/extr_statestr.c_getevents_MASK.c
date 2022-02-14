
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,int,char*) ;

__attribute__((used)) static const char *
FUNC_2(
 int VAR_1
 )
{
 char * VAR_2;

 if (VAR_1 == 0)
  return "no events";

 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0, "%d event%s", VAR_1,
   (1 == VAR_1)
       ? ""
       : "s");

 return VAR_2;
}
