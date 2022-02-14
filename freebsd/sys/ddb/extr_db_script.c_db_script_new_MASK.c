
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_script {int ds_scriptname; } ;


 int VAR_0 ;
 struct ddb_script* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct ddb_script *
FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (FUNC_0(VAR_1[VAR_2].ds_scriptname) == 0)
   return (&VAR_1[VAR_2]);
 }
 return (((void*)0));
}
