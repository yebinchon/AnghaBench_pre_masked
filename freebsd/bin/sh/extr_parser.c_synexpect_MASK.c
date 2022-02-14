
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int ,...) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 char VAR_3[64];

 if (VAR_2 >= 0) {
  FUNC_0(VAR_3, 64, "%s unexpected (expecting %s)",
   VAR_1[VAR_0], VAR_1[VAR_2]);
 } else {
  FUNC_0(VAR_3, 64, "%s unexpected", VAR_1[VAR_0]);
 }
 FUNC_1(VAR_3);
}
